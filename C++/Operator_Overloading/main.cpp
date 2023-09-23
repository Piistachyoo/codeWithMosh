#include "Classes/Array.h"
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
    Length L1{10};
    int x = static_cast<int>(L1);
    cout << x << endl << L1 << endl;
}
