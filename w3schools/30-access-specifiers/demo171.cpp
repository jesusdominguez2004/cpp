// W3Schools, C++ Access Specifiers
#include <iostream>
using namespace std;

class MyClass {
    public:     // Public access specifier
        int x;  // Public attribute
    private:    // Private access specifier
        int y;  // Private attribute
};

int main() {
    MyClass myObj;
    myObj.x = 25;
    // myObj.y = 50;    error: 'int MyClass::y' is private
    return 0;
}
