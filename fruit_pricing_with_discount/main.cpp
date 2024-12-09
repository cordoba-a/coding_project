//
//  main.cpp
//  entregable_2_JECA
//
//  Created by Eduardo Cordoba on 06/12/24.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Declarar precios por kg de las frutas
    const double precioUva = 30.0;
    const double precioMango = 25.0;
    const double precioPlatano = 20.0;
    const double precioFresa = 35.0;

    // Variables para almacenar los kg comprados de cada fruta
    double kgUva, kgMango, kgPlatano, kgFresa;
    string nombreComprador;

    // Pedir el nombre del comprador
    cout << "Bienvenido a la frutería. Por favor, ingresa tu nombre: ";
    getline(cin, nombreComprador);

    // Pedir al usuario la cantidad de kg para cada fruta
    cout << "\nIngresa los kg comprados de cada fruta.\n";
    cout << "Uvas (kg): ";
    cin >> kgUva;
    cout << "Mangos (kg): ";
    cin >> kgMango;
    cout << "Plátanos (kg): ";
    cin >> kgPlatano;
    cout << "Fresas (kg): ";
    cin >> kgFresa;

    // Calcular el costo por fruta
    double costoUva = kgUva * precioUva;
    double costoMango = kgMango * precioMango;
    double costoPlatano = kgPlatano * precioPlatano;
    double costoFresa = kgFresa * precioFresa;

    // Variables para registrar si se aplicó descuento
    bool descuentoUva = false, descuentoMango = false, descuentoPlatano = false, descuentoFresa = false;

    // Aplicar descuento del 10% si compró 4 kg o más de alguna fruta
    if (kgUva >= 4) {
        costoUva *= 0.90;
        descuentoUva = true;
    }
    if (kgMango >= 4) {
        costoMango *= 0.90;
        descuentoMango = true;
    }
    if (kgPlatano >= 4) {
        costoPlatano *= 0.90;
        descuentoPlatano = true;
    }
    if (kgFresa >= 4) {
        costoFresa *= 0.90;
        descuentoFresa = true;
    }

    // Calcular el total a pagar
    double total = costoUva + costoMango + costoPlatano + costoFresa;

    // Mostrar los resultados
    cout << fixed << setprecision(2);
    cout << "\nDetalle de compra:\n";
    cout << "Uvas: $" << costoUva << (descuentoUva ? " (descuento aplicado)" : "") << endl;
    cout << "Mangos: $" << costoMango << (descuentoMango ? " (descuento aplicado)" : "") << endl;
    cout << "Plátanos: $" << costoPlatano << (descuentoPlatano ? " (descuento aplicado)" : "") << endl;
    cout << "Fresas: $" << costoFresa << (descuentoFresa ? " (descuento aplicado)" : "") << endl;
    cout << "-------------------------" << endl;
    cout << "Total a pagar: $" << total << endl;

    // Mostrar cuadro de diálogo final
    cout << "\n---------------------------\n";
    cout << "Factura para: " << nombreComprador << endl;
    cout << "Total a pagar: $" << total << endl;

    // Mostrar si se aplicaron descuentos
    if (descuentoUva || descuentoMango || descuentoPlatano || descuentoFresa) {
        cout << "Se aplicaron descuentos en las frutas compradas.\n";
    } else {
        cout << "No se aplicaron descuentos.\n";
    }
    cout << "---------------------------\n";

    // Desglose de compra detallado
    cout << "\nDesglose detallado de la compra:\n";
    cout << "Fruta        Cantidad (kg)     Descuento       Costo Final\n";
    cout << "----------------------------------------------------------\n";
    cout << "Uvas         " << setw(12) << kgUva << setw(14)
         << (descuentoUva ? "Sí" : "No") << setw(15) << "$" << costoUva << endl;
    cout << "Mangos       " << setw(12) << kgMango << setw(14)
         << (descuentoMango ? "Sí" : "No") << setw(15) << "$" << costoMango << endl;
    cout << "Plátanos     " << setw(12) << kgPlatano << setw(14)
         << (descuentoPlatano ? "Sí" : "No") << setw(15) << "$" << costoPlatano << endl;
    cout << "Fresas       " << setw(12) << kgFresa << setw(14)
         << (descuentoFresa ? "Sí" : "No") << setw(15) << "$" << costoFresa << endl;
    cout << "----------------------------------------------------------\n";
    cout << "Total:                                          $" << total << endl;

    return 0;
}
