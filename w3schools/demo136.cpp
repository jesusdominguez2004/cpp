// W3Schools, C++ Arrays, Multidimensional Arrays
#include <iostream>
#include <string>
using namespace std;

int main() {
    // small game of Battleship...
    bool ships[4][4] = {
        { 0, 1, 1, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 1, 0 },
        { 0, 0, 1, 0 }
    };

    int hits = 0;
    int numbersOfTurns = 0;

    while (hits < 4) {
        int row, column;

        cout << "Selecting coordinates\n";
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        if (ships[row][column]) {
            ships[row][column] = 0;
            hits++;
            cout << "Hit! " << (4 - hits) << " left.\n\n";
        } else {
            cout << "Miss\n\n";
        }

        numbersOfTurns++;
    }

    cout << "Victory!\n";
    cout << "You won in " << numbersOfTurns << " turns";
    return 0;
}
