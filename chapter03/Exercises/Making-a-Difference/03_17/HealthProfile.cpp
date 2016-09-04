/*
 * exer3.17
 *
 * COMPUTARIZATION OF HEALTH RECORDS.
 * ES: INFORMATIZACIÓN DE HISTORIA CLINICA.
 *
 * Implementación de la clase HealthProfile.
 */

#include <iostream>
#include <string>

using namespace std;

#include "HealthProfile.h"


// Constructor.
HealthProfile::HealthProfile(string initName, string initLastName,
                             string initGender, int initBirthMonth,
                             int initBirthDay, int initBirthYear,
                             int initHeight, int initWeight)
{
    // Inicializar los datos miembros mediante las funciones set de la clase.
    setName(initName);
    setLastName(initLastName);
    setGender(initGender);

    setBirthMonth(initBirthMonth);
    setBirthDay(initBirthDay);
    setBirthYear(initBirthYear);

    setHeight(initHeight);
    setWeight(initWeight);
} // Fin del constructor.


// ---------------------------------------------------------------------------
// FUNCIONES SETTER Y GETTER DE LOS DATOS MIEMBRO.

void HealthProfile::setName(string initName)
{
    name = initName;
} // Fin de setName.

string HealthProfile::getName() const
{
    return name;
} // Fin de getName.

void HealthProfile::setLastName(string initLastName)
{
    lastName = initLastName;
} // Fin de setLastName.

string HealthProfile::getLastName() const
{
    return lastName;
} // Fin de getLastName.

void HealthProfile::setGender(string initGender)
{
    gender = initGender;
} // Fin de setGender.

string HealthProfile::getGender() const
{
    return gender;
} // Fin de getGender.


void HealthProfile::setBirthMonth(int initBirthMonth)
{
    birthMonth = initBirthMonth;
} // Fin de setBirthMonth.

int HealthProfile::getBirthMonth() const
{
    return birthMonth;
}

void HealthProfile::setBirthDay(int initBirthDay)
{
    birthDay = initBirthDay;
} // Fin de setBirthDay.

int HealthProfile::getBirthDay() const
{
    return birthDay;
} // Fin de getBirthDay.

void HealthProfile::setBirthYear(int initBirthYear)
{
    birthYear = initBirthYear;
} // Fin de setBirthYear.

int HealthProfile::getBirthYear() const
{
    return birthYear;
} // Fin de getBirthYear.


void HealthProfile::setHeight(int initHeight)
{
    height = initHeight;
} // Fin de setHeight.

int HealthProfile::getHeight() const
{
    return height;
} // Fin de getHeight.

void HealthProfile::setWeight(int initWeight)
{
    weight = initWeight;
} // Fin de setWeight.

int HealthProfile::getWeight() const
{
    return weight;
}

// ---------------------------------------------------------------------------
// FUNCIONES MIEMBRO PARA OPERACIONES MISCELANEAS.

int HealthProfile::getAge(int currentYear) const
{
    return currentYear - birthYear;
}

int HealthProfile::getBodyMassIndex(string operationMode) const
{
    // Se usan flags que avisan si el argumento pasado es "imperial" o
    // "metric".
    int metricModeFlag = 0;
    int imperialModeFlag = 0;

    
    // Se validan los flags para que el programa sepa qué modo de operación
    // se está usando
    if (operationMode == "metric")
    {
        metricModeFlag = 1;
    }

    if (operationMode == "imperial")
    {
        imperialModeFlag = 1;
    }


    // Según el argumento que se pasa "metric" o "imperial", se realiza una
    // operación, osea, se sigue un determinado curso según el argumento.
    if (metricModeFlag == 1)
    {
        // La fórmula para el BMI en sistema métrico es:
        // peso(kg) / altura²(m²)
        // Se interpreta como: peso en kilos, divide para altura al cuadrado
        // en metros.
        // En el caso del programa, puesto a que no se pueden usar valores de
        // punto flotante, debido a las limitaciones del capítulo, se ingresa
        // el valor en cm en lugar de metros, debido a eso, la fórmula
        // anterior queda de la siguiente forma:
        // (peso(kg) / altura²(cm²)) × 10000

        return (weight / (height * (height * 1.0))) * 10000;
    }

    if (imperialModeFlag == 1)
    {
        // La fórmula para el BMI en sistema imperial es:
        // (peso(lb) / altura²(pul²)) × 703.0704
        // Se interpreta como: peso en libras, divide para altura al cuadrado
        // en pulgadas y el valor de esa expresión se lo multiplica para
        // 703.0704.
        // NOTA: El tipo de retorno de la función es int, por lo tanto se
        // usará solamente el valor 703 para hacer la operación.

        return (weight / (height * (height * 1.0))) * 703;
    }

    // Se retorna 0 para que el programa no tire un error en tiempo de
    // ejecución.
    // La siguiente porción de código es un "reemplazo" de la lógica AND.
    // Se retorna 0 si el flag de ambos indica que ninguno de los modos fue
    // usado.
    if (metricModeFlag + imperialModeFlag == 0)
    {
        // En caso de que se pase un argumento inválido a la función, osea
        // un modo de operación incorrecto, se imprime mensaje de error.
        cerr << endl <<
               "**************************************************\n"
               "* WARNING!                                       *\n"
               "* Operation mode passed as argument is invalid:  *\n"
               "  " << operationMode << endl <<
               "* Valid operation modes for the function are:    *\n"
               "* - 'metric'                                     *\n"
               "* - 'imperial'                                   *\n"
               "**************************************************\n"
               << endl;
        return 0;
    }
} // Fin de getBodyMassIndex.

