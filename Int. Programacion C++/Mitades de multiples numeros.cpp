/*
  Mitades de multiples numeros
  Int. a la programacion 
  Allan Hall Solorio 358909
*/
#include <iostream>
using namespace std;

int main(){
	int numero, contador=0; // variable para almacenar el numero que se ingrese y otra para contar la cantidad de numeros ingresados
	float mitad; // variable para almacenar el resultado de sacarle la mitad al numero
	
	cout<<"\nIngrese un numero: "; cin>>numero;
	
	while(numero!=0){ // bucle while que garantize que se ejecute lo que nosotros queramos simpre que se cumpla la condicion
		mitad= numero/2.0; 

		cout<<"\nLa mitad de "<<numero<<" es: "<<mitad<<endl;
		contador++; // cada que ingresa un numero, el contador aumenta para tener registro de los numeros ingresados
		
		cout<<"\nIngrese un numero: "<<endl; cin>>numero; // para que el usuario ingrese otro numero, por que si no se cicla
	}
	cout<<"\nUsted solicito "<<contador<<" numero(s). Gracias por su tiempo."; // si no se cumple pasa directamente a esta instruccion
	return 0;
}
