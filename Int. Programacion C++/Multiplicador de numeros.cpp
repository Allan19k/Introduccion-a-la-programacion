/* Multiplicador de numeros 
   Int. a la programacion 
   Allan Hall Solorio 358909
*/
#include <iostream>
using namespace std;

int main(){
	int num1, num2, resultado;
	char reiniciar = 's'; // variable char en donde si el usuario ingresa la s, le vuelven a pedir los numeros
	
	while(reiniciar=='s'){
		cout<<"\tMultiplicador de numeros"<<endl;
		cout<<"\nIngresa un numero entre el 10 y el 20: "; cin>>num1;
		cout<<"\nIngresa otro numero entre el 10 y el 20: "; cin>>num2;
		
		while(num1<10 || num1>20 || num2<10 || num2>20){ // mientras los numeros esten fuera del rango, 
			cout<<"\nError: los numeros estan fuera del rango, ingreselos nuevamente"; // el programa le va a pedir al usuario que los ingrese correctamente
			cout<<"\nIngresa un numero entre el 10 y el 20: "; cin>>num1;
		    cout<<"\nIngresa otro numero entre el 10 y el 20: "; cin>>num2;
		}
		resultado= num1 * num2; 
		cout<<num1<<" * "<<num2<<" es: "<<resultado<<endl; 
		cout<<"\nDeseas continuar?"<<endl;
		cout<<"\nEscribe 's' si quieres volver a jugar o 'n' para salir del juego: "; cin>>reiniciar; // preguntarle al usuario si quiere seguir jugando
		
		while(reiniciar != 's' && reiniciar != 'n'){ // arrojar un error en caso de que ingrese algo diferente de n o s 
		     cout<<"\nError: escribe solomante 's' o 'n' "<<endl; 
		     cout<<"\n's' si quieres volver a jugar o 'n' para salir del juego: "; cin>>reiniciar;
		}
		
	}
	cout<<"\nEspero que te hayas divertido, que tengas un bonito dia";
	return 0;
}