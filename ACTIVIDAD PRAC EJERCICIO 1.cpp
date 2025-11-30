#include <iostream>
using namespace std;

int ingresarArreglo() {
    int arr;
    cout << "Ingrese cuantos datos desea ingresar: ";
    cin >> arr;
    return arr;
}

int ingresarValor() {
    int valor;
    cout << "Ingrese un valor: ";
    cin >> valor;
    return valor;
}

void mostrarValor(int valor, int posicion) {
    cout << "El valor numero " << posicion << " es: " << valor << endl;
}

void buscarPosicion(int arr[], int tam) {
    int posicion;
    cout << "Ingrese la posicion que desea buscar: ";
    cin >> posicion;

    if (posicion >= 0 && posicion < tam) {
        cout << "La posicion " << posicion << " es: " << arr[posicion] << endl;
    } else {
        cout << "Posicion incorrecta." << endl;
    }
}

int main() {
    int tam = ingresarArreglo();
    int arreglo[tam];

    for (int i = 0; i < tam; i++) {
        int dato = ingresarValor();
        arreglo[i] = dato;       
        mostrarValor(dato, i);   

    buscarPosicion(arreglo, tam);

    return 0;

    }
}


