#include "Person.h"
#include <iostream>

Person::Person(int age) : age{age} {}

int Person::getAge(void) { return this->age; }
