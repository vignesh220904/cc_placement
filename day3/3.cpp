#include <iostream>
#include <cmath> 
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    friend void displayArea(Circle c);
};

void displayArea(Circle c) {
    double area = M_PI * c.radius * c.radius;
    cout << "Area of Circle: " << area << endl;
}

int main() {
    double radius = 7;

    Circle circle(radius);

    displayArea(circle);

    return 0;
}
