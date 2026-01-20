#ifndef LINALG_HPP
#define LINALG_HPP

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <stdexcept>
#include <random>

namespace linalg {

    typedef std::vector<std::vector<double>> Matrix;
    typedef std::vector<double> Vector;

    inline void print(const Matrix& A, const std::string& name = "") {
        if (!name.empty()) std::cout << name << " =" << std::endl;
        for (const auto& row : A) {
            std::cout << "[";
            for (size_t i = 0; i < row.size(); ++i) {
                std::cout << std::setw(10) << row[i] << (i == row.size() - 1 ? "" : ", ");
            }
            std::cout << "]" << std::endl;
        }
    }

    inline void print(const Vector& v, const std::string& name = "") {
        if (!name.empty()) std::cout << name << " = ";
        std::cout << "[";
        for (size_t i = 0; i < v.size(); ++i) {
            std::cout << std::setw(10) << v[i] << (i == v.size() - 1 ? "" : ", ");
        }
        std::cout << "]" << std::endl;
    }

    inline Matrix multiply(const Matrix& A, const Matrix& B) {
        if (A[0].size() != B.size()) throw std::invalid_argument("Incompatible dimensions for multiplication");
        Matrix C(A.size(), Vector(B[0].size(), 0.0));
        for (size_t i = 0; i < A.size(); ++i) {
            for (size_t j = 0; j < B[0].size(); ++j) {
                for (size_t k = 0; k < B.size(); ++k) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        return C;
    }

    inline Vector multiply(const Matrix& A, const Vector& v) {
        if (A[0].size() != v.size()) throw std::invalid_argument("Incompatible dimensions for multiplication");
        Vector result(A.size(), 0.0);
        for (size_t i = 0; i < A.size(); ++i) {
            for (size_t j = 0; j < A[0].size(); ++j) {
                result[i] += A[i][j] * v[j];
            }
        }
        return result;
    }

    inline double dot(const Vector& a, const Vector& b) {
        if (a.size() != b.size()) throw std::invalid_argument("Vector size mismatch");
        double res = 0;
        for (size_t i = 0; i < a.size(); ++i) res += a[i] * b[i];
        return res;
    }

    inline Vector cross(const Vector& a, const Vector& b) {
        if (a.size() != 3 || b.size() != 3) throw std::invalid_argument("Cross product only for 3D vectors");
        return {
            a[1] * b[2] - a[2] * b[1],
            a[2] * b[0] - a[0] * b[2],
            a[0] * b[1] - a[1] * b[0]
        };
    }

    inline double norm(const Vector& v) {
        double sum = 0;
        for (double x : v) sum += x * x;
        return std::sqrt(sum);
    }

    inline Matrix transpose(const Matrix& A) {
        Matrix T(A[0].size(), Vector(A.size()));
        for (size_t i = 0; i < A.size(); ++i) {
            for (size_t j = 0; j < A[0].size(); ++j) {
                T[j][i] = A[i][j];
            }
        }
        return T;
    }

    inline Matrix identity(size_t n) {
        Matrix I(n, Vector(n, 0.0));
        for (size_t i = 0; i < n; ++i) I[i][i] = 1.0;
        return I;
    }

    inline double determinant(Matrix A) {
        size_t n = A.size();
        if (n != A[0].size()) throw std::invalid_argument("Matrix must be square");
        double det = 1.0;
        for (size_t i = 0; i < n; ++i) {
            size_t pivot = i;
            for (size_t j = i + 1; j < n; ++j) if (std::abs(A[j][i]) > std::abs(A[pivot][i])) pivot = j;
            std::swap(A[i], A[pivot]);
            if (pivot != i) det *= -1;
            if (std::abs(A[i][i]) < 1e-9) return 0;
            det *= A[i][i];
            for (size_t j = i + 1; j < n; ++j) {
                double factor = A[j][i] / A[i][i];
                for (size_t k = i + 1; k < n; ++k) A[j][k] -= factor * A[i][k];
            }
        }
        return det;
    }

    inline void eigen_dominant(const Matrix& A, double& eigenvalue, Vector& eigenvector, int iterations = 100) {
        size_t n = A.size();
        eigenvector = Vector(n, 1.0);
        for (int i = 0; i < iterations; ++i) {
            Vector next = multiply(A, eigenvector);
            double nrm = norm(next);
            for (size_t j = 0; j < n; ++j) eigenvector[j] = next[j] / nrm;
        }
        eigenvalue = dot(eigenvector, multiply(A, eigenvector));
    }
}

#endif
