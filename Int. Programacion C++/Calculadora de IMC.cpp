/* Indice de masa corporal (IMC)
   Int. a la programacion
   Allan Hall Solorio 358909
*/
#include <iostream>
#include <math.h> // libreria para utilizar la funcion pow para elevar la altura al cuadrado
using namespace std;

int main(){
	float altura, peso, IMC; 
	int c1=0,c2=0,c3=0,c4=0,c5=0; //contadores para calcular la cantidad de personas de cada rango del IMC (Infrapeso,normal,sobrepero,obesidad y obesidad morbida)
	char reiniciar= 's';
	
	do{
		cout<<"\tCalculadora de IMC"<<endl;
		cout<<"\nIngrese los siguientes datos:"<<endl;
		cout<<"\nPeso en kg: "; cin>>peso;
		cout<<"\nAltura en metros: "; cin>>altura;
		
		while(peso<=0 || altura<=0){
			cout<<"\nError: Datos invalidos, favor de volver a ingresarlos"<<endl;
			cout<<"\nPeso en kg: "; cin>>peso;
		    cout<<"\nEstatura en metros: "; cin>>altura;
		}
		IMC= (peso)/(pow(altura, 2.0)); // formula para calcular el IMC: peso (kg) divido entre la altura (m) * altura (m) o elevada al cuadrado
		
		// escalera if else de condicionales para poder clasificar a cada persona segun su IMC 
		if(IMC<20){ // si el IMC es menor a 20 se clasifica como Infrapeso 
			cout<<"\nPeligro, estas por debajo de tu peso adecuado";
			c1++;
		}else if(IMC>=20 && IMC<=25){ // de 20 a 25 es normal 
			cout<<"\nEstas en tu peso normal";
			c2++;
		}else if(IMC>25 && IMC<30){ // 25 a 29 es sobrepeso
			cout<<"\nAlerta, tiene usted sobrepeso";
			c3++;
		}else if(IMC>=30 && IMC<35){ // 30 a 34 obesidad
			cout<<"\nTiene Obesidad, estas en riesgo de tener obesidad morbida";
			c4++;
		}else if(IMC>=35){ // 35 o mas Obesidad Morbida
			cout<<"Alerta, tiene obesidad morbida, su vida esta en riesgo";
			c5++;
		}
		
		cout<<"\nDesea calcular otro IMC. \nPresione s para volver a ingresar o cualquier otra tecla para salir: "; cin>>reiniciar; 
}while(reiniciar=='s');

cout<<"\nHubieron "<<c1<<" personas con infrapeso.";
cout<<"\nHubieron "<<c2<<" personas con peso normal.";
cout<<"\nHubieron "<<c3<<" personas con sobrepeso.";
cout<<"\nHubieron "<<c4<<" personas con obesidad.";
cout<<"\nHubieron "<<c5<<" personas con obesidad morbida.";

	
	return 0;
}
