// Lección User input
#include <iostream>
using namespace std;

int main() {
    int x, y, sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum  = x + y;
    cout << "Sum is: " << sum;
    return 0;
}