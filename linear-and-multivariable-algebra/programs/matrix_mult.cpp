#include "linalg.hpp"

int main() {
    linalg::Matrix A = {{1, 2}, {3, 4}};
    linalg::Matrix B = {{5, 6}, {7, 8}};

    linalg::Matrix C = linalg::multiply(A, B);
    linalg::print(C, "AB");

    return 0;
}
