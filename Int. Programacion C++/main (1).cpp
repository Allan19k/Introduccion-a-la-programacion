
#include <iostream>

using namespace std;


struct Direccion{
  char calle[20];
  int numero;
  char colonia[20];
  char ciudad[20];
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
  char nombre[20];
  char apellido_materno[20];
  char apellido_paterno[20];
};

struct Factura{
  struct Direccion direccion;
  struct Cliente cliente;
  struct Fecha fecha;
  struct Hora hora;
  int numero_factura;
};

Factura capturar_factura();
void imprimir_factura(Factura factura);
void eliminar_factura(int n);
void imprimir_listado_facturas();
void imprimir_menu();
Factura editar_factura(Factura factura);
void bienvenida();


Factura facturas[10];
int numero_de_facturas = 0;
    
int main()
{
    
    int opcion;
    int n;
    Factura factura;

    bienvenida();

    do{
        imprimir_menu();
        cout << "Seleccione una opcion: ";
        cin  >> opcion;
        
        switch(opcion){
            case 1: 
                factura = capturar_factura();
                facturas[numero_de_facturas] = factura;
                numero_de_facturas++;
                
                break;
                
            case 2: 
                imprimir_listado_facturas();
                cout << "Por favor selecciona una factura a editar: ";
                cin >> n;
                factura = editar_factura(facturas[n]);
                facturas[n] = factura;
                
                break;
            case 3: 
                imprimir_listado_facturas();
                cout << "Por favor selecciona una factura a eliminar: ";
                cin >> n;
                eliminar_factura(n);
                break;
            case 4: imprimir_listado_facturas();
                break;
            case 5: 
                imprimir_listado_facturas();
                cout << "Por favor selecciona una factura para imprimir: ";
                cin >> n;
                imprimir_factura(facturas[n]);
                break;
            case 6: cout << "Gracias por participar";
                break;
        }

    }while(opcion != 6);
    

    return 0;
}

void bienvenida(){
    cout << "*****************************************" << endl;
    cout << " Bienvenidos al programa de Factura PLUS " << endl;
    cout << "*****************************************" << endl;
    cout << endl;
}

Factura capturar_factura(){
    Factura factura;
    cout << endl;
    cout << "=================================================="<< endl;
    cout << "Captura de factura proporcione los siguientes datos:  " << endl;
    
    cout<<"Dame la calle ";
    cin >> factura.direccion.calle;
    cout<<"Dame el numero de la calle ";
    cin >> factura.direccion.numero;
    cout<<"Dame la colonia ";
    cin >> factura.direccion.colonia;
    cout<<"Dame la ciudad ";
    cin >> factura.direccion.ciudad;
    cout<<"Dame el nombre del cliente ";
    cin >> factura.cliente.nombre;
    cout<<"Dame el apellido paterno del cliente ";
    cin >> factura.cliente.apellido_paterno;
    
    cout<<"Dame el numero de factura ";
    cin >> factura.numero_factura;
    
    // ... terminar de captuerar todo

    return factura;
  
}


Factura editar_factura(Factura factura){
    cout << endl;
    cout << "=================================================="<< endl;
    cout << "Captura de factura proporcione los siguientes datos:  " << endl;
    
    cout<<"Dame la calle ";
    cin >> factura.direccion.calle;
    cout<<"Dame el numero de la calle ";
    cin >> factura.direccion.numero;
    cout<<"Dame la colonia ";
    cin >> factura.direccion.colonia;
    cout<<"Dame la ciudad ";
    cin >> factura.direccion.ciudad;
    cout<<"Dame el nombre del cliente ";
    cin >> factura.cliente.nombre;
    cout<<"Dame el apellido paterno del cliente ";
    cin >> factura.cliente.apellido_paterno;
    
    cout<<"Dame el numero de factura ";
    cin >> factura.numero_factura;
    
    // ... TODO terminar de captuerar todo

    return factura;
  
}

void imprimir_factura(Factura factura){
    
    cout<< factura.direccion.calle << endl;
    cout<< factura.direccion.numero<< endl;
    cout<< factura.direccion.colonia<< endl;
    cout<< factura.direccion.ciudad<< endl;;
    cout<< factura.cliente.nombre<< endl;;
    cout<< factura.cliente.apellido_paterno<< endl;;
    cout<< factura.numero_factura<< endl;;
    
}
void imprimir_listado_facturas(){
        int n= 0;
    
    cout << endl;
    cout << "===================="<< endl;
    cout << "Listado de Facturas:" << endl;
    cout << "===================="<< endl;
    cout << endl;
    
    for (int i = 0; i<numero_de_facturas; i++){
        cout << "[" << i << "]"<< "Factura Numero: " << facturas[i].numero_factura << endl;
    }
 
}

void imprimir_menu(){
    cout << "================================"<< endl;
    cout << "[1] Capturar nueva factura " << endl;
    cout << "[2] EDITAR una factura existente " << endl;
    cout << "[3] Eliminar una factura existente " << endl;
    cout << "[4] Mostrar lista de facturas " << endl;
    cout << "[5] Mostrar una factura en particular " << endl;
    cout << "[6] Salir " << endl;
    cout << endl;
}

void eliminar_factura( int n){
    // TODO terminar esta funcion
    cout << "Aqui vamos a eliminar una factura..."<< endl;;
}



