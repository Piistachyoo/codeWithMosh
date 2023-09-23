#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
  public:
    Point() = default;
    explicit Point(int _x, int _y);

    bool operator==(const Point &other) const;
    Point operator+(const Point &other) const;
    Point operator+(const int x) const;
    Point &operator++();   // prefix
    Point operator++(int); // postfix

    int getX() const;
    int getY() const;
    void setX(const int x);
    void setY(const int y);

  private:
    int x;
    int y;
    friend std::istream &operator>>(std::istream &stream, Point &obj);
};

std::ostream &operator<<(std::ostream &stream, const Point &obj);

#endif