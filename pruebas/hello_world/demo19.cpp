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
    int i = 0;
    while (i < 2) {
        int j = 0;
        while (j < 12) {
            txt = txt + array[i][j];
            j++;
        }
        i++;
    }

    cout << txt;
    return 0;
}
