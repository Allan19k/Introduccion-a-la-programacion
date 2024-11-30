/*
  Burritos con descuento
  Int. a la programacion
  Allan Hall Solorio 358909
*/
#include <iostream>
using namespace std;

int main(){
	// Aqui declaramos los precios de cada tipo de burrito que tengamos
	float rojo = 5.5;
	float verde = 10;
	float chicharron = 10.5;
	float picadillo= 8.5;
	int opc=0; 

    // estas variables son para almacenar la cantidad de burritos que el usuario ingrese y el precio total de cada tipo de burrito 
    float contar_rojos, contar_verdes, contar_chicharron, contar_picadillo, ptotal_rojo, ptotal_verde, ptotal_chicharron, ptotal_picadillo;
    
    //"Menu para mostrar los precios y pedirle al usuario de cuales quiere" 
    cout<<"\tHall's Burriteria \n";
	cout<<"Rojo $5.50\n";
	cout<<"Verde $10\n";
    cout<<"Chicharron $10.50\n";
    cout<<"Picadillo $8.50\n";
    cout<<"\n";
    cout<<"Si compras de 10 a 19 burritos te haremos un 5% de descuento\n";
    cout<<"A partir de los 20 burritos seria el 10%\n";
    cout<<"\nIngresa la cantidad de cada burrito que desees\n";
    cout<<"\nRojo: "; cin>>contar_rojos; 
    cout<<"\nVerde: "; cin>>contar_verdes;
    cout<<"\nChicharron: "; cin>>contar_chicharron;
    cout<<"\nPicadillo: "; cin>>contar_picadillo;
    
    // Multiplicamos la cantidad que el usuario inserto por el precio unitario de cada burrito
    ptotal_rojo = contar_rojos * rojo;
    ptotal_verde= contar_verdes * verde;
    ptotal_chicharron= contar_chicharron * chicharron;
    ptotal_picadillo= contar_picadillo * picadillo;
    
    // Confirmarle la cantidad que ingreso
    cout<<"\n";
    cout<<"Son "<<contar_rojos<<" de rojo\n";
    cout<<"Son "<<contar_verdes<<" de verde\n";
    cout<<"Son "<<contar_chicharron<<" de chicharron\n";
    cout<<"Son "<<contar_picadillo<<" de picadillo\n";
    
    // Calcular la cantidad y el precio total de todos los burritos
    int suma_burritos= contar_rojos + contar_verdes + contar_chicharron + contar_picadillo;
    float total_burritos= ptotal_rojo + ptotal_verde + ptotal_chicharron + ptotal_picadillo;
    float total_con_descuento; // en caso de que se la haga descuento
    
    // Condicionales para en caso de que pidiera de 10 a 19 burritos, y mas de 20 hacerle descuento
    if(suma_burritos>10 && suma_burritos<20){
    	total_con_descuento = total_burritos - (total_burritos * 0.05);
    	cout<<"\tCon el 5% de descuento serian: $"<<total_con_descuento; 
	}else if(suma_burritos>20){
		total_con_descuento = total_burritos - (total_burritos * 0.10);
		cout<<"\tCon el 10% de descuento serian: $"<<total_con_descuento;
	}else{ // si compra menos de 11
		cout<<"\tEntonces serian : $"<<total_burritos<<endl; 
	}
	
	// Extra: Pedirle al usuario redondear para una causa
	int total_redondeado; 
	cout<<"\n Gusta redondear? \nSi: 1 No: Presione cualquier otra tecla: "; cin>>opc; 
	 if (opc == 1) {
        if (suma_burritos > 10 && suma_burritos < 20) {
            total_redondeado = static_cast<int>(total_con_descuento);
            cout << "Entonces serian: $" << total_redondeado << endl;
        } else if (suma_burritos > 20) {
            total_redondeado = static_cast<int>(total_con_descuento);
            cout << "Entonces serian: $" << total_redondeado << endl;
        } else {
            total_redondeado = static_cast<int>(total_burritos);
            cout << "Entonces serian: $" << total_redondeado << endl;
        }
    }
    cout<<"Muchas gracias por su compra, que tenga un excelente dia";
	return 0;
}


