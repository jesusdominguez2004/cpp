// hello world...
#include <iostream>
#include <string>
using namespace std;

int main() {
    string array[2] = {"Hello", " World!"};

    string txt;
    int i = 0;
    while (i < 2) {
        txt = txt + array[i];
        i++;
    }
    
    cout << txt;
    return 0;
}
