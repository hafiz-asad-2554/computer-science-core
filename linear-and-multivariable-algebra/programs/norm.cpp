#include "linalg.hpp"

int main() {
    linalg::Vector v = {3, 4};
    std::cout << "Norm: " << linalg::norm(v) << std::endl;
    return 0;
}
