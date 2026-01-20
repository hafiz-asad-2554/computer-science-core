#include "linalg.hpp"

int main() {
    linalg::Vector a = {1, 2, 3}; // vector to project
    linalg::Vector b = {1, 0, 0}; // line to project onto
    
    double dot_ab = linalg::dot(a, b);
    double dot_bb = linalg::dot(b, b);
    
    double scalar = dot_ab / dot_bb;
    linalg::Vector proj(b.size());
    for(size_t i=0; i<b.size(); ++i) proj[i] = scalar * b[i];
    
    linalg::print(proj, "Projection of a onto b");
    return 0;
}
