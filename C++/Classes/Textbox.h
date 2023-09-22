#ifndef TEXTBOX_H
#define TEXTBOX_H

#include <string>

class TextBox {
  private:
    std::string value = "string fady :)\n";

  public:
    TextBox() = default;
    TextBox(std::string &&val);
    void setValue(std::string _str);
    std::string getValue();
};

#endif