#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombres[3];
    int edades[3];

    cout << "Ingrese los nombres y edades: "<<endl;
    for(int i = 0; i < 3; i++){
        cout << "Nombre " << i + 1 << ": ";
        cin >> nombres[i];
        cout << "Edad " << i + 1 << ": ";
        cin >> edades[i];
    }

    cout << "Datos ingresados: "<<endl;
    for(int i = 0; i < 3; i++){
        cout << "Persona " << i + 1 << ": " 
             << nombres[i] << " : " << edades[i] << " anios"<<endl;
    }

    return 0;
}