void HealthProfile::printBodyMassIndexChart(string operationMode) const
{
    int bodyMassIndexResults = 0;

    // Imprimir información sobre el índice de masa corporal.
    // Clasificación:
    // BMI inferior a 18.5: bajo peso.
    // BMI entre 18.5 y 25 : peso normal.
    // BMI entre 25 y 30: sobrepeso.
    // BMI entre 30 y 40: obesidad.
    // BMI superior a 40: obesidad morbida.
    cout <<
        "************************************************************\n"
        "* Body Mass Index char and info.                           *\n"
        "*----------------------------------------------------------*\n"
        "* Classification of BMI:                                   *\n"
        "*     BMI below         < 18.5  ->  Underweight            *\n"
        "*     BMI between 18.5  to  25  ->  Normal Weight          *\n"
        "*     BMI between   25  to  30  ->  Overweight             *\n"
        "*     BMI between   30  to  40  ->  Obesity                *\n"
        "*     BMI above         >   40  ->  Morbid Obesity         *\n"
        "*----------------------------------------------------------*\n";

    // Obtener el índice de masa corporal por medio de la función
    // getBodyMassIndex.
    bodyMassIndexResults = getBodyMassIndex(operationMode);

    cout <<
        "  " << getName() << " " << getLastName() << "'s BMI: " 
             << bodyMassIndexResults << endl <<
        "  RESULT  ->  ";

    // Determinar la clasificación de la persona.
    if (bodyMassIndexResults < 18.5)
        cout << "UNDERWEIGHT\n";
    
    if (bodyMassIndexResults >= 18.5)
    {
        if (bodyMassIndexResults < 25)
            cout << "NORMAL WEIGHT\n";
    }

    if (bodyMassIndexResults == 25)
        cout << "NORMAL WEIGHT / ALMOST OVERWEIGHT\n";

    if (bodyMassIndexResults > 25)
    {
        if (bodyMassIndexResults < 30)
            cout << "OVERWEIGHT\n";
    }

    if (bodyMassIndexResults == 30)
        cout << "OVERWEIGHT / ALMOST OBESITY\n";

    if (bodyMassIndexResults > 30)
    {
        if (bodyMassIndexResults < 40)
            cout << "OBESITY\n";
    }

    if (bodyMassIndexResults == 40)
        cout << "OBESITY / ALMOST MORBID OBESITY\n";

    if (bodyMassIndexResults > 40)
        cout << "MORBID OBESITY\n";

    cout <<
        "************************************************************\n";
} // Fin de printBodyMassIndexChart.



int HealthProfile::getMaximumHeartRate(int currentYear) const
{
    // Fórmula para calcular el máximo ritmo cardíaco aproximado:
    // 220 - edad de la persona en años.
    return 220 - getAge(currentYear);
} // Fin de getMaximumHeartRate.

int HealthProfile::getTargetHeartRate(int currentYear,
                                          string operationMode) const
{
    // Declarar flags que serán usadas para mantener un valor que indique
    // el modo de operación que se pasó como argumento e incluso si no
    // se eligió ningún modo correcto.
    int minTargetHeartRateFlag = 0;
    int maxTargetHeartRateFlag = 0;

    // Verificar el modo de operación que se usará(según el parámetro).
    if (operationMode == "min")
    {
        minTargetHeartRateFlag = 1;
    }

    if (operationMode == "max")
    {
        maxTargetHeartRateFlag = 1;
    }

    // Tomar un curso de acción según el modo de operación que se esté usando.
    // Esto se determina por medio de las flags.
    if (minTargetHeartRateFlag)
    {
        // El ritmo cardíaco ideal mínimo es el 50% del ritmo cardíaco máximo.
        return getMaximumHeartRate(currentYear) * 0.5;
    }

    if (maxTargetHeartRateFlag)
    {
        // El ritmo cardíaco ideal máximo es el 85% del ritmo cardíaco máximo.
        return getMaximumHeartRate(currentYear) * 0.85;
    }

    // La siguiente sección imprime un mensaje de error si ninguno de los
    // modos fue usado, se hace de acuerdo a las limitaciones establecidas por
    // el capítulo.
    // La siguiente instrución hace una validación en caso de que ninguna de
    // las flags tenga un valor de verdadero.
    if (minTargetHeartRateFlag + maxTargetHeartRateFlag == 0)
    {
        cerr << endl <<
               "**************************************************\n"
               "* WARNING!                                       *\n"
               "* Non valid operation mode passed as argument    *\n"
               "* for the function:                              *\n"
               "  " << operationMode << endl <<
               "* Valid operation modes are:                     *\n"
               "* - 'min'                                        *\n"
               "* - 'max'                                        *\n"
               "**************************************************\n"
               << endl;

        // Retorna 0 solamente para que no se produzca un error de valor
        // no retornado, ya que la función requiere que se retorne un valor.
        return 0;
    }
} // Fin de getTargetHeartRate.

