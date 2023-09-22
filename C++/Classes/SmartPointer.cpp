#include "SmartPointer.h"

SmartPointer::SmartPointer() { this->ptr = nullptr; }

SmartPointer::SmartPointer(int *ptr) { this->ptr = ptr; }

SmartPointer::~SmartPointer() {
    delete ptr;
    this->ptr = nullptr;
}
