#include <iostream>
using namespace std;

/*
EJERCICIO:
Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más $700 de premio por cada auto vendido.
Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $7800.
*/

int main()
{
    int salary = 5000, bonus_per_car = 700, cars_solded, salary_with_bonus;

    cout << "Enter the number of cars sold: " << endl;
    cin >> cars_solded;

    salary_with_bonus = salary + cars_solded * bonus_per_car;

    cout << "The total salary to be paid would be: " << salary_with_bonus;

    return 0;
}