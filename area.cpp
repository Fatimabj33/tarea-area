#include <iostream>
#include <cmath> // Para usar la función PI

using namespace std;

// Función para calcular el área de un círculo
double calcularAreaCirculo(double radio) {
    const double PI = 3.14159265358979323846;
    return PI * pow(radio, 2);
}

// Función para calcular el área de un triángulo
double calcularAreaTriangulo(double base, double altura) {
    return (base * altura) / 2;
}

// Función para calcular el área de un cuadrado
double calcularAreaCuadrado(double lado) {
    return pow(lado, 2);
}

int main() {
    int opcion;
    double radio, base, altura, lado;
    do{
        cout << "Selecciona la figura para calcular su área:" << endl;
        cout << "1. Círculo" << endl;
        cout << "2. Triángulo" << endl;
        cout << "3. Cuadrado" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingresa el número de la opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingresa el radio del círculo: ";
                cin >> radio;
                cout << "El área del círculo es: " << calcularAreaCirculo(radio) << endl;
                break;
            case 2:
                cout << "Ingresa la base del triángulo: ";
                cin >> base;
                cout << "Ingresa la altura del triángulo: ";
                cin >> altura;
                cout << "El área del triángulo es: " << calcularAreaTriangulo(base, altura) << endl;
                break;
            case 3:
                cout << "Ingresa el lado del cuadrado: ";
                cin >> lado;
                cout << "El área del cuadrado es: " << calcularAreaCuadrado(lado) << endl;
                break;
            case 4:
                return 0;
            default:
                cout << "Opción no válida. Por favor, selecciona 1, 2 o 3." << endl;
        }
    } while (opcion != 4);
    return 0;
}

