#include <iostream>
using namespace std;


class Shape {
protected:
    int length;
    int breadth;

public:
    Shape(int l, int b) : length(l), breadth(b) {}
};


class Rectangle : public Shape {
public:
    Rectangle(int l, int b) : Shape(l, b) {}

    void displayArea() {
        int area = length * breadth; 
        cout << "Area of Rectangle: " << area << endl;
    }
};

int main() {
    int length = 5;
    int breadth = 8;

    Rectangle rect(length, breadth);

   
    rect.displayArea();

    return 0;
}
