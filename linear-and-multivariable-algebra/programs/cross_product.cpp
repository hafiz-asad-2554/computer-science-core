#include "linalg.hpp"

int main() {
    linalg::Vector a = {1, 0, 0};
    linalg::Vector b = {0, 1, 0};

    linalg::Vector result = linalg::cross(a, b);
    linalg::print(result, "Cross product");

    return 0;
}
