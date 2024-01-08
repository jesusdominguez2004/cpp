// W3Schools, C++ Conditions, Short hand if...else
#include <iostream>
#include <string>
using namespace std;

int main() {
    int time = 20;
    // variable = (condition) ? expressionTrue ? expressionFalse;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;
    return 0;
}
