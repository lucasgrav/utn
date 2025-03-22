#include <iostream>
using namespace std;

/*
EJERCICIO:
Hacer un programa para ingresar por teclado la cantidad de horas
trabajadas por un operario y el valor que se le paga por hora trabajada
y listar por pantalla el sueldo que le corresponda.
*/

int main()
{
    int hours_worked, hourly_pay, salary;

    cout << "Enter the hours worked: " << endl;
    cin >> hours_worked;

    cout << "Enter the hourly pay: " << endl;
    cin >> hourly_pay;

    salary = hours_worked * hourly_pay;
    cout << "The salary is: " << salary << endl;
    
    return 0;
}