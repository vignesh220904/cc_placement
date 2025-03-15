#include <iostream>
#include <string>
using namespace std;


class Vehicle {
protected:
    string vehicleName;

public:
  
    Vehicle(string vName) : vehicleName(vName) {}
};


class Car : virtual public Vehicle {
protected:
    string carModel;

public:
  
    Car(string vName, string cModel) : Vehicle(vName), carModel(cModel) {}
};

class Bike : virtual public Vehicle {
protected:
    string bikeModel;

public:
    Bike(string vName, string bModel) : Vehicle(vName), bikeModel(bModel) {}
};


class Garage : public Car, public Bike {
public:
    Garage(string vName, string cModel, string bModel)
        : Vehicle(vName), Car(vName, cModel), Bike(vName, bModel) {}

    void display() {
        cout << "Vehicle: " << vehicleName << endl;
        cout << "Car: " << carModel << endl;
        cout << "Bike: " << bikeModel << endl;
    }
};

int main() {
    string vehicle = "Tesla";
    string car = "Model S";
    string bike = "Kawasaki Ninja";

    Garage garage(vehicle, car, bike);

    garage.display();

    return 0;
}
