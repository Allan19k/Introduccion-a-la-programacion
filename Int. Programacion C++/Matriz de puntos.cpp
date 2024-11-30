/* Int. a la programacion 
   Matriz de Puntos
   Allan Hall Solorio 358909
*/


#include<iostream>
using namespace std;

int main(){
	cout<<"\nMatriz de Puntos"<<endl;
	char arreglo_bidi[10][10]; // declaramos el arreglo tipo bidimensional de 10x10
	
	// los primeros 2 bucles inicializan la matriz 
	for(int i=0; i<10; i++){  // este bucle  exterior recorre las filas
		for(int j=0; j<10; j++){ // este bucle interior recorre las columnas
			arreglo_bidi[i][j]= '.'; // llenar la matriz con el caracter .
		}
	}
	for(int i=0; i<10; i++){ // y estos 2 son para imprimir dicha matriz
		for(int j=0; j<10; j++){
			cout<<arreglo_bidi[i][j];
		}
		cout<<"\n"; // para dar salto de linea 
	}
	return 0; 
}