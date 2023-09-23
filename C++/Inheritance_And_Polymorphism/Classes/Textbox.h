#ifndef TEXTBOX_H
#define TEXTBOX_H

#include "Widget.h"
#include <string>

class TextBox : public Widget {
  private:
    std::string value = "string fady :)\n";

  public:
    TextBox() = default;
    TextBox(const std::string &val);
    void setValue(std::string _str);
    std::string getValue();
};

#endif