#include <iostream>
#include <string>
using namespace std;

// Create a Course class with courseName, courseCode, credits, and instructorName attributes
class course {
private: // encapsulation
    string courseName;      
    string courseCode;       
    int credits;             
    string instructorname;  // extension request: instructorName attribute
public:
    // default constructor
    course() {}

    // setter for course name
    void setCourseName(string name) {
        courseName = name;
    }

    // setter for course code
    void setCourseCode(string code) {
        courseCode = code;
    }

    // setter for credits
    void setCredits(int cred) {
        credits = cred;
    }

    // method to display course information
    void displayInfo() {
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Credits: " << credits << endl;
        cout << "Instructor Name: " << instructorname << endl << endl;
    }

    // method to check if the course is high credit (>3 credits)
    bool isHighCredit() {
        return credits > 3;
    }

    // extension request: method to check if the course requires a lab (>4 credits)
    bool isLabRequired() {
        return credits > 4;
    }
};

int main() {
    // Create a Course object
    course myCourse;

    // Set course details
    myCourse.setCourseName("Data Structures and Algorithms");
    myCourse.setCourseCode("DASA230179E");
    myCourse.setCredits(4);

    // Display course information
    myCourse.displayInfo();

    // Check if the course is high credit (>3)
    if (myCourse.isHighCredit()) {
        cout << "This is a high credit course." << endl;
    } else {
        cout << "This is not a high credit course." << endl;
    }

    // Check if the course requires a lab (>4)
    if (myCourse.isLabRequired()) {
        cout << "This course requires a lab." << endl;
    } else {
        cout << "This course does not require a lab." << endl;
    }

    // Expected output example:
    // Course Name: Data Structures and Algorithms
    // Course Code: DASA230179E
    // Credits: 4
    // Instructor Name:
    // This is a high credit course.
    // This course does not require a lab.

    return 0;
}
