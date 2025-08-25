#include <iostream>
#include <string>
using namespace std;

// Create a Laptop class with brand, model, ram, storage, and gpu attributes
class laptop {
private: // encapsulation
    string brand;    // brand of the laptop (e.g., Dell, Lenovo)
    string model;    // model name or number
    int ram;         // RAM size in GB
    int storage;     // storage capacity in GB
    string gpu;      // extension request: GPU model
public:
    // default constructor
    laptop() {}

    // setter for brand
    void setBrand(string b) {
        brand = b;
    }

    // setter for model
    void setModel(string m) {
        model = m;
    }

    // setter for RAM
    void setRam(int r) {
        ram = r;
    }

    // setter for storage
    void setStorage(int s) {
        storage = s;
    }

    // setter for GPU
    void setGpu(string g) {
        gpu = g;
    }

    // method to display full laptop information
    void displayInfo() {
        cout << "Laptop Brand: " << brand << endl;
        cout << "Laptop Model: " << model << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "GPU: " << gpu << endl << endl;
    }

    // method to check if the laptop has enough RAM for a required amount
    void checkRam(int requiredRam) {
        if (ram >= requiredRam) {
            cout << "The laptop has enough RAM to run the software requiring " 
                 << requiredRam << " GB" << endl;
        } else { 
            cout << "The laptop does not have enough RAM to run the software requiring " 
                 << requiredRam << " GB" << endl;
        }
    }

    // extension request: method to upgrade RAM
    void uppgradeRam(int additionalRam) {
        ram += additionalRam;
        cout << "RAM upgraded by " << additionalRam 
             << " GB. New RAM: " << ram << " GB" << endl;
    }

    // extension request: method to check if the laptop has a specific GPU
    void checkGPU(string requiredGPU) {
        if (gpu == requiredGPU) {
            cout << "The laptop has the required GPU: " << requiredGPU << endl;
        } else {
            cout << "The laptop does not have the required GPU: " << requiredGPU << endl;
        }
    }
};

int main() {
    // Create a Laptop object
    laptop myLaptop;

    // Set laptop details
    myLaptop.setBrand("Lenovo Legion");
    myLaptop.setModel("5 Pro");
    myLaptop.setRam(16);
    myLaptop.setStorage(512);
    myLaptop.setGpu("NVIDIA GeForce RTX 3060");

    // Display laptop info
    myLaptop.displayInfo();

    // Check if the laptop has enough RAM for 8GB and 32GB requirements
    myLaptop.checkRam(8);  
    myLaptop.checkRam(32); 

    // Check if the laptop has the required GPU
    myLaptop.checkGPU("NVIDIA GeForce RTX 3060");

    // Expected output example:
    // Laptop Brand: Lenovo Legion
    // Laptop Model: 5 Pro
    // RAM: 16 GB
    // Storage: 512 GB
    // GPU: NVIDIA GeForce RTX 3060
    // The laptop has enough RAM to run the software requiring 8 GB
    // The laptop does not have enough RAM to run the software requiring 32 GB
    // The laptop has the required GPU: NVIDIA GeForce RTX 3060

    return 0;
}
