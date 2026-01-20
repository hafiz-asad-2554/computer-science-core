#include "linalg.hpp"

int main() {
    linalg::Vector a = {1, 2};
    linalg::Vector b = {3, 4};
    linalg::Vector sum(a.size());
    for (size_t i = 0; i < a.size(); ++i) sum[i] = a[i] + b[i];
    linalg::print(sum, "Vector Addition");
    return 0;
}
