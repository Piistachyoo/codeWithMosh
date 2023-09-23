#ifndef SHAPE_H
#define SHAPE_H
#include <string>
class Shape {
  public:
    std::string getBackground();
    void setBackground(std::string value);

  private:
    std::string background;
};

#endif