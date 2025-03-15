#include <iostream>
using namespace std;


class Animal {
public:
    virtual void sound() {
        cout << "Animal Sound: Generic Animal Sound" << endl;
    }

    virtual ~Animal() {} 
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog Sound: Woof Woof" << endl;
    }
};

class Puppy : public Dog {
public:
    void sound() override {
        cout << "Puppy Sound: Yip Yip" << endl;
    }

    void play()
