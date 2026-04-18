#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <stdexcept>

using Matrix = std::vector<std::vector<double>>;

Matrix invertMatrix(const Matrix& A) {
    int n = A.size();
    for (int i = 0; i < n; ++i) {
        if (A[i].size() != n) {
            throw std::invalid_argument("Matrix must be square.");
        }
    }

    Matrix aug(n, std::vector<double>(2 * n, 0.0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            aug[i][j] = A[i][j];
        }
        aug[i][i + n] = 1.0;
    }

    for (int i = 0; i < n; ++i) {
        int pivot = i;
        for (int j = i + 1; j < n; ++j) {
            if (std::abs(aug[j][i]) > std::abs(aug[pivot][i])) {
                pivot = j;
            }
        }

        if (std::abs(aug[pivot][i]) < 1e-9) {
            throw std::runtime_error("Матрицата е особена и следователно не е обратима.");
        }

        if (pivot != i) {
            std::swap(aug[i], aug[pivot]);
        }

        double pivotVal = aug[i][i];
        for (int j = 0; j < 2 * n; ++j) {
            aug[i][j] /= pivotVal;
        }

        for (int j = 0; j < n; ++j) {
            if (i != j) {
                double factor = aug[j][i];
                for (int k = 0; k < 2 * n; ++k) {
                    aug[j][k] -= factor * aug[i][k];
                }
            }
        }
    }

    Matrix inv(n, std::vector<double>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            inv[i][j] = aug[i][j + n];
        }
    }
    return inv;
}

void printMatrix(const Matrix& M) {
    for (const auto& row : M) {
        std::cout << "[ ";
        for (double val : row) {
            std::cout << std::setw(10) << std::fixed << std::setprecision(4) << val << " ";
        }
        std::cout << "]\n";
    }
}

int main() {
    Matrix A = {
        {4.0, 7.0, 2.0},
        {2.0, 6.0, 1.0},
        {3.0, 1.0, 8.0}
    };

    try {
        std::cout << "Original Matrix:\n";
        printMatrix(A);

        Matrix invA = invertMatrix(A);

        std::cout << "\nInverse Matrix:\n";
        printMatrix(invA);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }

    return 0;
}
