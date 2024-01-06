// hello world...
#include <iostream>
#include <string>

int main() {
    std::string array[2] = {"Hello", " World!"};
    
    std::string txt;
    for (std::string i : array) {
        txt = txt + i;
    }
    
    std::cout << txt;
    return 0;
}
