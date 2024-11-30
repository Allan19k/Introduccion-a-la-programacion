/*
  Ejercio 6 en 1
  Int. a la programacion
  Allan Hall Solorio 358909
*/
#include <iostream>
using namespace std;

int main() {
	int numeros=0, par=0, contadorPares=0, contadorImpares=0, num1, num2, num_tabla, contadorTotal=0;
	cout<<"\n1. Imprimir los numeros del 0 al 100"<<endl;
	while(numeros<101) { // 101, por que si no, no se imprime el 100
		cout<<numeros<<",";
		numeros++;
	}
	cout<<endl;

	cout<<"\n2. Imprimir todos los numeros pares que hay entre el 0 y el 100"<<endl;
	numeros=0; // reinciamos el valor de numeros a 0
	while(numeros<101) {
		if(numeros%2==0) { // condicional para saber si es par
			cout<<numeros<<",";
			contadorPares++;
		}
		numeros++;
	}
	cout<<endl;

	cout<<"\n3. Entre el 0 y el 100 hay: "<<contadorPares<<" numeros pares"<<endl;
	cout<<endl;

	cout<<"\n4. Imprimir todos los numeros impares que hay entre el 0 y el 100"<<endl;
	numeros=0; // reiniciarlo
	while(numeros<101) {
		if(numeros%2!=0) { // condicional para saber si es impar
			cout<<numeros<<",";
			contadorImpares++;
		}
		numeros++;
	}
	cout<<endl;

	cout<<"\n5. Entre el 0 y el 100 hay: "<<contadorImpares<<" numeros impares"<<endl;
	cout<<endl;

	cout<<"\n6. Solicitar 2 numeros y que diga cuantos numeros hay entre ese rango y ademas que los muestre"<<endl;
	cout<<endl;
	cout<<"Ingresa el primer numero del rango: ";
	cin>>num1;
	cout<<"Ingresa el segundo numero del rango: ";
	cin>>num2;
	if(num1>num2) {
		cout<<"\nRango Invalido: El primer numero debe ser menor que el segundo"<<endl;
	} else {
		cout<<"\nNumeros que hay en dicho rango ["<<num1<<","<<num2<<"]: ";

		// Bucle while que recorre los numeros de dicho rango, los imprime y cuenta la cantidad total
		int i=num1;
		while(i<=num2) {
			cout<<i<<" ";
			contadorTotal++;
			i++;
		}
		cout<<"\nCantidad total de numeros en el rango: "<<contadorTotal<<endl;
	}
	cout<<"\n7. Solicitar otro numero e imprimir su tabla de multiplicar"<<endl;
	cout<<"\nIngresa el numero del que deseas la tabla de multiplicar: "<<endl;
	cin>>num_tabla;
	int j=1;
	while(j<=10) {
		cout<<num_tabla<<"* "<<j<<" = "<<num_tabla*j<<endl;
		j++;
	}
	return 0;
}