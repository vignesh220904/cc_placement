#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string personName, int personAge) : name(personName), age(personAge) {}
};

class Student : public Person {
private:
    int rollNumber;

public:
    Student(string studentName, int studentAge, int studentRollNumber)
        : Person(studentName, studentAge), rollNumber(studentRollNumber) {}

 n
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    string name = "John";
    int age = 20;
    int rollNumber = 101;

    Student student(name, age, rollNumber);
    student.displayInfo();

    return 0;
}
