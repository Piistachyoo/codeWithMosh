#ifndef LENGTH_H
#define LENGTH_H

#include <compare>
#include <iostream>

using namespace std;

class Length {
  public:
    Length() = default;
    explicit Length(int value);

    bool operator==(const Length &other_obj) const;
    bool operator==(const int val) const;
    bool operator!=(const int val) const;
    strong_ordering operator<=>(const Length &other) const;
    Length operator+(const Length &other) const;
    Length &operator+=(const Length &other);
    Length &operator=(const Length &other);
    Length &operator++();   // prefix
    Length operator++(int); // postfix

    void setValue(int value);
    int getValue() const;

  private:
    int value;
    int x;
};

ostream &operator<<(ostream &stream, const Length &obj);
istream &operator>>(istream &stream, Length &obj);

#endif // LENGTH_H