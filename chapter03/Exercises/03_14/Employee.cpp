/*
 * 3.14 : Employee.cpp
 *
 * IMPLEMENTACIÓN DE LA CLASE Employee
 */

// Clases de la biblioteca estándar.
#include <iostream>
#include <string>

using namespace std;

// Definición de la clase Employee.
#include "Employee.h"

// ---------------------------------------------------------------------------
// Constructor

Employee::Employee(string initName, string initLastName, int initSalary)
{
    cout << "------------------------------------------------------------\n";
    cout << "## CONSTRUCTOR INITIALIZATION ##\n";
    cout << "------------------------------------------------------------\n";

    // Inicializar datos miembros con las funciones miembros setter.
    setName(initName);
    cout << "@Initialize: data member name initialized!\n";

    setLastName(initLastName);
    cout << "@Initialize: data member lastName initialized!\n";

    setMonthSalary(initSalary);
    cout << "@Initialize: data member salary initialized!\n";
} // Fin del constructor.

// ---------------------------------------------------------------------------
// Funcions setter y getter de los datos miembros.

void Employee::setName(string initName)
{
    name = initName;
} // Fin de función setName.

string Employee::getName() const
{
    return name;
} // Fin de función getName.


void Employee::setLastName(string initLastName)
{
    lastName = initLastName;
} // Fin de función setLastName.

string Employee::getLastName() const
{
    return lastName;
} // Fin de función getLastName.


void Employee::setMonthSalary(int initSalary)
{
    // Validar valor del parámetro, en caso de que sea negativo, se establece
    // a 0 como valor por defecto, esto es para evitar errores lógicos.
    if (initSalary < 0)
    {
        // Establecer a 0 dato miembro.
        salary = 0;

        // Imprimir mensaje de error y un detalle del mismo.
        cerr
            << "******************************************\n"
               "* WARNING:                               *\n"
               "* Salary can't be set to negative value  *\n"
               "* Setting to 0 as default                *\n"
               "******************************************\n";
    }

    // En caso de que se provea un valor válido como argumento, este se asigna
    // al dato miembro salary.
    if (initSalary >= 0)
    {
        salary = initSalary;
    }
} // Fin de la función setMonthSalary.

int Employee::getMonthSalary() const
{
    return salary;
} // Fin de la función getMonthSalary.

// ---------------------------------------------------------------------------
// FIN DE IMPLEMENTACIÓN DE LA CLASE.
// ---------------------------------------------------------------------------
