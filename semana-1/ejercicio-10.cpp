#include <iostream>
using namespace std;

/*
EJERCICIO:
Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla a cuantos días y horas equivalen.
Ejemplo A: si se ingresan 26 horas el programa mostrará por pantalla que equivalen a 1 día y 2 horas.
Ejemplo B: si se ingresan 72 horas el programa mostrará por pantalla que equivalen a 3 días y 0 horas.
Ejemplo C: si se ingresan 20 horas el programa mostrará por pantalla que equivalen a 0 días y 20 horas.
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