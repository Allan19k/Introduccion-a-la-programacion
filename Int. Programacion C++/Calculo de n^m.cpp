/*
    Calculo de potencia 
    Int. a la programacion
    Allan Hall Solorio 358909
*/
#include <iostream>
using namespace std;

// funcion recursiva para calcular n^m
double potencia(int x, int y){ // funcion de tipo "double" para trabajar con decimales  
	if(y==0){
		return 1; // Caso base: cualquier numero elevado a 0 es 1 
	}else if(y>0){
		return x * potencia(x, y-1); // paso recursivo: n * n^(m-1) 
	}else{
		return 1.0/ potencia(x, -y); // manejo de potencias negativas (n^(-m) = 1 / n^m).
	}
}
int main(){
	int x,y;
	
	cout<<"\tCalculo de Potencias (n^m)"<<endl;
	cout<<"Ingresa un numero: "; cin>>x;
	cout<<"Ahora, ingresa la potencia a la que la quieras elevar: "; cin>>y;
	// manejo de 0^0 
	if(x==0 && y==0){
		cout<<"\n0^0 no esta definido matematicamente"<<endl;
	}else{
		//calcular el resultado
		double resultado = potencia(x,y);
		// mostrarlo 
		cout<<"\nx = "<< x <<"\ny = "<< y << "\n";
		cout<<"\nEl "<< x <<" elevado a la potencia "<<y << " es igual a: "<<resultado<<endl;
	}
	return 0;
}