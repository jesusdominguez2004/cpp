// W3Schools, C++ Functions Parameters, Default Parameter
#include <iostream>
#include <string>
using namespace std;

void myFunction(string country = "Norway") {
    cout << country << "\n";
}

int main() {
    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("USA");
    return 0;
}
