//
// Created by omar on 23.09.2023
//
#include "CheckBox.h"
#include <iostream>

void CheckBox::draw() const { std::cout << "Drawing a CheckBox" << std::endl; }

CheckBox::~CheckBox() { std::cout << "Destructing a CheckBox" << std::endl; }
