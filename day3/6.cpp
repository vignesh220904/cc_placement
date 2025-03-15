#include <iostream>
using namespace std;


class Box {
private:
    int length, breadth, height;

public:
 
    Box(int l, int b, int h) : length(l), breadth(b), height(h) {}

    friend void compareVolumes(const Box& box1, const Box& box2);
};


void compareVolumes(const Box& box1, const Box& box2) {
    int volume1 = box1.length * box1.breadth * box1.height;
    int volume2 = box2.length * box2.breadth * box2.height;

    cout << "Box 1 Volume: " << volume1 << endl;
    cout << "Box 2 Volume: " << volume2 << endl;

    if (volume1 > volume2) {
        cout << "Larger Box: Box 1" << endl;
    } else if (volume2 > volume1) {
        cout << "Larger Box: Box 2" << endl;
    } else {
        cout << "Both Boxes have equal volume" << endl;
    }
}

int main() {
    Box box1(2, 3, 4); 
    Box box2(3, 3, 3); 

    compareVolumes(box1, box2);

    return 0;
}
