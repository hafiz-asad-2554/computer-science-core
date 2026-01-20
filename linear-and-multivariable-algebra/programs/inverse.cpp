#include "linalg.hpp"

int main() {
    linalg::Matrix A = {{1, 2}, {3, 4}};
    double det = linalg::determinant(A);
    if(std::abs(det) < 1e-9) {
        std::cout << "Matrix is singular." << std::endl;
        return 0;
    }
    
    // 2x2 Inverse logic: 1/det * [d -b; -c a]
    linalg::Matrix inv = {{A[1][1]/det, -A[0][1]/det}, {-A[1][0]/det, A[0][0]/det}};
    linalg::print(inv, "Inverse");
    return 0;
}
