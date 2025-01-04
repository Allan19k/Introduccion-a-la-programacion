/*
    Operaciones sobre Estructuras
    Int. a la programacion
    Allan Hall Solorio 358909
*/
#include <iostream>
using namespace std;

// declaracion de Estructuras 

struct Direccion{
  char calle[30];
  int numero;
  char colonia[30];
  char ciudad[30];
};

struct Fecha{
  int dia;
  int mes;
  int anio;
};

struct Hora{
  int horas;
  int minutos;
  int segundos;
};

struct Cliente{
  char nombre[30];
  char apellido_materno[30];
  char apellido_paterno[30];
};

struct Factura{
  struct Direccion direccion;
  struct Cliente cliente;
  struct Fecha fecha;
  struct Hora hora;
  int numero_factura;
};

Factura facturas[10]; // arreglo para almacenar las facturas (max 10 facturas)
int numero_de_facturas=0; // contador para llevar el registro del num actual de facturas

//declaracion de las funciones que vamos a usar
void bienvenida();
Factura capturar_factura();
Factura editar_factura(Factura factura);
void imprimir_factura(Factura factura);
void imprimir_listado_facturas();
void eliminar_factura(int n);
void imprimir_menu();

int main(){
	int opc, n; 
	Factura factura; 
	
	bienvenida();
	
	do{
		imprimir_menu();
		cout<<"Seleccione una opcion: "; 
		cin>>opc;
		
		switch(opc){
			case 1: // capturar factura 
				factura = capturar_factura();
				facturas[numero_de_facturas]= factura;
				numero_de_facturas++; 
				cout<<"\nFactura agregada exitosamente"<<endl;
				break;
			case 2: // editar factura 
				imprimir_listado_facturas();
				cout<<"Seleccione la factura a editar: ";
				cin>>n;
				
				if(n>=0 && n<numero_de_facturas){
					facturas[n]= editar_factura(facturas[n]);
				}else{
					cout<<"\nFactura invalida"<<endl;
				}
				break;
			case 3: // eliminar factura 
				imprimir_listado_facturas();
				cout<<"Seleccione la factura que desee eliminar: ";
				cin>>n;
				
				eliminar_factura(n);
				break;
			case 4: // Mostrar listado de facturas
				imprimir_listado_facturas();
				break;
			case 5: // Mostrar una factura 
				imprimir_listado_facturas();
				cout<<"Seleccione la factura a mostrar: ";
				cin>>n;
				
				if(n>=0 && n<numero_de_facturas){
					imprimir_factura(facturas[n]);
				}else{
					cout<<"\nFactura invalida"<<endl;
				}
				break;
			case 6: // Despedida
				cout<<"\nGracias por utilizar Solorio Facturas. Que tenga un excelente dia :)"<<endl;
				break;
			default: 
				cout<<"\nOpcion invalida"<<endl;
		}
	}while (opc !=6);
	return 0;
}

void bienvenida(){
	cout << "*****************************************\n";
    cout << "\tBienvenido a Solorio Facturas \n";
    cout << "*****************************************\n";
}

Factura capturar_factura(){
	Factura factura;
	cout<<"Ingrese los datos de la factura"<<endl;
	cout<<"Calle: "; 
	cin.ignore();
	cin.getline(factura.direccion.calle,30);
	cout<<"Numero: "; 
	cin>>factura.direccion.numero;
	cout<<"Colonia: "; 
	cin.ignore();
	cin.getline(factura.direccion.colonia,30);
	cout<<"Ciudad: "; 
	cin.getline(factura.direccion.ciudad,30);
	cout<<"Nombre del cliente: ";
    cin.getline(factura.cliente.nombre, 30);
    cout<<"Apellido paterno: ";
    cin.getline(factura.cliente.apellido_paterno, 30);
    cout<<"Apellido materno: ";
    cin.getline(factura.cliente.apellido_materno, 30);
    cout<<"Numero de factura: ";
    cin>>factura.numero_factura;
    cout<<"Fecha (dd-mm-yyyy): ";
    cin>>factura.fecha.dia>>factura.fecha.mes>>factura.fecha.anio;
    cout<<"Hora (hh-mm-ss): ";
    cin>>factura.hora.horas>>factura.hora.minutos>>factura.hora.segundos;
    return factura;
}

Factura editar_factura(Factura factura) {
    cout<<"Editar datos de la factura:"<<endl;
    cout<<"Calle: ";
    cin.ignore();
    cin.getline(factura.direccion.calle, 30);
    cout<<"Numero: ";
    cin>>factura.direccion.numero;
    cout<<"Colonia: ";
    cin.ignore();
    cin.getline(factura.direccion.colonia, 30);
    cout<<"Ciudad: ";
    cin.getline(factura.direccion.ciudad, 30);
    cout<<"Nombre del cliente: ";
    cin.getline(factura.cliente.nombre, 30);
    cout<<"Apellido paterno: ";
    cin.getline(factura.cliente.apellido_paterno, 30);
    cout<<"Apellido materno: ";
    cin.getline(factura.cliente.apellido_materno, 30);
    cout<<"Numero de factura: ";
    cin>>factura.numero_factura;
    cout<<"Fecha (dd-mm-yyyy): ";
    cin>>factura.fecha.dia>>factura.fecha.mes>>factura.fecha.anio;
    cout<<"Hora (hh-mm-ss): ";
    cin>>factura.hora.horas>>factura.hora.minutos>>factura.hora.segundos;
    return factura;
}

void eliminar_factura(int n){
	if (n>=0 && n<numero_de_facturas){
		for(int i=n; i<numero_de_facturas-1; i++){
			facturas[i]= facturas[i+1];
		}
		numero_de_facturas--;
		cout<<"Factura eliminada correctamente"<<endl;
	}else{
		cout<<"Factura invalida"<<endl;
	}
}

void imprimir_factura(Factura factura){
	cout<<"Datos de la factura:"<<endl;
    cout<<"Calle: "<< factura.direccion.calle<<"\n";
    cout<<"Numero: "<<factura.direccion.numero<<"\n";
    cout<< "Colonia: "<<factura.direccion.colonia<<"\n";
    cout<< "Ciudad: "<< factura.direccion.ciudad<< "\n";
    cout<< "Cliente: "<< factura.cliente.nombre<< " "<< factura.cliente.apellido_paterno << " "<< factura.cliente.apellido_materno << "\n";
    cout<<"Numero de factura: "<< factura.numero_factura<< "\n";
    cout<<"Fecha: "<<factura.fecha.dia<<"/"<<factura.fecha.mes<<"/"<< factura.fecha.anio<<"\n";
    cout<<"Hora: "<<factura.hora.horas<<":"<<factura.hora.minutos<<":"<<factura.hora.segundos<<"\n";
}

void imprimir_listado_facturas(){
	cout<<"Listado de facturas"<<endl;
	for(int i=0; i<numero_de_facturas; i++){
		cout <<"["<<i<< "] Numero de factura: "<<facturas[i].numero_factura<<endl;
	}
}

void imprimir_menu() {
    cout << "\n\tMenu principal:\n";
    cout << "1. Capturar nueva factura\n";
    cout << "2. Editar factura\n";
    cout << "3. Eliminar factura\n";
    cout << "4. Mostrar listado de facturas\n";
    cout << "5. Mostrar factura en particular\n";
    cout << "6. Salir\n";
}