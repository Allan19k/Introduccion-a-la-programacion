/*
   Validador de Horas 
   Int. a la programacion 
   Allan Hall Solorio 358909
*/
#include <iostream>
using namespace std;

int main(){
	int hora, minuto, segundo;
	cout<<"\tValidador de la Hora"<<endl; // para que la hora sea valida se debe cumplir lo siguiente:
	cout<<"Ingresa la hora: "; cin>>hora; // 1º que la hora sea mayor/igual a 0 y menor a 23 
	cout<<"Ingresa el minuto: "; cin>>minuto; // 2º que los minutos sean mayor o igual a 0 pero menor o igual a 59 
	cout<<"Ingresa el segundo: "; cin>>segundo; // 3º que los segundos sean mayor o igual a 0 pero menor o igual a 59 

	if((hora>=0 && hora<=23) && (minuto>=0 && minuto<=59) && (segundo>=0 && segundo<=59)){  // se deben cumplir si o si los 3 condicionales por eso los && despues 
		cout<<"\n";                                                                         // de cada condicion 
		cout<<hora<<":"<<minuto<<":"<<segundo<<" es una hora valida";
	}else{
		cout<<"\nNo es valida la hora ingresada";
	}
	return 0;
}