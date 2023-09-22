#include "Textbox.h"
#include <string>
TextBox::TextBox(std::string &&val) { this->value = val; }
void TextBox::setValue(std::string _str) { this->value = _str; }

std::string TextBox::getValue() { return this->value; }
