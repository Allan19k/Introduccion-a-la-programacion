/*
   Validador de Sumas (le agregue resta y multiplicacion)
   Int. a la programacion 
   Allan Hall Solorio 358909
*/
#include <iostream>
using namespace std;

int main(){
	int num1, num2, suma, resta, multi;
	cout<<"\tValidador de Operaciones Aritmeticas"<<endl;
	cout<<"Ingresa el primer numero: "; cin>>num1;
	cout<<"Ingresa el segundo numero: "; cin>>num2;

	cout<<"\nCual es la Suma de esos 2 numeros?: "; cin>>suma;
	cout<<"La Resta? (del primero menos el segundo): "; cin>>resta;
	cout<<"Y que tal la multiplicacion: "; cin>>multi;
	
	// realiza las operaciones para compararlas con el resultado que ingreso el usuario
	int res_suma= num1+num2;
	int res_resta= num1-num2; 
	int res_multi= num1*num2; 
	
	if(res_suma==suma){
		cout<<"\nLa suma es correcta, bien hecho :)"; // felicita al usuario si acerto
	}else{
		cout<<"\nLo siento es incorrecto, la suma era: "<<res_suma; // si no, muestra el verdadero resultado
	}
	
	if(res_resta==resta){
	    	cout<<"\nLa resta es correcta, felicidades :)"; // felicita al usuario si acerto
	}else{
		cout<<"\nLo siento es incorrecto, la resta era: "<<res_resta; // si no, muestra el verdadero resultado
	}
	
	if(res_multi==multi){
	    	cout<<"\nLa multiplicacion es correcta, sigue asi :)"; // felicita al usuario si acerto
	}else{
		cout<<"\nLo siento es incorrecto, la multiplicacion era: "<<res_multi; // si no, muestra el verdadero resultado
	}
		

	return 0;
}