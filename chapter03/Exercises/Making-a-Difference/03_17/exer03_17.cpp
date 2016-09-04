/* 
 * exer3.17 : exer03_17.cpp
 *
 * COMPUTERIZATION OF HEALTH RECORDS.
 * ES: INFORMATIZACIÓN DE HISTORIA CLINICA.
 * Programa de prueba que pruebas las capacidades de la clase HealthProfile.
 */

#include <iostream>
#include <string>

using namespace std;

#include "HealthProfile.h"

int main()
{
    // Variables que se tomarán información de usuario y cuyos valores
    // se pasarán al crear un perfil clínico de clase HealthProfile.
    string initName,
           initLastName,
           initGender;

    int initBirthMonth = 0,
        initBirthDay   = 0,
        initBirthYear  = 0;
    
    int initHeight = 0,
        initWeight = 0;

    string unitSystem;
    int unitSystemSelector = 0;
    
    // Debido a las limitaciones del capítulo, se debe pedir el año actual
    // directamente al usuario.
    int currentYear = 0;
    // Se pide al usuario su información.
    cout <<
        "************************************************************\n"
        "* Please enter the following info correctly!               *\n"
        "* All the fields are required to process your              *\n"
        "* health record.                                           *\n"
        "************************************************************\n";
    cout <<
        "  Enter your first name:  ";
    cin >> initName;

    cout <<
        "  Enter your last name:   ";
    cin >> initLastName;

    cout <<
        "  Enter your gender:      ";
    cin >> initGender;

    cout <<
        "  Enter your birth month: ";
    cin >> initBirthMonth;

    cout <<
        "  Enter your birth day:   ";
    cin >> initBirthDay;

    cout <<
        "  Enter your birth year:  ";
    cin >> initBirthYear;


    cout <<
        "  Enter current year:     ";
    cin >> currentYear;

    cout <<
        "  Please select your unit system: \n"
        "                                 1) Metric\n"
        "                                 2) Imperial\n"
        "  To select write 1 or 2: ";
    cin >> unitSystemSelector;
    // Le da un valor a unitSystem de acuerdo a la elección del usuario.
    if (unitSystemSelector == 1)
        unitSystem = "metric";

    if (unitSystemSelector == 2)
        unitSystem = "imperial";
    // En caso de ingresar una selección erronea se inicialize unitSystem
    // a una cadena no válida.
    if (unitSystemSelector < 0)
        unitSystem = "non-valid unit system argument";

    if (unitSystemSelector > 2)
        unitSystem = "non-valid unit system argument";


    // -----------------------------------------------------------------------
    // Pedir la información de estatura y peso según el sistema de unidades.
    if (unitSystem == "metric")
    {
        cout <<
            "  Enter your height(centimeters):  ";
        cin >> initHeight;

        cout <<
            "  Enter your weight(kilograms):    ";
        cin >> initWeight;
    }

    if (unitSystem == "imperial")
    {
        cout <<
            "  Enter your height(inches):  ";
        cin >> initHeight;

        cout <<
            "  Enter your weight(pounds):  ";
        cin >> initWeight;
    }
    // -----------------------------------------------------------------------


    // Ahora se crea un objeto de clase HealthProfile con la información
    // ingresada por el usuario.
    HealthProfile profile1(initName, initLastName, initGender, initBirthMonth,
            initBirthDay, initBirthYear, initHeight, initWeight);

    // Se imprimen los datos de acuerdo a la información ingresada por el
    // usuario.

    cout <<
        "************************************************************\n"
        "* Health Profile:                                          *\n"
        "************************************************************\n";
    // Print current unit system being used.
    cout << 
        "  CURRENT UNIT SYSTEM BEING USED TO DISPLAY DATA: \n";
    if (unitSystemSelector == 1)
        cout << "  - Metric -" << endl;

    if (unitSystemSelector == 2)
        cout << "  - Imperial -" << endl;

    // Display if selected unit system is incorrect.
    if (unitSystemSelector < 0)
        cout <<
            "  Unit system was not selected propertly by the user!\n"
            "  WARNING:\n"
            "  There may be problems with the data processed below.\n";

    if (unitSystemSelector > 2)
        cout <<
            "  Unit system was not selected propertly by the user!\n"
            "  WARNING:\n"
            "  There may be problems with the data processed below.\n";

    cout <<
        "  Name: " << profile1.getName() << endl <<
        "  LastName: " << profile1.getLastName() << endl <<
        "  Gender: " << profile1.getGender() << endl <<
        "  Birth Date [mm/dd/yy]: "
           << profile1.getBirthMonth() << "/"
           << profile1.getBirthDay() << "/"
           << profile1.getBirthYear() << endl <<
        "  Height: " << profile1.getHeight() << " ";
    // Print centimeters if metric, print inches if imperial.
    if (unitSystem == "metric")
        cout << "centimeters";

    if (unitSystem == "imperial")
        cout << "inches";

    cout << endl;


    cout <<
        "  Weight: " << profile1.getWeight() << " ";
    // Print kilograms if metric, print pounds if imperial.
    if (unitSystem == "metric")
        cout << "kilograms";

    if (unitSystem == "imperial")
        cout << "pounds";

    cout << endl;


    cout <<
        "  Age: " << profile1.getAge(currentYear) << " years" << endl;
    cout <<
        "  BMI(Body Mass Index): "
           << profile1.getBodyMassIndex(unitSystem) << endl;
    // Imprime el cartel de índice de masa corporal.
    profile1.printBodyMassIndexChart(unitSystem);

    // Imprime el máximo ritmo cardíaco y el ritmo ideal mínimo y máximo.
    cout <<
        "  Maximum heart rate: " << profile1.getMaximumHeartRate(currentYear)
                                 << " beats per minute" << endl;
    cout <<
        "  Min - Max Target heart rate:\n"
        "                   min -> 50\% of Maximum heart rate\n"
        "                   max -> 85\% of Maximum heart rate\n" <<
        "  Min - Max Target heart rate:\n"
        "                   min -> "
        << profile1.getTargetHeartRate(currentYear, "min")
                   << "  beats per minute" << endl <<
        "                   max -> "
        << profile1.getTargetHeartRate(currentYear, "max")
                   << " beats per minute" << endl;

    cout <<
        "************************************************************\n";
} // Fin de la función main.
