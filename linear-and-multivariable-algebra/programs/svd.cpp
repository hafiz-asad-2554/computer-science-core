#include "linalg.hpp"

int main() {
    linalg::Matrix A = {{3, 1}, {1, 3}};
    
    // SVD: A = U Sigma V^T
    // For 2x2, we can find ATA and find its eigenvalues/vectors for V and Sigma
    linalg::Matrix AT = linalg::transpose(A);
    linalg::Matrix ATA = linalg::multiply(AT, A);
    
    // Characteristic eqn: det(ATA - lambda I) = 0
    // (A[0][0]-L)(A[1][1]-L) - A[0][1]*A[1][0] = 0
    // L^2 - (A[0][0]+A[1][1])L + (A[0][0]*A[1][1] - A[0][1]*A[1][0]) = 0
    double trace = ATA[0][0] + ATA[1][1];
    double det = ATA[0][0]*ATA[1][1] - ATA[0][1]*ATA[1][0];
    double disc = std::sqrt(trace*trace - 4*det);
    double l1 = (trace + disc) / 2;
    double l2 = (trace - disc) / 2;
    
    std::cout << "Singular values: " << std::sqrt(l1) << ", " << std::sqrt(l2) << std::endl;
    return 0;
}
