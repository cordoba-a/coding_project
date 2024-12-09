//
//  main.cpp
//  entregable_1_JECA
//
//  Created by Eduardo Cordoba on 24/11/24.
//

#include <iostream>  // librería estándar para entrada y salida
#include <cmath>     // librería para funciones matemáticas

using namespace std;  // usa el espacio de nombres estándar para evitar escribir "std::" en cada instrucción

// función principal del programa (punto de entrada)
int main() {
    // feclaración de variables locales
    int numero, cuadrado, cubo;  // fariables para almacenar el número ingresado y sus resultados: cuadrado y cubo

    // solicitar al usuario que ingrese un número (entrada de datos)
    cout << "Introduce un numero: ";  // muestra un mensaje en consola solicitando el número
    cin >> numero;  // lee el número ingresado por el usuario y lo guarda en la variable 'numero'

    // procesamiento de los datos: cálculo del cuadrado y el cubo del número
    cuadrado = numero * numero;  // calcula el cuadrado del número (número al cuadrado)
    cubo = pow(numero, 3);       // calcula el cubo del número utilizando la función pow() (número al cubo)
    
    // mostrar los resultados (salida de datos)
    cout << "El cuadrado del numero es: " << cuadrado << endl;  // muestra el cuadrado del número en consola
    cout << "El cubo del numero es: " << cubo << endl;  // muestra el cubo del número en consola

    return 0;  // retorno de la función principal, indicando que el programa terminó correctamente
}
