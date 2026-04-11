#include <iostream>
#include <cmath>
#include <stdexcept>
#include <iomanip>

struct Vector4 {
    float x, y, z, t;

    Vector4(float x = 0, float y = 0, float z = 0, float t = 0) : x(x), y(y), z(z), t(t) {}

    Vector4 operator-(const Vector4& b) const {
        return Vector4(x - b.x, y - b.y, z - b.z, t - b.t);
    }

    Vector4 operator*(float scalar) const {
        return Vector4(scalar * x, scalar * y, scalar * z, scalar * t);
    }
};

Vector4 operator*(float scalar, const Vector4& v) {
    return v * scalar;
}

float dot(const Vector4& a, const Vector4& b) {
    return a.x * b.x + a.y * b.y + a.z * b.z + a.t * b.t;
}

Vector4 calculateProjection(const Vector4& C, const Vector4& pi, const Vector4& P) {
    float pi_dot_P = dot(pi, P);
    float pi_dot_C = dot(pi, C);

    if (std::abs(pi_dot_C) < 1e-6f) {
        throw std::invalid_argument("Грешка: Центърът на проекция лежи в проекционната равнина.");
    }

    return (pi_dot_P * C) - (pi_dot_C * P);
}

int main() {
    Vector4 C(0.0f, 0.0f, 10.0f, 1.0f);
    Vector4 pi(0.0f, 0.0f, 1.0f, 0.0f);
    Vector4 P(3.0f, 4.0f, 5.0f, 1.0f);

    try {
        Vector4 P_prime = calculateProjection(C, pi, P);
        
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "(" << P_prime.x << ", " << P_prime.y << ", " 
                  << P_prime.z << ", " << P_prime.t << ")" << std::endl;

        if (std::abs(P_prime.t) > 1e-6f) {
            float invT = 1.0f / P_prime.t;
            std::cout << "(" << P_prime.x * invT << ", " 
                      << P_prime.y * invT << ", " 
                      << P_prime.z * invT << ")" << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}