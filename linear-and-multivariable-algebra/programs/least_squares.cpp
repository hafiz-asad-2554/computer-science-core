#include "linalg.hpp"

int main() {
    linalg::Matrix A = {{1, 1}, {1, 2}, {1, 3}};
    linalg::Vector y = {1, 2, 2};

    // Least Squares: x = (A^T A)^-1 A^T y
    linalg::Matrix AT = linalg::transpose(A);
    linalg::Matrix ATA = linalg::multiply(AT, A);
    linalg::Vector ATy = linalg::multiply(AT, y);

    // For 2x2 ATA, we can use simple inverse logic
    double det = ATA[0][0]*ATA[1][1] - ATA[0][1]*ATA[1][0];
    linalg::Matrix invATA = {{ATA[1][1]/det, -ATA[0][1]/det}, {-ATA[1][0]/det, ATA[0][0]/det}};
    
    linalg::Vector x = linalg::multiply(invATA, ATy);
    linalg::print(x, "Least Squares Solution");

    return 0;
}
