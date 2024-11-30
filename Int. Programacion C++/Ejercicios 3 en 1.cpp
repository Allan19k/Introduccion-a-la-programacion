/* Ejercicios 3 en 1 
   Int. a la programacion
   Allan Hall Solorio 358909
*/
#include <iostream>
using namespace std;

int main(){
	int cuadrado; // para el ejercicio 2 
	
	cout<<"\n1. Imprimir los numeros del 0 al 100 usando bucle for"<<endl;
	for(int i=0; i<=100; i++){
		cout<<i<<",";
	}
	cout<<endl;
	cout<<"\n2. Imprimir los cuadrados de los primeros 10 numeros naturales"<<endl;
	for(int j=0; j<10; j++){
		cuadrado= j*j;
		cout<<"El cuadrado de "<<j<<" es = "<<cuadrado<<endl;
	}
	cout<<endl;
	cout<<"\n3. Imprimir de 10 en 10, desde el 1 hasta el 10,000"<<endl;
	for(int k=0; k<10001; k+= 10){ // es lo mismo que k= k + 10, para que vaya de 10 en 10
	    cout<<k<<","; 
		
	}
	
	return 0;
}