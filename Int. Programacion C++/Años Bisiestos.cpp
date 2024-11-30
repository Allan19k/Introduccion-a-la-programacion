/*
  Identificador de anios bisiestos 
  Int. a la programacion
  Allan Hall Solorio 358909
*/
#include<iostream>
using namespace std;

int main(){
	int anio;
	
	cout<<"\tAnios Bisiestos";
	cout<<"\nIngresa un anio valido, para calcular si es bisiesto o no: "; cin>>anio;
	
	if((anio%4==0)&&(anio %100 !=0)||(anio%400==0)){ // un if con 2 condiciones para verificar que sea bisiesto 
		cout<<anio<<" es anio bisiesto!!"<<endl;     // && significa que se deben cumplir ambas cosas; que sea multiplo de 4 y no de 100
	}else{                                           // || significa que puede cumplirse cualquiera de las 2 condiciones 
		cout<<anio<< " no es anio bisiesto"<<endl;   // si no se cumple ninguna de las 2, directamenta pasa al else 
	}
}
