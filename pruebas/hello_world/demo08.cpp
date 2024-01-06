// hello world...
#include <iostream>
#include <string>

int main() {
    char array[12] = {
        'H', 'e', 'l', 'l', 'o',
        ' ', 'W', 'o', 'r', 'l', 'd', '!'
    };

    std::string txt;
    for (int i = 0; i < 12; i++) {
        txt = txt + array[i];
    }
    
    std::cout << txt;
    return 0;
}
