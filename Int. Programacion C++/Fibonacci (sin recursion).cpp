/*
    Serie de Fibonacci (sin recursion)
    Int. a la programacion
    Allan Hall Solorio 358909
*/
#include <iostream>
using namespace std;

int main(){
	int numero;
	
	cout<<"Ingresa un numero para calcular la serie de Fibonacci: "; cin>>numero;
	
	// Validar que el numero sea positivo 
	if(numero<=0){
		cout<<"\nError: El numero debe ser mayor a 0"<<endl;
	}else{
		cout<<"\nLa serie de Fibonacci es: ";
		
		// variables para los primeros 2 terminos
		int a=0, b=1;
	
	   // imprimir los primeros terminos si es necesario
		if(numero>=1) cout<<a<<" "; // No se usan llaves {} porque solo hay una instruccion en cada bloque if.
		if(numero>=2) cout<<b<<" ";
	
	  // bucle para calcular la serie de Fibonacci
		for(int i=3; i<=numero; i++){ // empieza en 3, por que ya tenemos los primeros 2 terminos
			int siguiente= a+b; 
			cout<<siguiente<<" ";
			a=b; //actualizar a 
			b=siguiente; //actualizar b
		}
	cout<<endl;
	}
		return 0;
}