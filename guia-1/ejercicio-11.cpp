#include <iostream>
using namespace std;

/*
EJERCICIO:
Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuántos días, horas y minutos equivalen.
Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1 día, 1 hora y 20 minutos.
Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0 día, 8 horas y 0 minutos.
*/

int main()
{
    int hours, days, extra_hours;

    cout << "Enter the hours: " << endl;
    cin >> hours;

    days = hours / 24;
    extra_hours = hours % 24;
 
    cout << days << " days and " << extra_hours << " hours" << endl;
    
    return 0;
}