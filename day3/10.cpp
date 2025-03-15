#include <iostream>
#include <string>
using namespace std;


class Device {
protected:
    string brand;
    double price;

public:
 
    Device(string dBrand, double dPrice) : brand(dBrand), price(dPrice) {}

    void displayDetails() {
        cout << "Device: " << brand << ", Price: $" << price << endl;
    }
};


class Laptop : public Device {
private:
    string feature;

public:
    Laptop(string lBrand, double lPrice, string lFeature)
        : Device(lBrand, lPrice), feature(lFeature) {}

   
    void displayDetails() {
        Device::displayDetails(); 
        cout << "Feature: " << feature << endl;
    }
};


class Smartphone : public Device {
private:
    string feature;

public:
    Smartphone(string sBrand, double sPrice, string sFeature)
        : Device(sBrand, sPrice), feature(sFeature) {}

    void displayDetails() {
        Device::displayDetails();
        cout << "Feature: " << feature << endl;
    }
};

int main() {
    Laptop laptop("Dell", 1000, "16GB RAM, 512GB SSD");
    Smartphone smartphone("Samsung", 800, "AMOLED Display, 5G");

 
    laptop.displayDetails();
    smartphone.displayDetails();

    return 0;
}
