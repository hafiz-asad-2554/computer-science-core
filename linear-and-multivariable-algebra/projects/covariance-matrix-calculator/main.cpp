#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>
#include "../linalg.hpp"

int main() {
    std::cout << "Covariance Matrix Calculator." << std::endl;
    // Sample Data: Rows are observations, Cols are variables
    linalg::Matrix data = {
        {1.0, 2.0},
        {2.0, 3.0},
        {3.0, 4.0},
        {4.0, 5.0}
    };

    size_t n = data.size();       // Number of observations
    size_t m = data[0].size();    // Number of variables

    // 1. Calculate Mean
    std::vector<double> means(m, 0.0);
    for (size_t j = 0; j < m; ++j) {
        for (size_t i = 0; i < n; ++i) means[j] += data[i][j];
        means[j] /= n;
    }

    // 2. Center Data
    linalg::Matrix centered = data;
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) centered[i][j] -= means[j];
    }

    // 3. Covariance = (centered^T * centered) / (n - 1)
    linalg::Matrix centeredT = linalg::transpose(centered);
    linalg::Matrix cov = linalg::multiply(centeredT, centered);
    
    for (size_t i = 0; i < m; ++i) {
        for (size_t j = 0; j < m; ++j) cov[i][j] /= (n - 1);
    }

    linalg::print(cov, "Covariance Matrix");
    return 0;
}
