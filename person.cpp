#include <iostream>
#include <string>
using namespace std;

// Create a Person class with name, age, address, and phone number attributes
class person {
private: // encapsulation
    string name;
    int age;
    string address;
    string phoneNumber; //extension request: phone number attribute
public:
    // default constructor
    person() {}

    // setter for name
    void setName(string n) {
        name = n;
    }

    // setter for age
    void setAge(int a) {
        age = a;
    }

    // setter for address
    void setAddress(string addr) {
        address = addr;
    }

    // setter for phone number
    void setPhoneNumber(string phone) {
        phoneNumber = phone;
    }

    // method to display person's information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNumber << endl << endl;
    }

    // method to check if the person is an adult (age >= 18)
    bool isAdult() {
        return age >= 18;
    }

    // extension request: method to change address
    void move(string newAddress) {
        address = newAddress;
        cout << name << " has moved to: " << newAddress << endl;
    }

    // extension request: method to greet
    void greet() {
        cout << "Hello, my name is " << name << "!" << endl;
    }
};

int main() {
    // Create a Person object
    person Person1;

    // Set person's details
    Person1.setName("Ngo Quang Truong");
    Person1.setAge(19);
    Person1.setAddress("Ho Chi Minh City university of Technology and Education, 1 Vo Van Ngan, Linh Chieu, Thu Duc, HCM");
    Person1.setPhoneNumber("0838282133");

    // Display initial information
    Person1.displayInfo();

    // Check if the person is an adult
    if (Person1.isAdult()) {
        cout << "The person is an adult." << endl;
    } else {
        cout << "The person is not an adult." << endl;
    }

    cout << endl;

    // Change address and display updated information
    Person1.move("484 Le Van Viet, Thu Duc, HCM");
    Person1.displayInfo();
    // Greet
    Person1.greet();

    // Expected output example:
    // Name: Ngo Quang Truong
    // Age: 19
    // Address: Ho Chi Minh City university of Technology and Education, 1 Vo Van Ngan, Linh Chieu, Thu Duc, HCM
    // Phone Number: 0838282133
    // The person is an adult.
    // Ngo Quang Truong has moved to: 484 Le Van Viet, Thu Duc, HCM
    // Name: Ngo Quang Truong
    // Age: 19
    // Address: 484 Le Van Viet, Thu Duc, HCM
    // Phone Number: 0838282133
    // Hello, my name is Ngo Quang Truong!

    return 0;
}
