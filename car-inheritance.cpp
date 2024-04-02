#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;

public:
    Vehicle(string make, string model, int year) {
    	make=make;
    	model=model;
    	year=year;
	}
    string get_make() const { return make; }
    void set_make(string make) { this->make = make; }

    string get_model() const { return model; }
    void set_model(string model) { this->model = model; }

    int get_year() const { return year; }
    void set_year(int year) { this->year = year; }
};

class Car : public Vehicle {
private:
    int seating_capacity;
    string fuel_type;

public:
    Car(string make, string model, int year, int seating_capacity, string fuel_type)
        : Vehicle(make, model, year), seating_capacity(seating_capacity), fuel_type(fuel_type) {}

    int get_seating_capacity() const { return seating_capacity; }
    void set_seating_capacity(int seating_capacity) { this->seating_capacity = seating_capacity; }

    string get_fuel_type() const { return fuel_type; }
    void set_fuel_type(string fuel_type) { this->fuel_type = fuel_type; }
};

class Truck : public Vehicle {
private:
    int payload_capacity;
    int towing_capacity;

public:
    Truck(string make, string model, int year, int payload_capacity, int towing_capacity)
        : Vehicle(make, model, year), payload_capacity(payload_capacity), towing_capacity(towing_capacity) {}

    int get_payload_capacity() const { return payload_capacity; }
    void set_payload_capacity(int payload_capacity) { this->payload_capacity = payload_capacity; }

    int get_towing_capacity() const { return towing_capacity; }
    void set_towing_capacity(int towing_capacity) { this->towing_capacity = towing_capacity; }
};

int main() {
    Car car("Toyota", "Camry", 2023, 5, "Gasoline");
    cout << "Make: " << car.get_make() << endl;
    cout << "Model: " << car.get_model() << endl;
    cout << "Year: " << car.get_year() << endl;
    cout << "Seating Capacity: " << car.get_seating_capacity() << endl;
    cout << "Fuel Type: " << car.get_fuel_type() << endl;

    Truck truck("Ford", "F-150", 2022, 2000, 10000);
    cout << "Make: " << truck.get_make() << endl;
    cout << "Model: " << truck.get_model() << endl;
    cout << "Year: " << truck.get_year() << endl;
    cout << "Payload Capacity: " << truck.get_payload_capacity() << endl;
    cout << "Towing Capacity: " << truck.get_towing_capacity() << endl;

    return 0;
}

