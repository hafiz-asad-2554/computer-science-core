#include "linalg.hpp"

linalg::Vector pagerank(linalg::Matrix M, int num_iterations = 100, double d = 0.85) {
    size_t N = M[0].size();
    linalg::Vector v(N);
    
    // Random initialization
    std::mt19937 gen(42);
    std::uniform_real_distribution<> dis(0, 1);
    double sum = 0;
    for(size_t i=0; i<N; ++i) {
        v[i] = dis(gen);
        sum += v[i];
    }
    for(size_t i=0; i<N; ++i) v[i] /= sum;

    // M_hat = (d * M) + (((1 - d) / N) * ones(N, N))
    linalg::Matrix M_hat = M;
    double damping_val = (1.0 - d) / N;
    for(size_t i=0; i<N; ++i) {
        for(size_t j=0; j<N; ++j) {
            M_hat[i][j] = d * M[i][j] + damping_val;
        }
    }

    for(int i=0; i<num_iterations; ++i) {
        v = linalg::multiply(M_hat, v);
    }
    return v;
}

int main() {
    std::cout << "PageRank Logic." << std::endl;
    linalg::Matrix M = {{0, 0, 1}, {0.5, 0, 0}, {0.5, 1, 0}};
    linalg::Vector result = pagerank(M);
    linalg::print(result, "PR Scores");
    return 0;
}
