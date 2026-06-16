CXX ?= g++

SRC_DIR := computation-tools
BUILD_DIR := build
BIN_DIR := $(BUILD_DIR)/bin

BASE_CXXFLAGS := -std=c++17 -Wall -Wextra -Wpedantic
CPPFLAGS ?=
CXXFLAGS ?= $(BASE_CXXFLAGS)
LDFLAGS ?=
LDLIBS ?=

SOURCES := $(sort $(wildcard $(SRC_DIR)/*.cpp))
TOOLS := $(patsubst $(SRC_DIR)/%.cpp,%,$(SOURCES))
PROGRAMS := $(addprefix $(BIN_DIR)/,$(TOOLS))

.PHONY: all clean rebuild debug release sanitize list run help $(TOOLS)

all: $(PROGRAMS)

$(BIN_DIR)/%: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $< $(LDFLAGS) $(LDLIBS) -o $@

$(TOOLS): %: $(BIN_DIR)/%

run: all
	@if [ -z "$(TOOL)" ]; then \
		echo "Usage: make run TOOL=<tool-name>"; \
		echo "Run 'make list' to see available tools."; \
		exit 1; \
	fi
	@"$(BIN_DIR)/$(TOOL)"

list:
	@printf '%s\n' $(TOOLS)

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
		'make                         Build every C++ calculator' \
		'make list                    List available calculators' \
		'make <tool-name>             Build one calculator' \
		'make run TOOL=<tool-name>    Build and run one calculator' \
		'make debug                   Rebuild with debug symbols' \
		'make release                 Rebuild with optimizations' \
		'make sanitize                Rebuild with ASan and UBSan' \
		'make clean                   Remove generated files' \
		'make rebuild                 Clean and build again'
