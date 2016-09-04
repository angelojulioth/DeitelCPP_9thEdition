/*
 * exer3.13 : exer03_13.cpp
 *
 * PROGRAMA DE PRUEBA PARA LA CLASE INVOICE.
 */

// Librerias estándar de cpp.
#include <iostream>

using namespace std;

// Clases definidas por el usuario.
#include "Invoice.h"

int main()
{
    // Crear dos objetos tipo Invoice.
    cout
        << "--------------------------------------------------------------\n"
        << " Se crean dos objetos de clase Invoice.\n"
        << " ej:\n"
        << "invoiceObjecto(\"id\", \"descripción\", cantidad, precio)\n"
        << " Sus argumetos serán:\n"
        << "     invoice1(\"001\", \"Desodorante\", 20, 5)\n"
        << "     invoice2(\"002\", \"Perfume\", -3, 45)\n"
        << " Como se puede apreciar, al segundo se le pasa un argumento\n"
        << " erroneo, un valor negativo. La validación mostrará el error.\n"
        << "--------------------------------------------------------------\n";
    Invoice invoice1("001", "Desodorante", 20, 5);
    Invoice invoice2("002", "Perfume", -3, 45);

    // Imprimir la cuenta por cada item.
    cout
        << "--------------------------------------------------------------\n"
        << " CUENTA invoice1:\n"
        << " ID: " << invoice1.getItemId() << endl
        << " Descripción: " << invoice1.getItemDescription() << endl
        << " Cantidad: " << invoice1.getItemQuantity() << endl
        << " Precio: " << invoice1.getItemPrice() << endl;
    cout
        << " Total: " << invoice1.getInvoiceAmount() << endl << endl;
    cout
        << " CUENTA invoice2:\n"
        << " ID: " << invoice2.getItemId() << endl
        << " Descripción: " << invoice2.getItemDescription() << endl
        << " Cantidad: " << invoice2.getItemQuantity() << endl
        << " Precio: " << invoice2.getItemPrice() << endl;
    cout
        << " Total: " << invoice2.getInvoiceAmount() << endl << endl;
    cout
        << "--------------------------------------------------------------\n";
} // Fin de la función main.
