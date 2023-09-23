#include "Point.h"

Point::Point(int _x, int _y) : x(_x), y(_y) {}

bool Point::operator==(const Point &other) const {
    return ((x == other.x) && (y == other.y));
}

Point Point::operator+(const Point &other) const {
    return Point(this->getX() + other.getX(), this->getY() + other.getY());
}

Point Point::operator+(const int x) const {
    return Point(this->getX() + x, this->getY() + x);
}

Point &Point::operator++() {
    x++;
    y++;
    return *this;
}

Point Point::operator++(int) {
    Point temp = *this;
    operator++();
    return temp;
}

int Point::getX() const { return this->x; }

int Point::getY() const { return this->y; }

void Point::setX(const int x) { this->x = x; }

void Point::setY(const int y) { this->y = y; }

std::ostream &operator<<(std::ostream &stream, const Point &obj) {
    stream << '(' << obj.getX() << ", " << obj.getY() << ')';
    return stream;
}

std::istream &operator>>(std::istream &stream, Point &obj) {
    stream >> obj.x;
    stream >> obj.y;
    return stream;
}
