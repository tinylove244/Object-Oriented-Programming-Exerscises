#include <bits/stdc++.h>
using namespace std;

// Create an Employee class with name and salary attributes
class employee {
private: // encapsulation
    string name;
    double salary;
public:
    // constructor with parameters
    employee(string n, double s) {
        name = n;
        salary = s;
    }
    // default constructor: avoid error if no input
    employee() {
        name = "Unknown";
        salary = 0.0;
    }
    // method to display employee information
    void displayinfo() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl << endl;
    }
};

int main() {
    // Create three Employee objects with name and salary attributes
    employee emp1("Nhat Khue", 50000); //employee 1 has name "Nhat Khue" and salary 50000
    employee emp2("Minh Hien", 60000); //employee 2 has name "Minh Hien" and salary 60000
    employee emp3("Quang Truong", 70000); //employee 3 has name "Quang Truong" and salary 70000
    
    // Display employee information
    emp1.displayinfo();
    emp2.displayinfo();
    emp3.displayinfo();
    //Expected output: Name: Nhat Khue
    //                 Salary: 50000

    return 0;
}
