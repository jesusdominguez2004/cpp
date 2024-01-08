// W3Schools, C++ Arrays, Get Array Size
#include <iostream>
using namespace std;

int main() {
    /*
         the sizeof() operator returns the size of a type in bytes,
         an int type is usually 4 bytes,
         4 x 5 (4 bytes x 5 elements) = 20 bytes.
    */
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << getArrayLength;
    return 0;
}
