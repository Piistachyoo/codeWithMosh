#include "Textbox.h"
#include <iostream>

void TextBox::setValue(std::string _str) { this->value = _str; }

std::string TextBox::getValue() { return this->value; }

void TextBox::draw() const { std::cout << "Drawing a TextBox" << std::endl; }

TextBox::~TextBox() { std::cout << "Destructing a TextBox" << std::endl; }
