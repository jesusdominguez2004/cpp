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
    int i;
    while (i < 12) {
        txt = txt + array[i];
        i++;
    }

    cout << txt;
    return 0;
}
