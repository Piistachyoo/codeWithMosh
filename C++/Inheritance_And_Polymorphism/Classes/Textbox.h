#ifndef TEXTBOX_H
#define TEXTBOX_H

#include "Widget.h"
#include <string>

class TextBox : public Widget {
  private:
    std::string value = "string fady :)\n";

  public:
    void draw() const final override;
    void setValue(std::string _str);
    std::string getValue();

    ~TextBox();
};

#endif