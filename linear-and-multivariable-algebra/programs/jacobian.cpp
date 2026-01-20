#include "linalg.hpp"

int main() {
    // f(x, y) = [x^2 + y, y^2 + x]
    // J = [[2x, 1], [1, 2y]]
    double x = 1.0, y = 2.0;
    linalg::Matrix J = {{2.0*x, 1.0}, {1.0, 2.0*y}};
    linalg::print(J, "Jacobian at (1, 2)");
    return 0;
}
