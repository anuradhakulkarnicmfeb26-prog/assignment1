#include <iostream>

using namespace std;

class Box {
private:
    int length, width, height;

public:
    // Parameterized Constructor
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    // Setter using this-> to distinguish between member variables and parameters
    void setDimensions(int length, int width, int height) {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    // Function to compute volume
    int volume() {
        return length * width * height;
    }
};

int main() {
    // 1. Initialization using constructor
    Box myBox(10, 5, 2);
    cout << "Initial Volume (Constructor): " << myBox.volume() << endl;

    // 2. Assignment using setDimensions()
    myBox.setDimensions(20, 10, 5);
    cout << "Updated Volume (setDimensions): " << myBox.volume() << endl;

    return 0;
}