// hello world...
#include <iostream>
#include <string>
using namespace std;

int main() {
    char array[2][12] = {
        {'H', 'e', 'l', 'l', 'o'},
        {' ', 'W', 'o', 'r', 'l', 'd', '!'}
    };

    string txt;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            txt = txt + array[i][j];
        }
    }

    cout << txt;
    return 0;
}
