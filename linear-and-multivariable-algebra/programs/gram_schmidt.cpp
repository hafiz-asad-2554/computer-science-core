#include "linalg.hpp"

int main() {
    std::vector<linalg::Vector> basis = {{1, 1, 0}, {1, 0, 1}, {0, 1, 1}};
    std::vector<linalg::Vector> orthogonal;
    
    for(const auto& v : basis) {
        linalg::Vector u = v;
        for(const auto& q : orthogonal) {
            double scalar = linalg::dot(v, q) / linalg::dot(q, q);
            for(size_t i=0; i<u.size(); ++i) u[i] -= scalar * q[i];
        }
        orthogonal.push_back(u);
    }
    
    for(size_t i=0; i<orthogonal.size(); ++i) {
        linalg::print(orthogonal[i], "u" + std::to_string(i+1));
    }
    
    return 0;
}
