#include <iostream>
using namespace std;

/*
EJERCICIO:
Hacer un programa para ingresar cinco números y listar el máximo y el mínimo de ellos.
*/

int main()
{
    int n, max, min;

    cout << "Program to see the minimum and maximum number entered." << endl;

    // Al ingresar el primer numero, este seria nuestro maximo actual.
    cout << "Enter a number: " << endl;
    cin >> max;

    cout << "Enter another number: " << endl;
    cin >> n;

    if (n > max)
    {
        min = max;
        max = n;
    }

    cout << "Enter another number: " << endl;
    cin >> n;

    if (n > max) max = n;
    if (n < min) min = n;

    cout << "Enter another number: " << endl;
    cin >> n;

    if (n > max) max = n;
    if (n < min) min= n;

    cout << "Enter another number: " << endl;
    cin >> n;

    if (n > max) max = n;
    if (n < min) min = n;

    cout << "The minimum number entered is: " << min << endl;
    cout << "The maximum number entered is: " << max << endl;

    return 0;
}