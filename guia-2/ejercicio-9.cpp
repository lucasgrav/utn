#include <iostream>
using namespace std;

/*
EJERCICIO:
Hacer un programa para ingresar tres números y listar el máximo de ellos.
*/

int main()
{
    int n, max;

    // Al ingresar el primer numero, este seria nuestro maximo actual.
    cout << "Ingresa un numero: " << endl;
    cin >> max;

    cout << "Ingresa otro numero: " << endl;
    cin >> n;

    if (n > max) max = n;
    
    cout << "Ingresa otro numero: " << endl;
    cin >> n;

    if (n > max) max = n;
 
    cout << "El numero maximo ingresado es: " << max << endl;

    return 0;
}