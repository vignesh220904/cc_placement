#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    string type;

public:
    Employee(string empName) : name(empName), type("Full-Time") {}

    Employee(string empName, string empType) : name(empName), type(empType) {}

    void displayInfo() {
        cout << "Employee Name: " << name << ", Type: " << type << endl;
    }
};

class Manager : public Employee {
private:
    string responsibility;

public:
    Manager(string mgrName, string resp)
        : Employee(mgrName), responsibility(resp) {}

    Manager(string mgrName, string empType, string resp)
        : Employee(mgrName, empType), responsibility(resp) {}
        
    void displayInfo() {
        Employee::displayInfo(); 
        cout << "Responsibility: " << responsibility << endl;
    }
};

int main() {
 
    Employee emp1("Alice");

    Employee emp2("Bob", "Part-Time");

    Manager mgr1("Charlie", "Project Management");

    Manager mgr2("Diana", "Part-Time", "Team Coordination");
    
    emp1.displayInfo();
    emp2.displayInfo();
    mgr1.displayInfo();
    mgr2.displayInfo();

    return 0;
}
