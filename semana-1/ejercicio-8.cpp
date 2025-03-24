#include <iostream>
using namespace std;

/*
EJERCICIO:
Hacer un programa para ingresar por teclado el importe de una venta sin el descuento y el importe de esa misma venta con el descuento aplicado y luego informar por pantalla el porcentaje de descuento aplicada a la misma.
Ejemplo A. Si el importe de la venta sin descuento es $1500 y el importe de la venta con descuento es $1200 entonces el porcentaje de descuento aplicado fue el 20%.
Importante: Le sugerimos que haga una prueba con este ejemplo, ya que muchos lo resuelven y concluyen que el descuento es el 80%. Eso NO es el descuento. Si el descuento fuera de 80% entonces una venta de $1500 se cobraría tan solo $300.
Ejemplo B. Si el importe de la venta sin descuento es $500 y el importe de la venta con descuento es $500 entonces el porcentaje de descuento aplicado fue el 0%.
*/

int main()
{
    float amount_without_discount, amount_with_discount, discount_percentage;

    cout << "Enter the amount without discount: " << endl;
    cin >> amount_without_discount;

    cout << "Enter the amount with discount: " << endl;
    cin >> amount_with_discount;

    discount_percentage = 100 - (amount_with_discount / amount_without_discount) * 100;

    cout << "The discount percentage is: " << discount_percentage << "%" << endl;
    return 0;
}