// hello world...
#include <iostream>
#include <string>
using namespace std;

int main() {
    string array[2] = {"Hello", " World!"};
    
    string txt;
    for (string i: array) {
        txt = txt + i;
    }

    cout << txt;
    return 0;
}
