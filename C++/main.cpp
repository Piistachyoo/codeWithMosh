#include "Classes/Length.h"
#include "Classes/Person.h"
#include "Classes/Point.h"
#include "Classes/Rectangle.hpp"
#include "Classes/SmartPointer.h"
#include "Classes/Textbox.h"
#include <iostream>
#include <memory>
using namespace std;

int main() {
    Point L1(10, 20);
    Point L2 = L1;
    Length S1{22};
    cout << L1++ << L1 << ++L2;
}
