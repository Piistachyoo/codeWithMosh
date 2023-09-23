#ifndef ARRAY_H
#define ARRAY_H

#include <cstddef> // For size_t

class Array {
  public:
    explicit Array(size_t _size);
    ~Array();

    int &operator[](size_t index);

  private:
    int *values;
    size_t size;
};

#endif