#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    std::cout << "Enter the coordinates for the center of projection S (x y z t):" << std::endl;
    std::vector<double> S(4);
    for (int i = 0; i < 4; ++i) {
        std::cin >> S[i];
    }

    std::cout << "Enter the coefficients of the projection plane pi (A B C D):" << std::endl;
    std::vector<double> pi(4);
    for (int i = 0; i < 4; ++i) {
        std::cin >> pi[i];
    }

    double pi_S = 0.0;
    for (int i = 0; i < 4; ++i) {
        pi_S += pi[i] * S[i];
    }

    if (pi_S == 0.0) {
        std::cerr << "Error: The center of projection S lies on the projection plane pi." << std::endl;
        std::cerr << "The central projection matrix is undefined in this case." << std::endl;
        return 1;
    }

    std::vector<std::vector<double>> M(4, std::vector<double>(4, 0.0));
    
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            double outer_product_element = S[i] * pi[j];
            
            if (i == j) {
                M[i][j] = pi_S - outer_product_element;
            } else {
                M[i][j] = 0.0 - outer_product_element;
            }
        }
    }

    std::cout << "\n--- Matrix of Central Projection ---\n";
    for (int i = 0; i < 4; ++i) {
        std::cout << "[ ";
        for (int j = 0; j < 4; ++j) {
            std::cout << std::setw(10) << std::fixed << std::setprecision(4) << M[i][j] << " ";
        }
        std::cout << "]\n";
    }

    return 0;
}
