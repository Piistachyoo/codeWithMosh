#include "Classes/CheckBox.h"
#include "Classes/Circle.h"
#include "Classes/DateTime.h"
#include "Classes/FileIO.h"
#include "Classes/MaskedTextBox.h"
#include "Classes/Rectangle.h"
#include "Classes/Textbox.h"
#include "Classes/Widget.h"
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

void showWidget(Widget &widget) { widget.draw(); }
void showShape(Shape &shape) { shape.draw(); }

int main() {
    DateTime DT(2023, 9, 24, 3, 50, 40);
    cout << DT.getYear() << '/' << DT.getMonth() << '/' << DT.getDay() << endl
         << DT.getHour() << ':' << DT.getMinute() << ':' << DT.getSecond()
         << endl;
    return 0;
}
