#include <iostream>
using namespace std;

/*
EJERCICIO:
Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión
y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación
y el porcentaje de no ocupación del mismo.
*/

int main()
{
    float total_seats, occupied_passages, percentage_of_unemployed, percentage_of_employed;

    cout << "Enter the total number of seats: " << endl;
    cin >> total_seats;

    cout << "Enter the total number of occupied passages: " << endl;
    cin >> occupied_passages;

    percentage_of_employed = (occupied_passages / total_seats) * 100;
    percentage_of_unemployed = 100 - percentage_of_employed;

    cout << "Percentage of employed: " << percentage_of_employed << "%" << endl;
    cout << "Percentage of unemployed: " << percentage_of_unemployed << "%" << endl;

    return 0;
}