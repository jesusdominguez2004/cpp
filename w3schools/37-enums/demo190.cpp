// W3Schools, C++ Enumeration (Enum)
#include <iostream>
using namespace std;

enum Level {
    LOW = 1,
    MEDIUM, // Now 2
    HIGH    // Now 3
};

int main() {
    enum Level myVar = MEDIUM;
    
    switch (myVar) {
        case 1:
            printf("Low Level");
            break;
        case 2:
            printf("Medium Level");
            break;
        case 3:
            printf("High Level");
            break;
    }

    return 0;
}
