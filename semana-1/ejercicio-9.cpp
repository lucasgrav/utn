#include <iostream>
using namespace std;

/*
EJERCICIO:
Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuantas horas y minutos equivalen.
Ejemplo A: si se ingresan 380 minutos el programa mostrará por pantalla que equivalen a 6 horas y 20 minutos.
Ejemplo B: si se ingresan 720 minutos el programa mostrará por pantalla que equivalen a 12 horas y 0 minutos.
Ejemplo C: si se ingresan 50 minutos el programa mostrará por pantalla que equivalen a 0 horas y 50 minutos
*/

int main()
{
    int minutes, hours, extra_minutes;

    cout << "Enter the minutes: " << endl;
    cin >> minutes;

    hours = minutes / 60;
    extra_minutes = minutes % 60;
 
    cout << hours << " hours and " << extra_minutes << " minutes" << endl;
    return 0;
}