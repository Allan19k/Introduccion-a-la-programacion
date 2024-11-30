/* Matriz del alfabeto
   Int. a la programacion 
   Allan Hall Solorio 358909
   
   Este programa crea una matriz triangular inversa del alfabeto.
   Comienza con todas las letras de la 'Z' a la 'A' en la primera fila,
   y cada fila siguiente tiene una letra menos, terminando con solo 'Z'.
*/


#include<iostream>
using namespace std;

int main(){
	cout<<"\nMatriz del Alfabeto"<<endl; // primero declaramos todas las letras de la A a la Z en ese orden 
	char alfabeto[]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}; 
	
	for(int i=0; i<26; i++){ // bucle exterior: Controla el numeros de filas (26)
	    // bucle interior: imprime las letras en cada fila
		for(int j=25; j>=i; j--){ // comienza desde Z (indice 25) y retrocede hasta la posicion i 
		cout<<alfabeto[j]<<" "; // imprime la letra
	}
		cout<<endl; // salto de linea 
	}
	return 0; 
}