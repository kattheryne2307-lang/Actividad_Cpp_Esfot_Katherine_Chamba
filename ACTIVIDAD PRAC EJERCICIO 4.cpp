#include <iostream>
#include <string>
using namespace std;

void ingresarNombres(string nombres[], int tam) {
    cout << "Ingrese los nombres:\n";
    for (int i = 0; i < tam; i++) {
        cout << "Nombre " << i + 1 << ": ";
        cin >> nombres[i];
    }
}

void ingresarEdades(int edades[], int tam) {
    cout << "\nIngrese las edades:\n";
    for (int i = 0; i < tam; i++) {
        cout << "Edad de " << i + 1 << ": ";
        cin >> edades[i];
    }
}

void mostrarDatos(string nombres[], int edades[], int tam) {
    cout << "\nListado de personas:\n";
    for (int i = 0; i < tam; i++) {
        cout << "Persona " << i + 1 << ": "
             << nombres[i] << " - " << edades[i] << " anios\n";
    }
}

int main() {
    const int TAM = 3;
    string nombres[TAM];
    int edades[TAM];

    ingresarNombres(nombres, TAM);
    ingresarEdades(edades, TAM);
    mostrarDatos(nombres, edades, TAM);

    return 0;
}
