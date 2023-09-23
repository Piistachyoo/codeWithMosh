#include "Classes/Circle.h"
#include "Classes/Rectangle.h"
#include "Classes/Textbox.h"
#include <iostream>
using namespace std;

int main() {
    Circle circ;
    Rectangle rect;
    circ.setBackground("blue");
    rect.setBackground("red");
    cout << "Circle background: " << circ.getBackground() << endl
         << "Rectangle background: " << rect.getBackground() << endl;
}
