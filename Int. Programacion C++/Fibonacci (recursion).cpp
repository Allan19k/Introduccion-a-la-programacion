/*
    Serie de Fibonacci (usando recursion)
    Int. a la programacion
    Allan Hall Solorio 358909
*/
#include <iostream>
using namespace std;

// Funcion recursiva para calcular el n-esimo termino de Fibonacci
int fibonacci(int n){
	if(n==0){
		return 0;
	}else if (n==1){
		return 1;
	}else{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main(){
	int numero;
	
	cout<<"Ingresa un numero para calcular la serie de Fibonacci: "; cin>>numero;
	
	// Validar que el numero sea positivo 
	if(numero<=0){
		cout<<"\nError: El numero debe ser mayor a 0"<<endl;
	}else{
		cout<<"\nLa serie de Fibonacci es: ";
		
	// Mostrar la serie de Fibonacci
	for(int i=0; i<numero; i++){
		cout<<fibonacci(i)<<" ";
	}
	cout<<endl;
	}
		return 0;
}