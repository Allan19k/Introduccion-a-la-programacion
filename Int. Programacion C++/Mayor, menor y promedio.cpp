/* Mayor, menor y promedio
   Int. a la programacion
   Allan Hall Solorio 358909
*/
#include <iostream>
using namespace std;

int main(){
	int n, numeros, min,max;
	double suma=0;
	cout<<"\tMayor, menor y el promedio de n numeros";
	cout<<"\nIngresa la 'n' cantidad de numeros que quieras ingresar: "; cin>>n;
	
	cout<<"Numero 1: "; cin>>numeros; // le pedimos el primer numero 
	min=max=numeros; // y lo tomamos como referencia inicial para min y max
	suma=numeros; // ademas lo guardamos en la variable suma
	
	for(int i=2; i<=n; i++){ // luego ya le pedimos los demas con el bucle empezando desde el 2 hasta n
	cout<<"Numero "<<i<<": "; cin>>numeros; 
		suma+=numeros; // obtener la sumatoria para despues sacar el promedio
		if(numeros>max){ // condicional dentro del bucle para guardar el max 
			max=numeros;
		}
		if(numeros<min){ // condicional dentro del bucle para guardar el minimo
			min=numeros;
		}
	}
	cout<<"\nMayor: "<<max<<endl;
	cout<<"\nMenor:"<<min<<endl;
	cout<<"\nPromedio: "<<(suma/n)<<endl;
	
	return 0;
}