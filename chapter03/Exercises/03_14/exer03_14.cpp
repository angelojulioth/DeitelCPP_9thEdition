/*
 * 3.14 : exer03_14.cpp
 * Programa de prueba para comprobar las capacidades de la clase Employee.
 */

// Bibliotecas estándar de Cpp.
#include <iostream>

using namespace std;

// Bibliotecas del programador.
#include "Employee.h"


int main()
{
    // Crear dos objetos de clase Employee.

    cout
        << "************************************************************\n"
           "* A continuación se crearán tres instancias de clase:      *\n"
           "* Employee.                                                *\n"
           "* El prototipo del constructor es:                         *\n"
           "*         Employee employee1(nombre, apellido, salario);   *\n"
           "* Las instancias serán las siguientes:                     *\n"
           "*     Employee employee1(\"Dan\", \"Mendez\", 1250);           *\n"
           "*     Employee employee2(\"Alex\", \"Tolstoy\", 950);          *\n"
           "*     Employee employee3(\"Karen\", \"Moore\", -456);          *\n"
           "* A la tercera instancia se le pasa un valor negativo como *\n"
           "* salario, por lo tanto aparecerá un error al momento que  *\n"
           "* la función setter llamada en el constructor haga la      *\n"
           "* respectiva validación del valor.                         *\n"
           "************************************************************\n";

    // Objetos.
    Employee employee1("Dan", "Mendez", 1250);
    Employee employee2("Alex", "Tolstoy", 950);
    Employee employee3("Karen", "Moore", -456);


    // Imprimir información de cada empleado, se debe de imprimir también el
    // sueldo anual, y el sueldo anual + 10% de bonificación.
    // Los últimos requisitos no están implementados en la clase, por lo tanto
    // todas las expresiones necesitadas se crearán al momento de imprimir.
    cout
        << "------------------------------------------------------------\n"
           " Datos de Employee, instancia employee1:\n"
           " Nombre: " << employee1.getName() << endl
        << " Apellido: " << employee1.getLastName() << endl
        << " Sueldo Mensual: " << employee1.getMonthSalary() << endl
        << " Sueldo Anual: " << employee1.getMonthSalary() * 12 << endl
        << " Bono de 10\% anual: " <<
             (employee1.getMonthSalary() * 12) * 0.1 << endl
        << " Sueldo Anual + 10 porciento de bono: " <<
             (employee1.getMonthSalary() * 12) +
             ((employee1.getMonthSalary() * 12) * 0.1) << endl << endl <<

           " Datos de Employee, instancia employee2:\n"
           " Nombre: " << employee2.getName() << endl
        << " Apellido: " << employee2.getLastName() << endl
        << " Sueldo Mensual: " << employee2.getMonthSalary() << endl
        << " Sueldo Anual: " << employee2.getMonthSalary() * 12 << endl
        << " Bono de 10\% anual: " <<
             (employee2.getMonthSalary() * 12) * 0.1 << endl
        << " Sueldo Anual + 10 porciento de bono: " <<
             (employee2.getMonthSalary() * 12) +
             ((employee2.getMonthSalary() * 12) * 0.1) << endl << endl <<

           " Datos de Employee, instancia employee3:\n"
           " Nombre: " << employee3.getName() << endl
        << " Apellido: " << employee3.getLastName() << endl
        << " Sueldo Mensual: " << employee3.getMonthSalary() << endl
        << " Sueldo Anual: " << employee3.getMonthSalary() * 12 << endl
        << " Bono de 10\% anual: " <<
             (employee3.getMonthSalary() * 12) * 0.1 << endl
        << " Sueldo Anual + 10 porciento de bono: " <<
             (employee3.getMonthSalary() * 12) +
             ((employee3.getMonthSalary() * 12) * 0.1) << endl <<
           "------------------------------------------------------------\n";
} // Fin de la función main.
