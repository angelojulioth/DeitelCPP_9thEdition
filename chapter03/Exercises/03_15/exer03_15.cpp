/*
 * exer3.15 : exer03_15.cpp
 *
 * PROGRAMA DE PRUEBA QUE SIRVE PARA PROBAR LAS CAPACIDADES DE LA CLASE Date.
 */

// Librerías estándar de Cpp.
#include <iostream>

using namespace std;

// Librerías del programador.
#include "Date.h"

int main()
{
    // Imprimir descripción del programa.
    cout
        << "------------------------------------------------------------\n"
           " SE CREAN DOS OBJETOS DE CLASE Date.\n"
           " El prototipo del constructor es:\n"
           "         Date date1(mes, día, año);\n"
           " Al crear un objeto se pasan los argumentos como tipo int.\n"
           " Los dos objetos que se crearán son estos:\n"
           "         Date date1(9, 5, 1995);\n"
           "         Date date2(13, 3, 2008);\n\n"
           " Solamente se hace validación del valor del mes.\n"
           " Al inicializar el segundo objeto, este tiene un valor\n"
           " incorrecto para el mes, entonces se establece al valor por\n"
           " defecto 1, osea, 'Enero'.\n"
           " Al final se imprimirán los valores individuales de los\n"
           " datos miembros y también se usará una función miembro para\n"
           " imprimir la fecha en formato mm/dd/yy\n"
           "------------------------------------------------------------\n\n";


    // Crear dos objetos de clase date.
    Date date1(9, 5, 1995);
    Date date2(13, 3, 2008);

    // Se imprime información individual de cada objeto y se imprime la fecha
    // en formato mm/dd/yy por medio de la función miembro displayDate.
    cout
        << "------------------------------------------------------------\n"
           " OBJETOS DE CLASE Date:\n\n"
           " Clase Date --> instancia date1\n"
           " Mes: " << date1.getMonth() << endl
        << " Día: " << date1.getDay() << endl
        << " Año: " << date1.getYear() << endl
        << " Formato mm/dd/yy: ";
           date1.displayDate();
    cout << "\n\n";

    cout
        << " Clase Date --> instancia date2\n"
           " Mes: " << date2.getMonth() << endl
        << " Día: " << date2.getDay() << endl
        << " Año: " << date2.getYear() << endl
        << " Formato mm/dd/yy: ";
           date2.displayDate();
    cout
        << "\n"
           "------------------------------------------------------------\n";
} // Fin de la función main.
