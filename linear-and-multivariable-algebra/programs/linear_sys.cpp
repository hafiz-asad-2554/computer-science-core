#include "linalg.hpp"

int main() {
    linalg::Matrix A = {{1, 2, 3}, {4, 5, 2}, {2, 3, 2}};
    linalg::Vector b = {6, 11, 7};
    
    // Simple Gaussian Elimination to solve Ax = b
    size_t n = A.size();
    for(size_t i=0; i<n; ++i) {
        size_t pivot = i;
        for(size_t j=i+1; j<n; ++j) if(std::abs(A[j][i]) > std::abs(A[pivot][i])) pivot = j;
        std::swap(A[i], A[pivot]);
        std::swap(b[i], b[pivot]);
        
        for(size_t j=i+1; j<n; ++j) {
            double factor = A[j][i] / A[i][i];
            b[j] -= factor * b[i];
            for(size_t k=i; k<n; ++k) A[j][k] -= factor * A[i][k];
        }
    }
    
    linalg::Vector x(n);
    for(int i=n-1; i>=0; --i) {
        double sum = 0;
        for(size_t j=i+1; j<n; ++j) sum += A[i][j] * x[j];
        x[i] = (b[i] - sum) / A[i][i];
    }
    
    linalg::print(x, "Solution x");
    return 0;
}
