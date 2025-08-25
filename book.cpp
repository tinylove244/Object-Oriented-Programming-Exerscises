#include <bits/stdc++.h>
using namespace std;

// Create a Book class with title and author attributes
class book {
private: // encapsulation
    string title;
    string author;
public:
    // constructor with parameters
    book(string t, string a) {
        title = t;
        author = a;
    }
    // default constructor: avoid error if no input
    book() {
        title = "Unknown";
        author = "Unknown";
    }
    // method to display book information
    void displayinfo() {
        cout << "Title: " << title << " - Author: " << author << endl;
    }
};

int main() {
    // Create two Book objects with title and author attributes
    book book1("Object-Oriented Programming in C++", "Robert Lafore");
    book book2("How to Win Friends and Influence People", "Dale Carnegie"); 
    
    // Display book information
    book1.displayinfo();
    book2.displayinfo();
    //Expected output: Title: Object-Oriented Programming in C++ - Author: Robert Lafore
        //                 Title: How to Win Friends and Influence People - Author: Dale Carnegie
    return 0;
}
