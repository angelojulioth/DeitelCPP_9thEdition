/*
 * exer3.17 : HealthProfile.h
 *
 * COMPUTERIZATION OF HEALTH RECORDS.
 * ES: INFORMATIZACIÓN DE HISTORIA CLINICA.
 * Declaración de interfaz de la clase HealthProfile.
 */

#include <string>

class HealthProfile {
public:
    // Constructor.
    HealthProfile(std::string initName, std::string initLastName,
                  std::string initGender, int initBirthMonth,
                  int initBirthDay, int initBirthYear,
                  int initHeight, int initWeight);

    // Funciones getter y setter de los datos miembro.
    void setName(std::string);
    std::string getName() const;

    void setLastName(std::string);
    std::string getLastName() const;

    void setGender(std::string);
    std::string getGender() const;

    void setBirthMonth(int);
    int getBirthMonth() const;

    void setBirthDay(int);
    int getBirthDay() const;

    void setBirthYear(int);
    int getBirthYear() const;

    void setHeight(int);
    int getHeight() const;
    void setWeight(int);
    int getWeight() const;

    //------------------------------------------------------------------------
    // Funciones miembro para operaciones miscelaneas.

    // getAge recibe como argumento el año actual.
    int getAge(int) const;

    // getBodyMassIndex hace las operaciones con datos
    // miembro pero requiere de un argumento para que se elija un modo de
    // operar, la función tiene dos modos, una calcula el índice de masa
    // corporal en modo métrico y la otra en modo imperial, los argumentos
    // que se pueden pasar son "metric" y el otro "imperial".
    int getBodyMassIndex(std::string) const;

    // printBodyMassIndexChart imprime información de el índice de masa
    // corporal del usuario y determina su estado físico según eso.
    // Se le debe pasar un argumento de acuerdo al sistema de unidades que se
    // quiere usar, los argumentos válidos son "metric" e "imperial".
    void printBodyMassIndexChart(std::string) const;

    // getMaximumHeartRate recibe como argumento el año actual, que luego
    // se pasa como argumento al llamar a getAge, se llama a getAge en esta
    // función porque se necesita el valor que retorna para operar, osea
    // la edad del usuario.
    int getMaximumHeartRate(int) const;

    // getTargetHeartRate recibe como argumento el año actual por la misma
    // razón que getMaximumHeartRate, pero también recibe como argumento
    // una cadena que índica a la función en modo en el que debe de realizar
    // la operación y según eso retornar un valor, los modos de las
    // operaciones que realiza esta función son "min" y "max", min retorna
    // el mínimo del ritmo cardíaco ideal y max retorna el máximo del ritmo
    // cardíaco ideal.
    int getTargetHeartRate(int, std::string) const;


// ---------------------------------------------------------------------------
// Data members
private:
    std::string name;
    std::string lastName;
    std::string gender;

    int birthMonth;
    int birthDay;
    int birthYear;

    int height;
    int weight;
}; // Fin de definición de interfaz de la clase HealthProfile.
