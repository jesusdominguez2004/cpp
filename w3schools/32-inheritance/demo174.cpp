// W3Schools, C++ Inheritance, Inheritance
#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicule {
    public:
        string brand = "Ford";
        void honk() {
            cout << "Tuut, tuut! \n";
        }
};

// Derived class
class Car: public Vehicule {
    public:
        string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;
    return 0;
}
