#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

// Create a Circle class with radius and color attributes
class Circle {
private: // encapsulation
    double radius;
    string color; //extension request: color attribute
public:
    // default constructor
    Circle() {}

    // method to input radius from user
    void getRadius() {
        cout << "Enter radius of the circle: ";
        cin >> radius;
    }

    //extension request: method to validate radius (must be positive)
    void checkRadius() {
        while (radius <= 0) {
            cout << "Radius must be positive. Please enter again: ";
            cin >> radius;
        }
    }

    // method to input color from user
    void getColor() {
        cout << "Enter color of the circle: ";
        cin >> color;
    }

    // method to display radius and color
    void displayInfo() {
        cout << endl << "Radius: " << radius << ", Color: " << color << endl;
    }

    // method to calculate circumference of the circle
    double circumference() {
        return 2 * M_PI * radius;
    }

    // method to calculate area of the circle
    double area() {
        return M_PI * radius * radius;
    }
};

int main() {
    // Create a Circle object
    Circle Circle1;

    // Input radius
    Circle1.getRadius();

    // Validate radius
    Circle1.checkRadius();  

    // Input color
    Circle1.getColor();

    // Display circle info
    Circle1.displayInfo();

    // Display circumference with 2 decimal places
    cout << "Circumference of a circle is: " 
         << fixed << setprecision(2) << Circle1.circumference() << endl;

    // Display area with 2 decimal places
    cout << "Area of a circle is: " 
         << fixed << setprecision(2) << Circle1.area() << endl;

    // Expected output example:
    // Enter radius of the circle: 3
    // Enter color of the circle: Red
    // Radius: 3, Color: Red
    // Circumference of a circle is: 18.85
    // Area of a circle is: 28.27

    return 0;
}
