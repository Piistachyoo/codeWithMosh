#include "Classes/Array.h"
#include "Classes/Pair.h"
#include <iostream>
using namespace std;

template <typename T> T larger(T first, T second) {
    return (first > second) ? first : second;
}

template <typename K, typename V> void display(K key, V value) {
    cout << key << "=" << value << endl;
}

int main() {
    Array<Pair<string, int>> arr{10};
    arr[0] = {"Omar", 97};
    arr[1] = {"Ali", 15};
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    return 0;
}
