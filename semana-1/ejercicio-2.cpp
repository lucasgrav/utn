#include <iostream>
using namespace std;

/*
EJERCICIO:
Hacer un programa que solicite por teclado que se ingresen dos números y luego guardarlos en dos variables distintas.
A continuación se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.
Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
*/

int main() {
    int a, b, temp;

    cout << "Enter a number: ";
    cin >> a;

    cout << "Enter another number: ";
    cin >> b;

    cout << "The first number is: " << a << endl;
    cout << "The second number is: " << b << endl;

    
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping, first number is: " << a << endl;
    cout << "After swapping, second number is: " << b << endl;

    return 0;
}
