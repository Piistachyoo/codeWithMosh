#include "Classes/AccountLocked.h"
#include "Classes/Rectangle.hpp"
#include <iostream>
using namespace std;

void login() { throw AccountLocked{}; }

int main() {
    try {
        login();

    } catch (const exception &exc) {
        cout << exc.what() << endl;
    }
    return 0;
}
