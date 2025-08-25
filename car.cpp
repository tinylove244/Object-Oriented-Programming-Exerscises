#include <bits/stdc++.h>
using namespace std;

// Create a Car class with brand and year attributes
class Car {
private: //encapsulation
    string brand;
    int year;
public:
    // constructor
    Car(string b, int y) {
        brand = b;
        year = y;
    }
    // default constructor: avoid error if no input
    Car() {
        brand = "Unknown";
        year = 0;
    }
    // method to display car information
    void displayinfo() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl << endl;
    }
};

int main() {
    // Create two car objects with brand and year attributes
    Car car1("Toyota", 2020);
    Car car2("Honda", 2018);
    // Display car information
    car1.displayinfo();
    car2.displayinfo();
    return 0;
}