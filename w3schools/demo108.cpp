// W3Schools, C++ While Loop, Do/While Loop
#include <iostream>
using namespace std;

int main() {
    /*
        The loop will always be executed at least once,
        even if the condition is false,
        because the code block is executed before the condition is tested:
    */
    int i = 0;
    do {
        cout << i << "\n";
        i++;
    }
    while (i < 5);
    return 0;
}
