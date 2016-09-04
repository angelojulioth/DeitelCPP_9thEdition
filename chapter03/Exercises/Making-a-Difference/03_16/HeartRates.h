/*
 * exer3.16 : HeartRates.h
 *
 * Definición de interfaz de la clase HeartRates.
 * Descripción del programa guardada en ProgramDescription.txt
 */

#include <string>

class HeartRates {
public:
    // Constructor.
    HeartRates(std::string initName, std::string initLastName,
               int initBirthMonth, int initBirthDay, int initBirthYear);

    // Funciones miembro setter y getter de los datos miembro.
    void setName(std::string);
    std::string getName() const;

    void setLastName(std::string);
    std::string getLastName() const;

    void setBirthMonth(int);
    int getBirthMonth() const;

    void setBirthDay(int);
    int getBirthDay() const;

    void setBirthYear(int);
    int getBirthYear() const;


    // Funciones miembro para operaciones miscelaneas.
    int getAge(int) const;
    int getMaximumHeartRate(int) const;
    int getTargetHeartRate(int, std::string) const;

// Datos miembro.
private:
    std::string name;
    std::string lastName;
    int birthMonth;
    int birthDay;
    int birthYear;
}; // Fin de declaración de interfaz de la clase.
