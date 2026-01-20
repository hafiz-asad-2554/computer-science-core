#include "../linalg.hpp"

linalg::Matrix rotate_z(double theta) {
    double c = std::cos(theta);
    double s = std::sin(theta);
    return {{c, -s, 0}, {s, c, 0}, {0, 0, 1}};
}

int main() {
    linalg::Vector point = {1, 0, 0};
    linalg::Matrix rot = rotate_z(M_PI / 2.0);
    linalg::Vector rotated = linalg::multiply(rot, point);
    
    linalg::print(rotated, "Rotated Point");
    return 0;
}
