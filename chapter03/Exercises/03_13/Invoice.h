/*
 * exer3.13 : Invoice.h
 *
 * HEADER DE LA CLASE INVOICE: Definición / Interfaz de la clase.
 * -------------------------------------------------------------------------------
 *  INVOICE CLASS (Clase Factura)
 *  Crea una clase Invoice que una ferreteria(hardware store) quizá usaría para
 *  representar una factura para un item vendido en la tienda. La clase Invoice
 *  debería incluir cuatro datos miembros con las siguientes características:
 *  * Un número de parte(tipo string)
 *  * Uno que guarde una descripción del producto(tipo string)
 *  * Uno que guarde la cantidad del elemento que se está comprando(tipo int)
 *  * Uno que guarde el precio del elemento(tipo int)
 *  [NOTA: En los siguientes capítos se usarán números que contengan puntos
 *  decimales -también llamados valores de punto flotante- con el fin de
 *  representar cantidades de dólar con dichos valores].
 *
 *  Tu constructor debe de tener un constructor que inicialize los cuatro datos
 *  miembro. Un constructor que recibe multiples argumentos debe de ser definido
 *  de la siguiente manera:
 *    NombreDeClase(tipo1 parámetro1, tipo2 parámetro2)
 *
 *    Provee una función get y una función set para cada dato miembro. Adicionalmente
 *    escribe una función llamada getInvoiceAmount que calcule la cantidad
 *    facturada(osea, se multiplica la cantidad por el precio del elemento) luego
 *    retorna ese valor como un int. Si la cantidad no es positiva, debe establecerse
 *    a 0. Escribe un programa de prueba que demuestre las capacidades de la clase
 *    Invoice.
 *    -------------------------------------------------------------------------------
 */

#include <string>

class Invoice {
// Constructor.
// Getters and Setters for data members.
// Member functions for different operations.
public:
    // Constructor.
    Invoice(std::string initItemId, std::string initItemDescription,
            int initItemQuantity, int initItemPrice);
    // Setters(Data members).
    void setItemId(std::string);
    void setItemDescription(std::string);
    void setItemQuantity(int);
    void setItemPrice(int);

    // Getters(Data members).
    std::string getItemId() const;
    std::string getItemDescription() const;
    int getItemQuantity() const;
    int getItemPrice() const;

    // Member functions for different operations.

    // Function to get the amount of item quantity x price of item of item.
    int getInvoiceAmount() const;

// Data members.
private:
    std::string itemId;
    std::string itemDescription;
    int itemQuantity;
    int itemPrice;
}; // End of interface declaration for class Invoice.
