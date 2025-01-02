/*
    Estructuras
    Int. a la programacion
    Allan Hall Solorio 358909
*/

#include <iostream>
using namespace std;

int main(){
	
	struct Direccion{
	char calle[20];
	int numero;
	char colonia[20];
	char ciudad [30];
}; 

struct Fecha{
	int dia;
	int mes;
	int anio;	
};

struct Hora{
	int hora;
	int minuto;
	int segundo;
};

struct Cliente{
	char nombre[20];
	char apellido_materno[20];
	char apellido_paterno[20];
};

struct Factura{
	struct Direccion direccion; // una direccion completa 
	struct Cliente cliente; // informacion del cliente
	struct Fecha fecha; // fecha de dicha factura 
	struct Hora hora; // hora 
	int numero_factura; // numero unico de factura 
};
	return 0;
}

