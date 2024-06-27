// W3Schools, C++ Enumeration (Enum)
#include <iostream>
using namespace std;

enum Level {
    LOW = 5,
    MEDIUM, // Now 6
    HIGH    // Now 7
};

int main() {
    enum Level myVar = MEDIUM;
    cout << myVar;
    return 0;
}
