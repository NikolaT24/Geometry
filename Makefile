.DEFAULT_GOAL := all

CXX ?= g++

TOOLS_DIR := computation-tools
WRITTEN_EXAM_DIR := Written-Exam
BUILD_DIR := build
BIN_DIR := $(BUILD_DIR)/bin

BASE_CXXFLAGS := -std=c++17 -Wall -Wextra -Wpedantic
CPPFLAGS ?=
CXXFLAGS ?= $(BASE_CXXFLAGS)
LDFLAGS ?=
LDLIBS ?=

SOURCES := $(sort $(wildcard $(TOOLS_DIR)/*.cpp))
TOOLS := $(patsubst $(TOOLS_DIR)/%.cpp,%,$(SOURCES))
PROGRAMS := $(addprefix $(BIN_DIR)/,$(TOOLS))

WRITTEN_EXAM_FILES := \
	$(WRITTEN_EXAM_DIR)/Assumptions.md \
	$(WRITTEN_EXAM_DIR)/Written-Exam-Example-Problems.pdf

.PHONY: all tools docs written-exam clean rebuild debug release sanitize list run help $(TOOLS)

all: tools docs

tools: $(PROGRAMS)

docs: written-exam

written-exam: $(WRITTEN_EXAM_FILES)
	@printf 'Written exam bundle is present (%s files).\n' "$(words $(WRITTEN_EXAM_FILES))"

$(BIN_DIR)/%: $(TOOLS_DIR)/%.cpp
	@mkdir -p "$(@D)"
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $< $(LDFLAGS) $(LDLIBS) -o $@

$(TOOLS): %: $(BIN_DIR)/%

run: tools
	@if [ -z "$(TOOL)" ]; then \
		echo "Usage: make run TOOL=<tool-name>"; \
		echo "Run 'make list' to see available tools."; \
		exit 1; \
	fi
	@if [ ! -x "$(BIN_DIR)/$(TOOL)" ]; then \
		echo "Unknown tool: $(TOOL)"; \
		echo "Run 'make list' to see available tools."; \
		exit 1; \
	fi
	@"$(BIN_DIR)/$(TOOL)"

list:
	@printf 'C++ tools:\n'
	@printf '  %s\n' $(TOOLS)
	@printf 'Written exam files:\n'
	@printf '  %s\n' $(WRITTEN_EXAM_FILES)

clean:
	$(RM) -r $(BUILD_DIR)

rebuild: clean all

debug:
	$(MAKE) clean
	$(MAKE) CXXFLAGS="$(BASE_CXXFLAGS) -O0 -g3" all

release:
	$(MAKE) clean
	$(MAKE) CXXFLAGS="$(BASE_CXXFLAGS) -O2 -DNDEBUG" all

sanitize:
	$(MAKE) clean
	$(MAKE) \
		CXXFLAGS="$(BASE_CXXFLAGS) -O1 -g -fsanitize=address,undefined -fno-omit-frame-pointer" \
		LDFLAGS="$(LDFLAGS) -fsanitize=address,undefined" \
		all

help:
	@printf '%s\n' \
		'make                         Build all tools and validate documentation' \
		'make tools                   Build every C++ calculator' \
		'make docs                    Validate documentation bundles' \
		'make written-exam            Validate the Written-Exam bundle' \
		'make list                    List tools and Written-Exam files' \
		'make <tool-name>             Build one calculator' \
		'make run TOOL=<tool-name>    Build and run one calculator' \
		'make debug                   Rebuild with debug symbols' \
		'make release                 Rebuild with optimizations' \
		'make sanitize                Rebuild with ASan and UBSan' \
		'make clean                   Remove generated files' \
		'make rebuild                 Clean and build again'
