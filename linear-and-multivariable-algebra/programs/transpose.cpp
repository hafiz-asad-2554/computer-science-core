#include "linalg.hpp"

int main() {
    linalg::Matrix A = {{1, 2}, {3, 4}};
    linalg::Matrix T = linalg::transpose(A);
    linalg::print(T, "Transpose");
    return 0;
}
