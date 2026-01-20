#include "linalg.hpp"

int main() {
    linalg::Matrix A = {{1, 2, 3}, {4, 5, 2}, {7, 8, 9}};
    size_t n = A.size();
    linalg::Matrix L = linalg::identity(n);
    linalg::Matrix U = A;
    
    for(size_t i=0; i<n; ++i) {
        for(size_t j=i+1; j<n; ++j) {
            double factor = U[j][i] / U[i][i];
            L[j][i] = factor;
            for(size_t k=i; k<n; ++k) U[j][k] -= factor * U[i][k];
        }
    }
    
    linalg::print(L, "L");
    linalg::print(U, "U");
    return 0;
}
