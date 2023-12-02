// Condiconales | Mayor de edad
#include <iostream>
using namespace std;

int main() {
    // Leer edad
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    // Validar
    if (edad >= 1 && edad <= 99)
    {
        if (edad >= 18)
        {
            cout << "Usted puede votar";
        } else 
        {
            cout << "Usted no puede votar";
        }
    }
    
    return 0;
}