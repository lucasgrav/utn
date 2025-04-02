#include <iostream>
using namespace std;

/*
EJERCICIO:
Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada a la misma
y luego informar por pantalla el importe a pagar.
Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces el total a pagar será de $1020.
Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el total a pagar será de $800.
*/

int main()
{
    float amount_to_pay, discount_percentage, discount;

    cout << "Enter the amount to pay: " << endl;
    cin >> amount_to_pay;

    cout << "Enter the discount percentage: " << endl;
    cin >> discount_percentage;

    discount = (amount_to_pay * discount_percentage) / 100;
    amount_to_pay = amount_to_pay - discount;

    cout << "The total amount to pay is: " << amount_to_pay << endl;
    return 0;
}