#include "linalg.hpp"

int main() {
    linalg::Matrix A = {{2, 1}, {1, 2}};
    double ev;
    linalg::Vector e_vec;
    linalg::eigen_dominant(A, ev, e_vec);
    
    std::cout << "Dominant Eigenvalue: " << ev << std::endl;
    linalg::print(e_vec, "Dominant Eigenvector");
    
    return 0;
}
