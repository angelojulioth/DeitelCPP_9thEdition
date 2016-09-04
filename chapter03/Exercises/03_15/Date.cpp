/*
 * exer03.15 : Date.cpp
 *
 * IMPLEMENTACIÓN DE LA CLASE Date.
 */

// Librerías estándar de Cpp.
#include <iostream>

using namespace std;

// Declaración/Interfaz de la clase.
#include "Date.h"

// Constructor.
Date::Date(int initMonth, int initDay, int initYear)
{
    // Initialize data members to values from parameters.
    setMonth(initMonth);
    setDay(initDay);
    setYear(initYear);
} // Fin del constructor


// ---------------------------------------------------------------------------
// Funciones getter y setter para manipular datos miembro.

void Date::setMonth(int initMonth)
{
    // Validate value.

    // In case of non valid value: num < 0 or num > 12
    if (initMonth < 0)
    {
        // If initMonth is < 0, print error and set month data member to 1.
        cerr
            << "*******************************************************\n"
               "* WARNING:                                            *\n"
               "* Month can't be set to a negative value!             *\n"
               "* Setting month to 1 as a default value.              *\n"
               "*******************************************************\n";
        month = 1;

        return;
    }

    if (initMonth > 0)
    {
        // If initMonth is greater than 12, the value is invalid, the
        // statements are performed and then the last statement "return" ends
        // the function and return where it was called.
        if (initMonth > 12)
        {
            cerr
                << "*******************************************************\n"
                   "* WARNING:                                            *\n"
                   "* Month can't be set to value greater than 12!        *\n"
                   "* Setting month to 1 as a default value.              *\n"
                   "*******************************************************\n";
            month = 1;
            // Return so that the rest of the conditional statements don't
            // execute.
            return;
        } // Fin de if hijo.

        // Else, the value is valid and it is asigned to data member month.
        month = initMonth;
    } // Fin de if padre
} // Fin de función setMonth.

int Date::getMonth() const
{
    return month;
} // Fin de función getMonth.


void Date::setDay(int initDay)
{
    day = initDay;
} // Fin de la función setDay.

int Date::getDay() const
{
    return day;
} // Fin de la función getDay.


void Date::setYear(int initYear)
{
    year = initYear;
} // Fin de la función setYear.

int Date::getYear() const
{
    return year;
}


// ---------------------------------------------------------------------------
// MEMBER FUNCTIONS FOR MISC OPERATIONS.

void Date::displayDate() const
{
    cout << month << "/" << day << "/" << year << endl;
}




// ---------------------------------------------------------------------------
// FIN DE IMPLEMENTACIÓN DE LA CLASE.
// ---------------------------------------------------------------------------
