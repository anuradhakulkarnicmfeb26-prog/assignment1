#include <iostream>

using namespace std;

int main() {
    // 1. Use 'new' to allocate an array of 5 integers dynamically
    int* arr = new int[5];

    // 2. Take user input
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // 3. Print the values
    cout << "\nThe values in the array are:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 4. Deallocate memory using delete[]
    delete[] arr;
    
    // Setting pointer to nullptr is a good practice after deletion
    arr = nullptr;

    cout << "\nMemory deallocated successfully." << endl;

    return 0;
}
