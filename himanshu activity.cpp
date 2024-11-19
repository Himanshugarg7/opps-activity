#include <iostream>
#include <string>
using namespace std;

class Passenger {
private:
    string name;
    int age;
    string ticketNumber;
public:
 Passenger(string n, int a, string t) : name(n), age(a), ticketNumber(t) {}
    
    void displayDetails() {
        cout << "Passenger Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Ticket Number: " << ticketNumber << endl;
    }
};

int main() {

    Passenger passenger1("himanshu", 19, "1320");

    passenger1.displayDetails();

    return 0;
}
