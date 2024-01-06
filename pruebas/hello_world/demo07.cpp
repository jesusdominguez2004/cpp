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
    for (int i = 0; i < 12; i++) {
        txt = txt + array[i];
    }

    cout << txt;
    return 0;
}
