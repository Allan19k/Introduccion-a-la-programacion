/* Calculo de Potencia: 1/(2*1) + 2/(2*2) + 3/(2*3) + 4/(2*4) + ... + n/(2*n)
   Int. a la programacion
   Allan Hall Solorio 358909
*/
#include<iostream>
using namespace std; 

int main(){
	int numero;
	float serie=0;
	cout<<"\tCalculo de la serie n/(2*n)";
	cout<<"\nIngrese el numero a calcular: "; cin>>numero; 
	
	for(int i=1; i<=numero; i++){ // bucle para recorrer desde 1 hasta el numero que ingreso 
		serie+= i / (2.0*i); // serie = serie + i / (2*i) 
	}
	cout<<"El resultado de la serie es: "<<serie<<endl;
	return 0;
}