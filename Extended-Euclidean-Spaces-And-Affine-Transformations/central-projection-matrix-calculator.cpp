#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdexcept>

struct Vector4 {
    float x, y, z, t;
    Vector4(float x = 0, float y = 0, float z = 0, float t = 0) : x(x), y(y), z(z), t(t) {}
};

float dot(const Vector4& a, const Vector4& b) {
    return a.x * b.x + a.y * b.y + a.z * b.z + a.t * b.t;
}

struct Matrix4 {
    float m[4][4];

    void print() const {
        for (int i = 0; i < 4; ++i) {
            std::cout << "[ ";
            for (int j = 0; j < 4; ++j) {
                std::cout << std::setw(8) << std::fixed << std::setprecision(2) << m[i][j] << " ";
            }
            std::cout << "]" << std::endl;
        }
    }
};

Matrix4 calculateProjectionMatrix(const Vector4& C, const Vector4& pi) {
    float lambda = dot(pi, C);

    if (std::abs(lambda) < 1e-6f) {
        throw std::invalid_argument("Грешка: Проекционният център лежи в проекционната равнина.");
    }

    Matrix4 M;
    float c_arr[4] = {C.x, C.y, C.z, C.t};
    float p_arr[4] = {pi.x, pi.y, pi.z, pi.t};

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            M.m[i][j] = c_arr[i] * p_arr[j] - (i == j ? lambda : 0.0f);
        }
    }

    return M;
}

int main() {
    Vector4 C(0.0f, 0.0f, 10.0f, 1.0f);
    Vector4 pi(0.0f, 0.0f, 1.0f, 0.0f);

    try {
        Matrix4 M = calculateProjectionMatrix(C, pi);
        
        std::cout << "Матрицата M на централното проектиране:" << std::endl;
        M.print();
        
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
