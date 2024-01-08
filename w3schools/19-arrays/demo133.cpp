// W3Schools, C++ Arrays, Multidimensional Arrays
#include <iostream>
#include <string>
using namespace std;

int main() {
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };
    letters[0][0] = "Z";
    cout << letters[0][0];
    return 0;
}
