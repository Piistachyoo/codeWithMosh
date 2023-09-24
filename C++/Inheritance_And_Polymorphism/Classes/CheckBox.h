#ifndef CHECKBOX_H_
#define CHECKBOX_H_
#include "Widget.h"

class CheckBox : public Widget {
  public:
    void draw() const override;

    ~CheckBox();
};

#endif // CHECKBOX_H_
