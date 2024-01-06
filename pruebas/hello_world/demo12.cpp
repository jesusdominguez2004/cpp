// hello world...
#include <iostream>
#include <string>

int main() {
    char array[12] = {
        'H', 'e', 'l', 'l', 'o',
        ' ', 'W', 'o', 'r', 'l', 'd', '!'
    };

    std::string txt;
    for (char i : array) {
        txt = txt + i;
    }

    std::cout << txt;
    return 0;
}
