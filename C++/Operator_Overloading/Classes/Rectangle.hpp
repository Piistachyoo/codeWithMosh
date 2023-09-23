#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include <string>

class Rectangle {
  private:
    int width = 0;
    int height = 0;
    std::string color;

    static int objectsCount;

  public:
    Rectangle() = default;
    Rectangle(const Rectangle &source);
    Rectangle(int width, int height);
    Rectangle(int width, int height, const std::string &color);
    ~Rectangle();
    void setWidth(int width);
    int getWidth() const;
    void setHeight(int height);
    int getHeight() const;
    void draw();
    int getArea() const;
    static int getObjectsCount();
};

#endif