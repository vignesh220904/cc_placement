#include <iostream>
using namespace std;


class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b) : length(l), breadth(b) {}
    
    friend class AreaCalculator;
};

class AreaCalculator {
public:
    int calculateArea(Rectangle rect) {
        return rect.length * rect.breadth;
    }
};

int main() {
    int length = 5;
    int breadth = 10;

    Rectangle rect(length, breadth);

    AreaCalculator calculator;
    int area = calculator.calculateArea(rect);

    cout << "Area of Rectangle: " << area << endl;

    return 0;
}
