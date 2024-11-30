/*
   Meses del anio
 Int. a la programacion 
 Allan Hall Solorio 358909
*/
#include <iostream>
using namespace std;

int main(){
	int opc;
	
	cout<<"Ingresa un numero para saber a que mes corresponde: "; cin>>opc;
		switch(opc){ // switch con todos los 12 casos (meses) e imprime el mes que corresponde 
			case 1: 
			 cout<<"\nEnero";
			 break;
			
			case 2: 
			 cout<<"\nFebrero";
			 break;
			
			case 3: 
			 cout<<"\nMarzo";
			 break;
			
			case 4: 
			 cout<<"\nAbril";
			 break;
			
			case 5: 
			 cout<<"\nMayo";
			 break;
			
			case 6: 
			 cout<<"\nJunio";
			 break;
			
			case 7: 
			 cout<<"\nJulio";
			 break;
			
			case 8: 
			 cout<<"\nAgosto";
			 break;
			
			case 9: 
			 cout<<"\nSeptiembre";
			 break;
			
			case 10: 
			 cout<<"\nOctubre";
			 break;
			
			case 11: 
			 cout<<"\nNoviembre";
			 break;
			
			case 12: 
			 cout<<"\nDiciembre";
			 break;
			
			default: // en caso de que ingrese un numero que no sea ninguno de los cases
			 cout<<"Error, ingrese un numero valido"; 
			 break; 
		}
	return 0;
}