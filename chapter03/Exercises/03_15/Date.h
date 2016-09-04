/*
 * exer03.15 : Date.h
 *
 * DEFINICIÓN DE INTERFAZ DE LA CLASE DATE.
 *
 * 3.15
 * -------------------------------------------------------------------------------
 *  DATE CLASS
 *  Crea una clase llamada Date que incluya tres piezas de información como datos
 *  miembro:
 *  - Month(tipo int)
 *  - Day(tipo int)
 *  - Year(tipo int)
 *  La clase debería de tener un constructor con tres parámetros que use los
 *  parámetros para inicializar los tres datos miembro. Para el propósito de este
 *  ejercicio, se asume que el valor que se provee para day y month sea
 *  correcto, pero hay que asegurarse que el valor de month esté en un rango de
 *  1-12, sino es así, se establece month a 1. Provee una función set y una función
 *  get a cada dato miembro. Provee una función miembro displayDate que imprima en
 *  pantalla el mes, día y año, separados por barras diagonales "/". Escribe un
 *  programa de prueba que demuestre las capacidades de la clase Date.
 *  -------------------------------------------------------------------------------
 */

class Date {
public:
    // Constructor.
    Date(int initMonth, int initDay, int initYear);

    // Getters and setters for data members.
    void setMonth(int);
    int getMonth() const;

    void setDay(int);
    int getDay() const;

    void setYear(int);
    int getYear() const;

    // Member functions for misc operations.
    void displayDate() const;

// Data members.
private:
    int month;
    int day;
    int year;
}; // Fin de interfaz de la clase Date.
