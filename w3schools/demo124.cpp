// W3Schools, C++ Arrays, Omit Array Size
#include <iostream>
#include <string>
using namespace std;

int main() {
    string cars[] = {"Volvo", "BMW", "Ford"};
    for (int i = 0; i < 3; i++) {
        cout << cars[i] << "\n";
    }
    return 0;
}
