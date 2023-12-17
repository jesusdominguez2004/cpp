// W3Schools, C++ Arrays, Arrays and Loops
#include <iostream>
using namespace std;

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    // for-each loop (C++ version 11, 2011)...
    for (int i : myNumbers) {
        cout << i << "\n";
    }
    return 0;
}
