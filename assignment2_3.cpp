#include <iostream>

using namespace std;

int main() {
    // Store an integer value in a variable
    int num = 10;
    cout << "Initial value: " << num << endl;

    // Create a pointer pointing to the variable
    int *ptr = &num;

    // Create a reference to the same variable
    int &ref = num;

    // Modify the value using the pointer
    *ptr = 20; 
    cout << "After pointer modification (*ptr = 20): " << num << endl;

    // Modify the value using the reference
    ref = 30;
    cout << "After reference modification (ref = 30): " << num << endl;

    return 0;
}
