#include "Rectangle.hpp"
#include <iostream>
using namespace std;

int Rectangle::objectsCount = 0;

Rectangle::Rectangle(const Rectangle &source) {
    this->width = source.width;
    this->height = source.height;
    this->color = source.color;
    cout << "Rectangle copied!" << endl;
}

Rectangle::Rectangle(int width, int height) {
    cout << "Constructing a rectangle!" << endl;
    setWidth(width);
    setHeight(height);
    objectsCount++;
}

Rectangle::Rectangle(int width, int height, const std::string &color)
    : Rectangle(width, height) {
    cout << "Constructing a rectangle with color" << endl;
    this->color = color;
}

Rectangle::~Rectangle() {
    // cout << "Destructor called" << endl;
}

void Rectangle::setWidth(int width) {
    if (width < 0)
        throw invalid_argument("The width cannot be negative!");
    else if (width > 100)
        throw out_of_range("The width cannot be greated than 100!");
    this->width = width;
}

int Rectangle::getWidth() const { return this->width; }

void Rectangle::setHeight(int height) {
    if (height < 0)
        throw invalid_argument("height");
    this->height = height;
}

int Rectangle::getHeight() const { return this->height; }

void Rectangle::draw() {
    cout << "Drawing a rectangle" << endl;
    cout << "Dimensions: " << width << ", " << height << endl;
}

int Rectangle::getArea() const { return width * height; }

int Rectangle::getObjectsCount() { return objectsCount; }
