// W3Schools, C++ For Loop
#include <iostream>
using namespace std;

int main() {
    // Outputs all elements in an array, using a "for-each loop":
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i: myNumbers) {
        cout << i << "\n";
    }
    return 0;
}
