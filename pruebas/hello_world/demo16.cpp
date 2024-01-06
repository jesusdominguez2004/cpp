// hello world...
#include <iostream>
#include <string>

int main() {
    char array[12] = {
        'H', 'e', 'l', 'l', 'o',
        ' ', 'W', 'o', 'r', 'l', 'd', '!'
    };

    std::string txt;
    int i;
    while (i < 12) {
        txt = txt + array[i];
        i++;
    }

    std::cout << txt;
    return 0;
}
