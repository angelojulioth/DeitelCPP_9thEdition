/*
 * exer3.14 : Employee.h
 *
 * DEFINICIÓN DE INTERFAZ DE LA CLASE.
 * 3.14
 * -------------------------------------------------------------------------------
 * EMPLOYEE CLASS
 * Crea una clase llamada Employee que incluya tres piezas de información como
 * datos miembros:
 * - Nombre(tipo string)
 * - Apellido(tipo string)
 * - Salario mensual(tipo int)
 * Tu clase debe tener un constructor que inicialice los tres datos miembros.
 * Provee una función set y una get para cada dato miembro, si el salario mensual
 * pasado por argumento al momento de crear una instancia de la clase es un
 * número negativo, establece el valor del salario mensual a 0. Escribe un
 * programa de prueba que demuestre las capacidades de la clase Employee.
 * Crea dos objetos Employee e imprime el salario anual de cada objeto. Luego dale
 * a cada empleado un aumento del 10% e imprime nuevamente el salario anual con
 * dicho 10% extra.
 * -------------------------------------------------------------------------------
*/

#include <string>

class Employee {
public:
    // Constructor.
    Employee(std::string initName, std::string initLastName, int initSalary);

    // Get and set functions for data members.
    void setName(std::string);
    std::string getName() const;

    void setLastName(std::string);
    std::string getLastName() const;

    void setMonthSalary(int);
    int getMonthSalary() const;

// Data Members.
private:
    std::string name;
    std::string lastName;
    int salary;
}; // Fin de definición de la interfaz de la clase Employee.
