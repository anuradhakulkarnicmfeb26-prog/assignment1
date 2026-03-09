#include <iostream>

using namespace std;

// 1. Swap by Value (Creates copies, original variables won't change)
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// 2. Swap by Address (Uses pointers to change original values)
void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 3. Swap by Reference (Uses aliases to change original values)
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Initial: x = " << x << ", y = " << y << endl;

    // Call 1: Swap by Value
    swapByValue(x, y);
    cout << "After swapByValue: x = " << x << ", y = " << y << " (No change)" << endl;

    // Call 2: Swap by Address
    swapByAddress(&x, &y);
    cout << "After swapByAddress: x = " << x << ", y = " << y << " (Swapped!)" << endl;

    // Resetting for next test
    x = 10; y = 20;

    // Call 3: Swap by Reference
    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y << " (Swapped!)" << endl;

    return 0;
}