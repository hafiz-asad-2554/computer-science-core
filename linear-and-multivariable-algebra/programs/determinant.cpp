#include "linalg.hpp"

int main() {
    linalg::Matrix A = {{4, 7}, {2, 6}};
    std::cout << "Determinant: " << linalg::determinant(A) << std::endl;
    return 0;
}
