#include <iostream>
using namespace std;

int main() {
    // Definir variables
    float nota1;
    float nota2;
    float nota3;
    float nota_final;

    // Leer notas
    cout << "Ingrese nota 1: ";
    cin >> nota1;

    cout << "Ingrese nota 2: ";
    cin >> nota2;

    cout << "Ingrese nota 3: ";
    cin >> nota3;

    // Calcular
    nota_final = (nota1 + nota2 + nota3) / 3;

    // Imprimir
    cout << "NOTA FINAL: " << nota_final << "\n";
    if (nota_final > 3) 
    {
        cout << "¡Aprobó!";
    } 
    else 
    {
        cout << "Desaprobó...";
    }


    return 0;
}