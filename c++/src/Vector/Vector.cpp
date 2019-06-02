#include "Vector.hpp"

Vector::Vector(int size) {
    _vector.resize(size);
}

Vector::Vector(std::vector<int> vector) {
    _vector = vector;
}

Vector::~Vector() {}

void Vector::print() {
    for (int n = 0; n < _vector.size(); n++) {
        std::cout << _vector[n] << " ";     
    }
    std::cout << "" << std::endl;
}
