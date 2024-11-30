/*
       Vocales
  Int. a la programacion
  Allan Hall Solorio 358909
*/
#include<iostream>
using namespace std;

int main(){
	char vocal; // variable de tipo char que almaneca un solo caracter
	cout<<"\tIngresa una vocal en Minuscula: "; cin>>vocal;
	
	switch(vocal){ // switch con las 5 opciones (a,e,i,o,u)
	    case 'a':  // se utilizan comillas simples para cada case, porque es un caracter
	     cout<<"A"; 
	     break;
	    
	    case 'e':
	     cout<<"E";
	     break;
	    
	    case 'i':
	     cout<<"I";
	     break;
	    
	    case 'o':
	     cout<<"O";
	     break;
	    
	    case 'u':
	     cout<<"U";
	     break;
	    
	    default: // en caso de que ingrese una vocal en mayuscula, o no ingrese una como tal
	     cout<<"Error, la letra no es una vocal minuscula";
	     break;  
	}
	return 0;
}