/*
    Factorial
    Int. a la programacion
    Allan Hall Solorio 358909
*/

#include <iostream>
using namespace std;

int main(){
	int numero, factorial= 1; // se inicializa en 1 porque el factorial de 0 es 1 y es el valor neutro para la multiplicacion
	
	cout<<"Digite un numero entero para obtener el factorial: "; cin>>numero;
	
	if(numero<0){
		cout<<"\nError: El factorial no esta definido para numeros negativos"; 
	}else{
		for(int i=1; i<=numero; i++){
			factorial *= i; // factorial = factorial * i
		}
		cout<<"\n"<<numero<<"! es: "<<factorial<<endl;
	}
		
		
	return 0; 
}

