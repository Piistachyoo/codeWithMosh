#ifndef SHAPE_H
#define SHAPE_H
#include <string>

// Abstract class (Have unimplemented virtual method)
// Can't be used as an object
class Shape {
  public:
    std::string getBackground();
    void setBackground(std::string value);
    virtual void draw() const = 0; // pure virtual method

  private:
    std::string background;
};

#endif