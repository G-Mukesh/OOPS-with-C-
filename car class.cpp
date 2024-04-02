#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;

public:
    // Constructor
    Car(string make, string model, int year) {
        this->make = make;
        this->model = model;
        this->year = year;
        cout << "A new car object has been created." << endl;
    }

    // Destructor
    ~Car() {
        cout << "The car object has been destroyed." << endl;
    }

    // Function to display car details
    void display() {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    // Creating an instance of the Car class
    Car myCar("Toyota", "Camry", 2022);

    // Displaying car details
    myCar.display();

    return 0;
}

