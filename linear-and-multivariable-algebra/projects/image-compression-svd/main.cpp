#include <iostream>
#include <vector>
#include "../linalg.hpp"

int main() {
    std::cout << "Image Compression SVD Logic (Simplified)." << std::endl;
    
    // Representing a 3x3 "Image"
    linalg::Matrix image = {
        {100, 150, 200},
        {150, 200, 250},
        {200, 250, 300}
    };

    // simplified SVD for demo: A = U S V^T
    // For a real C++ project, we'd use a full SVD solver. 
    // Here we show the concept of rank-1 approximation.
    
    linalg::Matrix AT = linalg::transpose(image);
    linalg::Matrix ATA = linalg::multiply(AT, image);
    
    double ev;
    linalg::Vector v;
    linalg::eigen_dominant(ATA, ev, v);
    
    double sigma = std::sqrt(ev);
    linalg::Vector u = linalg::multiply(image, v);
    double u_norm = linalg::norm(u);
    for(size_t i=0; i<u.size(); ++i) u[i] /= u_norm;

    // Rank-1 Approximation: A' = sigma * u * v^T
    linalg::Matrix approx(image.size(), linalg::Vector(image[0].size()));
    for(size_t i=0; i<approx.size(); ++i) {
        for(size_t j=0; j<approx[0].size(); ++j) {
            approx[i][j] = sigma * u[i] * v[j];
        }
    }

    linalg::print(approx, "Rank-1 Compression Approximation");
    return 0;
}
