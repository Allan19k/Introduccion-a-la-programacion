/*
  Numeros pares e impares
  Int. a la programacion
  Allan Hall Solorio 358909
*/
#include <iostream>
using namespace std;

int main(){
	int num;
	
	cout<<"\tPar o Impar"<<endl;
	cout<<"Ingrese un numero cualquiera: "; cin>>num;
	
	float num_a_float = num % 2; // guardarlo en una variable de tipo float
	                             // num % 2, saca el residuo de dividir  num entre 2 
    if(num_a_float==0){           // si dicho residuo es 0
    	cout<<"El "<<num<<" es Par"; // entonces se hace lo siguiente
	}else{
		 cout<<"El "<<num<<" es Impar"; // si no se cumple la condicion entonces hace esto 
	}
	    
	
	                
	
	return 0;
}