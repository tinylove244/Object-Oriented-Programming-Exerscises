#include <bits/stdc++.h>
using namespace std;

// Create a Student class with name and grade attributes
class Student {
private: // encapsulation
    string name;
    double grade;
public: 
    // constructor with parameters
    Student(string n, double g) {
        name = n;
        grade = g;
    }
    // default constructor: avoid error if no input
    Student() {
        name = "Unknown";
        grade = 0.0;
    }
    // method to display student information
    void displayInfo() {
        cout << "Name: " << name << ", Grade: " << grade << endl;
    }  
};

int main() {
    // Create two Student objects with name and grade attributes
    Student student1("Quang Truong", 8.5);
    Student student2("Tony", 7.2);
    // Display student information
    student1.displayInfo();
    student2.displayInfo();
    return 0;
}
