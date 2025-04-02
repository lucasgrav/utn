#include <iostream>
using namespace std;

/*
EJERCICIO:
Un comercio vende tres marcas de alfajores distintas A, B y C.
Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas
y luego se informe el porcentaje de ventas para cada una de ellas.
Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.
*/

int main()
{
    float a, b, c, total_solded;

    cout << "Enter the total number of alfajores A sold: " << endl;
    cin >> a;

    cout << "Enter the total number of alfajores B sold: " << endl;
    cin >> b;

    cout << "Enter the total number of alfajores C sold: " << endl;
    cin >> c;

    total_solded = a + b + c;

    a = (a / total_solded) * 100;
    b = (b / total_solded) * 100;
    c = (c / total_solded) * 100;

    cout << "The percentage of alfajores A solded is: " << a << "%" << endl;
    cout << "The percentage of alfajores B solded is: " << b << "%" << endl;
    cout << "The percentage of alfajores C solded is: " << c << "%" << endl;
    
    return 0;
}