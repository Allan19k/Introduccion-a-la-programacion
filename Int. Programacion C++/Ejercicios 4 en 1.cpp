/*
    Ejercicios 4 en 1 
    Int. a la programacion
    Allan Hall Solorio 358909
*/
#include <iostream>
using namespace std;

// 1. Funcion para solicitar n numeros y almacenarlos en un arreglo

void solicitarNumeros(int* arreglo, int n){
	for(int i=0; i<n; i++){
		cout<<"\nIngrese el numero "<<i + 1<<": ";
		cin>>arreglo[i]; 
	}
}

// 2. Funcion para imprimir el arreglo

void imprimirArreglo(int* arreglo, int n){
	cout<<"\n\tsArreglo: ";
	for(int i=0; i<n; i++){
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
}

// 3. Funcion para imprimir las direcciones de memoria de los valores del arreglo

void imprimirDirecciones(int* arreglo, int n){
	cout<<"\n\t3. Funcion que imprima la direccion en memoria de cada uno de los valores del arreglo"<<endl;
	cout<<"\nDirecciones en memoria de los elementos del arreglo: "<<endl;
	for(int i=0; i<n; i++){
			cout<<"arreglo["<< i <<"] -> "<<&arreglo[i]<<endl;
		}
}

// 4. Funcion que incrementa en 1 cada valor del arreglo mediante apuntadores"

void incrementarValores(int* arreglo, int n){
	for(int i=0; i<n; i++){
		*(arreglo + i) += 1; // Incrementar el valor apuntado por el puntero 
	}
}
		
int main(){
	int n;
	
	// solicitar la cantidad de numeros
	cout<<"\t1. Funcion para solicitar n numeros y almacenarlos en un arreglo"<<endl;  
	cout<<"\nIngrese la cantidad de numeros: "; cin>>n;
	
	//crear el arreglo dinamicamente 
	int* arreglo = new int[n];
	
	// Llamar a las funciones 
	solicitarNumeros(arreglo, n);
	imprimirArreglo(arreglo, n);
	imprimirDirecciones(arreglo, n);
	
	cout<<"\n\t4. Funcion que incrementa en 1 cada valor del arreglo mediante apuntadores"<<endl;
	cout<<"\nIncrementando valores en 1..."<<endl;
	incrementarValores(arreglo, n);
	imprimirArreglo(arreglo, n);
	
	//liberar la memoria asignada dinamicamente 
	delete[] arreglo;

	return 0;
}