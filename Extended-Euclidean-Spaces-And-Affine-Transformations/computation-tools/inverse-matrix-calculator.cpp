#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

int main() {
    int n;
    std::cout << "Enter the dimension of the square matrix: ";
    std::cin >> n;

    std::vector<std::vector<double>> matrix(n, std::vector<double>(2 * n, 0.0));

    for (int i = 0; i < n; ++i) {
        std::cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
        matrix[i][i + n] = 1.0;
    }

    for (int i = 0; i < n; ++i) {
        int max_row = i;
        for (int k = i + 1; k < n; ++k) {
            if (std::abs(matrix[k][i]) > std::abs(matrix[max_row][i])) {
                max_row = k;
            }
        }

        if (max_row != i) {
            std::swap(matrix[i], matrix[max_row]);
        }

        if (std::abs(matrix[i][i]) < 1e-9) {
            std::cerr << "\nError: The matrix is singular and cannot be inverted.\n";
            return 1;
        }

        double pivot = matrix[i][i];
        for (int j = 0; j < 2 * n; ++j) {
            matrix[i][j] /= pivot;
        }

        for (int k = 0; k < n; ++k) {
            if (k != i) {
                double factor = matrix[k][i];
                for (int j = 0; j < 2 * n; ++j) {
                    matrix[k][j] -= factor * matrix[i][j];
                }
            }
        }
    }

    std::cout << "\n--- Inverse Matrix ---\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "[ ";
        for (int j = n; j < 2 * n; ++j) {
            std::cout << std::setw(10) << std::fixed << std::setprecision(4) << matrix[i][j] << " ";
        }
        std::cout << "]\n";
    }

    return 0;
}
