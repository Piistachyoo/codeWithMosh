#include "Length.h"
#include <iostream>

Length::Length(int value) : value(value) {}

void Length::setValue(int value) { this->value = value; }

int Length::getValue() const { return this->value; }

bool Length::operator==(const Length &other_obj) const {
    return value == other_obj.value;
}

bool Length::operator==(const int val) const { return value == val; }

bool Length::operator!=(const int val) const { return !(value == val); }

Length Length::operator+(const Length &other) const {
    return Length(this->getValue() + other.getValue());
}

Length &Length::operator+=(const Length &other) {
    this->value += other.getValue();
    return *this;
}

Length &Length::operator=(const Length &other) {
    cout << "Object assigned" << endl;
    this->value = other.getValue() + 10;
    return *this;
}

Length &Length::operator++() {
    this->value++;
    return *this;
}

Length Length::operator++(int) {
    Length copy = *this;
    operator++();
    return copy;
}

Length::operator int() const { return this->value; }

std::strong_ordering Length::operator<=>(const Length &other) const {
    return this->value <=> other.value;
}

std::ostream &operator<<(ostream &stream, const Length &obj) {
    stream << obj.getValue();
    return stream;
}

istream &operator>>(istream &stream, Length &obj) {
    int temp;
    stream >> temp;
    obj.setValue(temp);
    return stream;
}
