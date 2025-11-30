#include <iostream>
using namespace std;
 
 int ingresaArreglo(){
 	int arreglo;
 	cout<<"Ingrese el tamanio del arreglo: ";
 	cin>>arreglo;
 	return arreglo; 
 }
 void llenarArreglo (int arr[],int arreglo){
 	cout<<"Ingrese "<<arreglo<<"valores: "<<endl;
 	for (int i=0; i<=arreglo; i++){
	 	cin>>arr[i];
	 }
 } 
void buscarPosicion (int arr[], int arreglo){
	int posicion;
	cout<<"Ingrese la posicion que desea buscar: ";
	cin>>posicion; 
	if (posicion>=0 && posicion<arreglo){
		cout<<"La posicion"<<posicion<<"es: "<<arr[posicion]<<endl;
	} else{
		cout<<"Posicion incorrecta."<<endl;
	}
}

int main(){
	int arreglo = ingresaArreglo();
	int arregl[arreglo];

	llenarArreglo(arregl, arreglo);
	buscarPosicion(arregl, arreglo);
	return 0;
}
