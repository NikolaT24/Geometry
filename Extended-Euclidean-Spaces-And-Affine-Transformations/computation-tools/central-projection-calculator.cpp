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

    std::cout << "Enter the coordinates of the point to project X (x y z t):" << std::endl;
    std::vector<double> X(4);
    for (int i = 0; i < 4; ++i) {
        std::cin >> X[i];
    }
    
    double pi_S = 0.0;
    for (int i = 0; i < 4; ++i) {
        pi_S += pi[i] * S[i];
    }

    if (pi_S == 0.0) {
        std::cerr << "Error: The center of projection S lies on the projection plane pi." << std::endl;
        std::cerr << "Central projection is undefined in this case." << std::endl;
        return 1;
    }

    std::vector<std::vector<double>> M(4, std::vector<double>(4, 0.0));
    
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            // Start with the outer product: S_i * pi_j
            double outer_product_element = S[i] * pi[j];
            
            // Subtract from the scaled identity matrix element
            if (i == j) {
                M[i][j] = pi_S - outer_product_element;
            } else {
                M[i][j] = 0.0 - outer_product_element;
            }
        }
    }

    std::vector<double> X_star(4, 0.0);
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            X_star[i] += M[i][j] * X[j];
        }
    }

    std::cout << "\n--- Results ---\n";
    std::cout << "Projected Point X* in homogeneous coordinates:\n";
    std::cout << "[ ";
    for (int i = 0; i < 4; ++i) {
        std::cout << std::fixed << std::setprecision(4) << X_star[i] << (i < 3 ? ", " : " ");
    }
    std::cout << "]" << std::endl;

    return 0;
}
