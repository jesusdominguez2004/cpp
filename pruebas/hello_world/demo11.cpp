// hello world...
#include <iostream>
#include <string>
using namespace std;

int main() {
    char array[12] = {
        'H', 'e', 'l', 'l', 'o',
        ' ', 'W', 'o', 'r', 'l', 'd', '!'
    };

    string txt;
    for (char i : array) {
        txt = txt + i;
    }

    cout << txt;
    return 0;
}
