// W3Schools, C++ Enumeration (Enum)
#include <iostream>
using namespace std;

enum Level {
    LOW,
    MEDIUM,
    HIGH
};

int main() {
    enum Level myVar = MEDIUM;
    cout << myVar;
    return 0;
}
