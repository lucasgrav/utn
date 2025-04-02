#include <iostream>
using namespace std;

/*
EJERCICIO:
Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos
para cada una de las cuatro semanas del mes.
El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
*/

int main()
{
    float week_one, week_two, week_three, week_four, average_collection, total_collection;

    cout << "Enter the collection of week one: " << endl;
    cin >> week_one;

    cout << "Enter the collection of week two: " << endl;
    cin >> week_two;

    cout << "Enter the collection of week three: " << endl;
    cin >> week_three;

    cout << "Enter the collection of week four: " << endl;
    cin >> week_four;

    total_collection = week_one + week_two + week_three + week_four;
    average_collection = total_collection / 4;

    week_one = (week_one / total_collection) * 100;
    week_two = (week_two / total_collection) * 100;
    week_three = (week_three / total_collection) * 100;
    week_four = (week_four / total_collection) * 100;

    cout << "Average collection: " << "$" << average_collection << endl;

    cout << "Percentage of collections from week one: " << week_one << "%" << endl;
    cout << "Percentage of collections from week two: " << week_two << "%" << endl;
    cout << "Percentage of collections from week three: " << week_three << "%" << endl;
    cout << "Percentage of collections from week four: " << week_four << "%" << endl;
    
    return 0;
}