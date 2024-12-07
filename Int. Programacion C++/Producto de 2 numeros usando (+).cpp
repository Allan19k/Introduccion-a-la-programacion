/*
    Producto de 2 numeros usando el operador +
    Int. a la programacion
    Allan Hall Solorio 358909
*/
#include <iostream>
using namespace std;

// funcion recursiva para calcular x * y usando el +
int producto(int x, int y){
	if(y==0){
		return 0; // Caso base: Cualquier numero multiplicado por 0 da 0
	}else if(y>0){
		return x + producto(x, y-1); // suma "x" y reduce "y" 
	}else{
		return -producto(x, -y); // si "y" es negativo, lo convierte en positivo y cambia el signo
	}
}

int main(){
	int x,y;
	
	cout<<"\tMultiplicacion de 2 numeros usando el operador (+) "<<endl;
	cout<<"\t\t2*5 -> 2+2+2+2+2";
	cout<<"\nIngresa el primer numero: "; cin>>x;
	cout<<"Ingresa el segundo numero: "; cin>>y;
	
	// mostrar el resultado
	int resultado = producto(x,y);
	cout<<"\nx = "<< x <<"\ny = "<< y << "\n";
	
	return 0;
}

