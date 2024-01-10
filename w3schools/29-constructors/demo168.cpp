// W3Schools, C++ Constructors
#include <iostream>
using namespace std;

class MyClass {             // The class
    public:                 // Access specifier
        MyClass() {         // Constructor
            cout << "Hello World!";
        }
};

int main() {
    MyClass myObj;
    return 0;
}
