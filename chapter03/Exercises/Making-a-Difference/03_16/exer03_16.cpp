/*
 * exer3.13 : exer03_16.cpp
 *
 * Programa para probar las capacidades de la clase HeartRates.
 */

#include <iostream>
#include <string>

using namespace std;

#include "HeartRates.h"

int main()
{
    // Declarar los datos del usuario que se usarán como argumentos.
    string initName;
    string initLastName;
    int initBirthMonth = 0;
    int initBirthDay = 0;
    int initBirthYear = 0;
    int initCurrentYear = 0;

    // Pedir al usuario su respectiva información.

    cout << "************************************************************\n"
            "* PLEASE ENTER YOUR INFO:                                  *\n"
            "************************************************************\n";
    cout << " Enter your name: ";
    cin >> initName;

    cout << " Enter your lastname: ";
    cin >> initLastName;

    cout << " Enter your birth month: ";
    cin >> initBirthMonth;

    cout << " Enter your birth day: ";
    cin >> initBirthDay;

    cout << " Enter your birth year: ";
    cin >> initBirthYear;

    cout << " Enter current year: ";
    cin >> initCurrentYear;

    // Una vez obtenida la información se declara e inicializa un objeto
    // de clase HeartRates.
    HeartRates user1(initName, initLastName, initBirthMonth, initBirthDay,
                     initBirthYear);

    // Imprimir información: nombre, apellido, edad, máximo ritmo cardiaco,
    // rango de ritmo cardiaco ideal.
    cout << "************************************************************\n"
            "* RESULTS                                                  *\n"
            "* PLEASE REMEMBER --> TARGET HEART RATE IS                 *\n"
            "*                     50\% - 85\% OF MAXIMUM                 *\n"
            "*                     HEART RATE.                          *\n"
            "************************************************************\n"
            "  Name:               " << user1.getName() << endl <<
            "  Last Name:          " << user1.getLastName() << endl <<
            "  Age:                "
               << user1.getAge(initCurrentYear) << endl <<
            "  Maximum heart rate: "
               << user1.getMaximumHeartRate(initCurrentYear)
               << " Beats Per Minute!\n" <<
            "  Target heart rate:  "
               << user1.getTargetHeartRate(initCurrentYear, "min")
               << " - "
               << user1.getTargetHeartRate(initCurrentYear, "max")
               << " Beats Per Minute!\n";
} // Fin de la función main.

