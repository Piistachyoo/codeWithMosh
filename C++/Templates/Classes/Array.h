#ifndef ARRAY_H
#define ARRAY_H

#include <cstddef> // For size_t
#include <stdexcept>

template <typename Tp> class Array {
  public:
    explicit Array(size_t _size);
    ~Array();

    Tp &operator[](size_t index);

  private:
    Tp *values;
    size_t size;
};

template <typename Tp> Array<Tp>::Array(size_t _size) {
    this->values = new Tp[_size];
    this->size = _size;
}

template <typename Tp> Array<Tp>::~Array() { delete[] values; }

template <typename Tp> Tp &Array<Tp>::operator[](size_t index) {
    if ((index >= size) || (index < 0)) {
        throw std::invalid_argument("index");
    }

    return values[index];
}

#endif