#include "linalg.hpp"

int main() {
    linalg::Vector a = {1, 2, 3};
    linalg::Vector b = {4, 5, 6};

    double result = linalg::dot(a, b);
    std::cout << "Dot product: " << result << std::endl;

    return 0;
}
