#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle : public Shape {
  public:
    void draw() const override;
};

#endif // CIRCLE_H_