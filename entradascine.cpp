#include <iostream>
using namespace std;
int main() {
    char bebida, ubicacion, totalapagar=0; // DONDE ALMACENAMOS ESTOS VALORES
    cout << "Ingrese su ubicacion (1-4): ";
    cin >> ubicacion;
    cout << "Ingrese cantidad de entradas: ";
    cin >> cantidad;

    switch (ubicacion) {
        case 1: "general"
            total += cantidad * 50;
            break;
        case 2: "preferencial"
            total += cantidad * 80;
            break;
        case 3: "platea"
            total += cantidad * 120;
            break;
        case 4: "VIP"
            total += cantidad * 160;
            break;
    }

    cout << "entradas VIP? (1:si, 2:No): ";
    cin >> opcion;
    if (opcion == 1) {
        cout << "Seleccione bebida (G:Gaseosa, C:Cerveza, A:Agua): ";
        cin >> bebida;
        switch (bebida) {
            case 'Gaseosa':
                total += cantidad * 10;
                break;
            case 'Cerveza':
                total += cantidad * 10;
                break;
            case 'Agua':
                total += cantidad * 10;
                break;
        }

        cout << "Total a pagar: $" << total << endl;
    } else {
        cout << "Total a pagar: $" << total << endl;
    }

    return 0;
} // REVISADO
