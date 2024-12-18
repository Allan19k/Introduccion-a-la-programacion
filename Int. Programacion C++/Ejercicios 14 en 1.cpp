/*
    Ejercicios 14 en 1 
    Int. a la programacion
    Allan Hall Solorio 358909
*/
#include <iostream>
#include <string> // Facilitar la concatenación de cadenas
#include <algorithm> // Para ordenar numeros ascendentemente y descendentemente
#include <cctype> // para usar la funcion isdigit
using namespace std;

// 1. Mostrar un saludo en pantalla 
void funcionSaludo(){
	cout<<"\n1. Mostrar un saludo"<<endl;
	cout<<"\tWhats up mi nombre es Allan Hall y bienvenidos a este programa en C++ :)"<<endl; 
}

// 2. Cuadrado de un numero cualquiera y mostrarlo 
int numCuadrado(int numero){
	return numero * numero; 
}

// 3. Mostrar los numeros del 1 al 100
void mostrarNumeros(){
	cout<<"\n3. Mostrar los numeros del 1 al 100"<<endl;
	cout<<endl;
	for(int i=1; i<=100; i++){
		cout<<i<<",";
	}
	cout<<endl;
}

// 4. Calcular la media de 2 numeros cualquiera
double mediaNumeros(double num1, double num2){
	return (num1 + num2)/2.0;
}

//5. Pedir algunos datos y mostrar una historia 
void crearHistoria(){
	string nombre, apellido, lugar;
	cout<<"\n5. Mostrar una historia"<<endl;
	cout<<"Ingresa un nombre(s): "; 
	getline(cin,nombre);
	cout<<"Ingresa un apellido(s): ";
	getline(cin, apellido);
	cout<<"Ingresa un lugar: "; 
	getline(cin,lugar);
	cout<<"\n\tHola mi nombre es "<<nombre<<" "<<apellido<< " y soy de "<<lugar<<"."<<endl;
}

// 6. Convertir los numeros del 1 al 10 en palabras 
void numeroEnLetra(int numero){
	cout<<"\n6. Convertir un numero del 1 al 10 a palabra"<<endl;
	string numeros[]= {"Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve", "Diez"};
	
	if(numero>=1 && numero<=10){
		cout<<"\t"<<numero<<" en letra seria: "<<numeros[numero-1]<<endl; // ya que, la posicion del arreglo es n-1, eje: numeros[0] -> Uno 
	}else{
		cout<<"Numero fuera del rango (1 al 10)"<<endl; 
	}
}

// 7.1 Convertidor de Celsius a Fahrenheit 
double celsiusAFahrenheit(double celsius){
	return (celsius *9/5)+32;
}

//7.2 Convertidor de Celsius a Kelvin
double celsiusAKelvin(double celsius){
	return celsius + 273.15; 
}
//8. Verificar si un numero es par o impar 
bool esPar(int numero){
	return numero %2 ==0; 
}

//9. Rellanar un arreglo del 1 al 20 
void rellenarArreglo(int* arreglo, int tam){
	cout<<"\n9. Rellenar un arreglo del 1 al 20"<<endl;
	for(int i=0; i<tam; i++){
		arreglo[i]= i+1;
	}
}

//10. Mostrar ese arraglo
void mostrarArreglo(int* arreglo, int tam){
	cout<<"\n10. Mostrar ese arreglo"<<endl;
	for(int i=0; i<tam; i++){
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
}

//11. Mostrar la tabla de multiplicar de un numero x 
void tablaDeMultiplicar(int numero){
	cout<<"\n11. Tabla de multiplicar"<<endl;
	for(int i=1; i<=10; i++){
		cout<<"\t"<<numero<<" x "<<i<< " = "<<numero*i<<endl;
	}
}

//12.1 Ordenar 3 numeros (ascendentemente)
void ordenAscendente(int a, int b, int c){
	cout<<"\n12.1 Ordenar 3 numeros (ascendentemente)"<<endl;
	int numeros[]= {a,b,c};
	sort(numeros,numeros+3);
	cout<<"\tNumeros en orden Ascendente: ";
	for(int i=0; i<3; i++){
		cout<<numeros[i]<<" ";
	}
	cout<<endl;
}

//12.2 Ordenar 3 numeros (descendentemente) 
void ordenDescendente(int a, int b, int c){
	cout<<"\n12.2 Ordenar 3 numeros (descendentemente)"<<endl;
	int numeros[]= {a,b,c};
	sort(numeros,numeros+3, greater<int>());
	cout<<"\tNumeros en orden Descendente: ";
	for(int i=0; i<3; i++){
		cout<<numeros[i]<<" ";
	}
	cout<<endl;
}

//13. Verificar si un caracter es un numero
bool esNumero(char caracter){
	return isdigit(caracter); // funcion isdigit es para determinar si es un caracter numerico
}

//14. Convertir un numero de entre el 0 al 999 en Romano 
string convertirARomano(int numero){
	string unidades[]= {"","I","II","III","IV","V","VI","VII","VIII","IX"};
	string decenas[]= {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
	string centenas[]= {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
	
	string resultado;
	resultado+= centenas[numero/100];
	resultado+= decenas[(numero%100)/10];
	resultado+= centenas[numero%10];
		return resultado; 	
}

int main(){
	// Aqui se invocan las funciones segun se nececite 
	funcionSaludo();
	
	cout<<"\n2. Mostrar un numero al cuadrado"<<endl;
	cout<<"\tCuadrado de 7: "<<numCuadrado(7)<<endl;
	
	mostrarNumeros();
	
	cout<<"\n4. Calcular la media de 2 numeros"<<endl;
	cout<<"\tMedia de 7 y 19: "<<mediaNumeros(7,19)<<endl;
	
	crearHistoria();
	
	numeroEnLetra(8); 
	
	cout<<"\n7.1 Convertir Celcius a Faherenheit"<<endl;
	cout<<"\t38 Celcius a Fahrenheit es: "<<celsiusAFahrenheit(38)<<"F"<<endl;
	
	cout<<"\n7.2 Convertir Celcius a Kelvin"<<endl;
	cout<<"\t38 Celcius a Kelvin es: "<<celsiusAKelvin(38)<<"K"<<endl;
	
	cout<<"\n8. Verificar si es par o impar"<<endl;
	cout<<"\tEl numero 5 es "<<(esPar(5) ? "par" : "impar")<<endl;
	
		int arreglo[20];
		rellenarArreglo(arreglo, 20);
		cout<<"\tArreglo llenado exitosamente!!"<<endl;
		
		mostrarArreglo(arreglo,20);
		
		tablaDeMultiplicar(7);
		
		ordenAscendente(19,8,3);
		
		ordenDescendente(22,7,14);
		
		cout<<"\n13. Verificar si un caracter es un numero"<<endl;
		cout<<"\tEs 'a' un numero? "<<(esNumero('a') ? "Si" : "No")<<endl;
		
		cout<<"\n14. Convertir un numero a Romano"<<endl; 
		cout<<"\t360 en numeros romanos: "<<convertirARomano(360)<<endl;
			
	return 0;
}