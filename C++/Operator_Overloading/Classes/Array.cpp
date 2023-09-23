#include "Array.h"
#include <stdexcept>

Array::Array(size_t _size) {
    this->values = new int[_size];
    this->size = _size;
}

Array::~Array() { delete[] values; }

int &Array::operator[](size_t index) {
    if ((index >= size) || (index < 0)) {
        throw std::invalid_argument("index");
    }

    return values[index];
}
