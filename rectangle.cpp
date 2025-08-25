#include <bits/stdc++.h>
using namespace std;

// Create a Rectangle class with height and width attributes
class rectangle {
private: // encapsulation
    double height;
    double width;
public:
    // constructor with parameters
    rectangle(double h, double w) {
        height = h;
        width = w;
    }
    // default constructor: avoid error if no input
    rectangle() {
        height = 0.0;
        width = 0.0;
    }
    // method to display rectangle dimensions
    void display() {
        cout << "Height: " << height << ", Width: " << width << endl;
    }
    // method to calculate area of rectangle
    double calculate_area() {
        return height * width;
    }
};

int main() {
    // Create a Rectangle object with height 5.0 and width 3.0
    rectangle r1(5.0, 3.0);

    // Display rectangle dimensions
    r1.display();

    // Display area of rectangle
    cout << "Area of rectangle: " << r1.calculate_area() << endl;

    // Expected output:
    // Height: 5, Width: 3
    // Area of rectangle: 15

    return 0;
}
