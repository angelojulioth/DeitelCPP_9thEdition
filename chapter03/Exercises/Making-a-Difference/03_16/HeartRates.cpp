/*
 * exer3.16 : HeartRates.cpp
 *
 * Implementación de la clase HeartRates.
 */

#include <iostream>
#include <string>

using namespace std;

#include "HeartRates.h"


// Constructor.
HeartRates::HeartRates(string initName, string initLastName,
                       int initBirthMonth, int initBirthDay, int initBirthYear)
{
    // Inicializar los datos miembro mediante las funciones miembro setter.
    setName(initName);
    setLastName(initLastName);
    setBirthMonth(initBirthMonth);
    setBirthDay(initBirthDay);
    setBirthYear(initBirthYear);
} // Fin del constructor.


// ---------------------------------------------------------------------------
// FUNCIONES SETTER Y GETTER DE LOS DATOS MIEMBRO.

void HeartRates::setName(string initName)
{
    // Asignar el valor del parámetro al dato miembro.
    name = initName;
} // Fin de función setName.

string HeartRates::getName() const
{
    return name;
} // Fin de la función getName

void HeartRates::setLastName(string initLastName)
{
    // Asignar el valor del parámetro al dato miembro.
    lastName = initLastName;
} // Fin de la función setLastName.

string HeartRates::getLastName() const
{
    return lastName;
} // Fin de la función getLastName.


void HeartRates::setBirthMonth(int initBirthMonth)
{
    birthMonth = initBirthMonth;
} // Fin de la función setBirthMonth.

int HeartRates::getBirthMonth() const
{
    return birthMonth;
} // Fin de la función getBirthMonth.

void HeartRates::setBirthDay(int initBirthDay)
{
    birthDay = initBirthDay;
} // Fin de la función setBirthDay.

int HeartRates::getBirthDay() const
{
    return birthDay;
} // Fin de la función getBirthDay.

void HeartRates::setBirthYear(int initBirthYear)
{
    birthYear = initBirthYear;
} // Fin de la función setBirthYear-

int HeartRates::getBirthYear() const
{
    return birthYear;
} // Fin de la función getBirthYear.


// ---------------------------------------------------------------------------
// FUNCIONES MIEMBRO PARA REALIZAR OPERACIONES MISCELANEAS EN LA CLASE.

int HeartRates::getAge(int currentYear) const
{
    // Retornar la edad.
    return currentYear - birthYear;
} // Fin de la función getAge.

int HeartRates::getMaximumHeartRate(int currentYear) const
{
    // Según la fórmula de la American Heart Association, se estima el ritmo
    // cardiaco máximo en latidos por minuto restando la edad a 220:
    // 220 - edad actual
    return 220 - getAge(currentYear);
}

int HeartRates::getTargetHeartRate(int currentYear, string minOrMaxRange) const
{
    // Se pasa la string 'min' para obtener el rango mínimo ideal de latidos
    // por minuto, el rango mínimo ideal es el 50% del ritmo cardiaco máximo.
    // Validar si se pasa como argumento min:
    if (minOrMaxRange == "min")
    {
        // Retorna el rango mínimo ideal de latidos por minuto.
        return getMaximumHeartRate(currentYear) * 0.5;
    }

    // Se pasala string 'max' para obtener el rango máximo ideal de latidos
    // por minuto, el rango máximo ideal es el 85% del ritmo cardiaco máximo.
    if (minOrMaxRange == "max")
    {
        // Retorna el rango máximo ideal de latidos por minuto.
        return getMaximumHeartRate(currentYear) * 0.85;
    }
} // Fin de la función getTargetHeartRate.
