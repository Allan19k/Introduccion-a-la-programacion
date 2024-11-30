/* Piramide de puntos
   Int. a la programacion 
   Allan Hall Solorio 358909
*/


#include<iostream>
using namespace std;

int main(){
	int renglon;
	cout<<"\tPiramide de Puntos"<<endl;
	cout<<"Ingresa la cantidad de renglones: "; cin>>renglon;
	
	// verificar si el numero de renglones es par o impar
	if(renglon%2 == 0){ // caso par
		renglon /=2;  
		// dibuja la parte superior del patron 
		for(int i=0; i<=renglon; i++){
			for(int j=0; j<i; j++){ // imprime "i" puntos 
				cout<<".";
			}
			cout<<endl;
		}
		// dibuja la mitad inferior del patron 
		for(int i=renglon; i>=0; i--){
			for(int j=0; j<i; j++){ // imprime "i" puntos
				cout<<".";
			}
			cout<<endl;
		}
	}else{ // caso impar
		renglon/=2;
		//dibuja la parte superior del patron 
		for(int i=0; i<=renglon; i++){
			for(int j=0; j<i; j++){ // imprime "i" puntos
				cout<<".";
			}
			cout<<endl;
		}
		// dibuja la linea central (la mas larga)
		for(int i=0; i<=renglon; i++){
			cout<<".";
		}
		cout<<endl;

        // Dibuja la mitad inferior del patron
        for (int i=renglon; i>= 0; i--) {
            for (int j= 0; j<i; j++) { // Imprime "i" puntos
                cout << ".";
            }
            cout << "\n";
	}
}
	return 0;
}