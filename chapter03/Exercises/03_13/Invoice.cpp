/*
 * exer3.13 : Invoice.cpp
 * INVOICE CLASS IMPLEMENTATION.
 * Implementación de las funciones de clase invoice.
 */

// C standard libs.
#include <iostream>
#include <string>

using namespace std;

// Class interface.
#include "Invoice.h"


// ---------------------------------------------------------------------------
// Constructor.
Invoice::Invoice(string initItemId, string initItemDescription,
                 int initItemQuantity, int initItemPrice)
{
    cout << "## CONSTRUCTOR INITIALIZATION OF DATA MEMBERS STARTED ##\n";

    setItemId(initItemId);
    cout << "    @Initialization: item id set completed!\n";

    setItemDescription(initItemDescription);
    cout << "    @Initialization: item description set completed!\n";

    setItemQuantity(initItemQuantity);
    cout << "    @Initialization: item quantity set completed!\n";

    setItemPrice(initItemPrice);
    cout << "    @Initialization: item price set completed!\n";
}

// ---------------------------------------------------------------------------
// Setters and getters for data members.

// Set and get item id.
void Invoice::setItemId(string initItemId)
{
    itemId = initItemId;
}

string Invoice::getItemId() const
{
    return itemId;
}

// Set and get item description.
void Invoice::setItemDescription(string initItemDescription)
{
    itemDescription = initItemDescription;
}

string Invoice::getItemDescription() const
{
    return itemDescription;
}

// Set and get item quantity.
void Invoice::setItemQuantity(int initItemQuantity)
{
    // Validation.
    // Check if negative value is provided, if that's true, set quantity to 0.
    if (initItemQuantity < 0)
    {
        // If value is negative set data member to 0.
        itemQuantity = 0;

        // Print warning and description of error.
        cerr
            << "************************************\n"
            << "* WARNING --> for quantity set     *\n"
            << "- In object: " << itemDescription << " -\n"
            << "* Negative value provided.         *\n"
            << "* Setting to 0 as default.         *\n"
            << "************************************\n";
    }

    // If value provided is valid, asign value to data member.
    if (initItemQuantity >= 0)
    {
        itemQuantity = initItemQuantity;
    }
} // Fin de la función setItemQuantity.

int Invoice::getItemQuantity() const
{
    return itemQuantity;
} // Fin de la función getItemQuantity.


// Set and get item price.
void Invoice::setItemPrice(int initItemPrice)
{
    // Validate.
    // If provided value is negative, set data member to 0.
    if (initItemPrice < 0)
    {
        // default data member to 0.
        itemPrice = 0;

        // print details of the error.
        cerr
            << "************************************\n"
            << "* WARNING --> for price set        *\n"
            << "- In object: " << itemDescription << " -\n"
            << "* Negative value provided          *\n"
            << "* Setting to 0 as default.         *\n"
            << "************************************\n";
    }

    // If valid value is provided, asign it to data member.
    if (initItemPrice >= 0)
    {
        itemPrice = initItemPrice;
    }
} // Fin de la función setItemPrice.

int Invoice::getItemPrice() const
{
    return itemPrice;
} // Fin de la función getItemPrice.



// ---------------------------------------------------------------------------
// Member functions for operations.

int Invoice::getInvoiceAmount() const
{
    int itemInvoiceAmount = 0;
    
    // Calculation for itemInvoiceAmount : itemQuantity x itemPrice.
    itemInvoiceAmount = itemQuantity * itemPrice;

    // Imprimir advertencia en caso de que el total facturado sea igual a 0.
    if (itemInvoiceAmount == 0)
    {
        cout 
            << " *******************************************************\n"
            << " ADVERTENCIA! el valor facturado es igual a 0.\n"
            << " En objeto: " << itemDescription << endl
            << " Verifica que la cantidad o precio tengan un valor > 0.\n"
            << " *******************************************************\n";
    }

    // Return value of calculation.
    return itemInvoiceAmount;
} // Fin de la función getInvoiceAmount.

// ---------------------------------------------------------------------------
// FIN DE LA IMPLEMENTACIÓN PARA LA CLASE INVOICE
// ---------------------------------------------------------------------------
