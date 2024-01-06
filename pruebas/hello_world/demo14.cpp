// hello world...
#include <iostream>
#include <string>

int main() {
    std::string array[2] = {"Hello", " World!"};

    std::string txt;
    int i = 0;
    while (i < 2) {
        txt = txt + array[i];
        i++;
    }
    
    std::cout << txt;
    return 0;
}
