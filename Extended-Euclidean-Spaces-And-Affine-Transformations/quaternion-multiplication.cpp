#include <iostream>
#include <iomanip>

struct Quaternion {
    double w, x, y, z;

    Quaternion(double w = 1.0, double x = 0.0, double y = 0.0, double z = 0.0) 
        : w(w), x(x), y(y), z(z) {}

    Quaternion operator*(const Quaternion& q) const {
        return Quaternion(
            w * q.w - x * q.x - y * q.y - z * q.z,
            w * q.x + x * q.w + y * q.z - z * q.y,
            w * q.y - x * q.z + y * q.w + z * q.x,
            w * q.z + x * q.y - y * q.x + z * q.w
        );
    }

    void print() const {
        std::cout << w << " + " << x << "i + " << y << "j + " << z << "k\n";
    }
};

int main() {
    Quaternion q1(1.0, 2.0, 3.0, 4.0);
    Quaternion q2(5.0, 6.0, 7.0, 8.0);

    Quaternion result = q1 * q2;

    std::cout << "q1 = "; 
    q1.print();
    
    std::cout << "q2 = "; 
    q2.print();
    
    std::cout << "q1 * q2 = "; 
    result.print();

    return 0;
}
