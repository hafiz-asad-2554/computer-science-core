#include "linalg.hpp"

int main() {
    // f(x, y) = x^2 + y^2
    // grad f = [2x, 2y]
    double x = 1.0, y = 2.0;
    linalg::Vector grad = {2*x, 2*y};
    linalg::print(grad, "Gradient at (1, 2)");
    return 0;
}
