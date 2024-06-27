// W3Schools, C++ Enumeration (Enum)
#include <iostream>
using namespace std;

enum Level {
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
};

int main() {
    enum Level myVar = MEDIUM;
    cout << myVar;
    return 0;
}
