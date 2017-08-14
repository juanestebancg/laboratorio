#include <iostream>
#include "funciones.h"
#include "funcioncita.cpp"
#include <string.h>
#define MAXL 1001
#define MAXC 1000
using namespace std;
void punto1();
void punto2();
void punto3();
void punto4();
void punto5();


int main(){
    int cual;

    while (true){
            cout<<"elegir una opcion"<<endl;
            cout<<"0.salir del programa"<<endl;
            cout<<"1.potencia"<<endl;
            cout<<"2.busqueda de dato"<<endl;
            cout<<"3.ordenamiento burbuja"<<endl;
            cout<<"4.ordenamiento seleccion"<<endl;
            cout<<"5.emparejar cadenas"<<endl;
            cin>> cual;
            switch(cual){
                case 0: return 0;break;
                case 1: punto1();break;
                case 2:punto2();break;
                case 3:punto3();break;
                case 4:punto4();break;
                case 5:punto5();break;
                default:main();break;

            }


    }

}

void punto1(){
    int numero;
    int pot;
    cout << "ingrese la base" << endl;
    cin >> numero;
    cout << "ingrese exponente" << endl;
    cin >> pot;
    int segundo=potencia(pot,numero);
    cout << "el resultado es"<< endl;
    cout << segundo<< endl;


}

void punto2(){
    int dato;
    int cardinalidad;
    int arreglo[]={1,2,3,4,5};
    cout << "ingrese el dato que desea buscar" << endl;
    cin >> dato;
    cout << "ingrese cardinalidad del arreglo" << endl;
    cin >> cardinalidad;
    int primero=busquedaSecuencial(dato,cardinalidad, arreglo);
    cout << "esta en la posicion : "<< endl;
    cout << primero << endl;
}

void punto3(){
    int cardinalidad;
    int arreglo[]={500,3,300,4,5};
    cout << "ingrese cardinalidad del arreglo" << endl;
    cin >> cardinalidad;
    ordenamientoBurbuja(arreglo,cardinalidad);
}

void punto4(){
    int cardinalidad;
    int arreglo[]={10,22,3,1,5};
    cout << "ingrese cardinalidad del arreglo" << endl;
    cin >> cardinalidad;
    ordenamientoSeleccion(arreglo,cardinalidad);

}

void punto5(){
    char largo[MAXL];
    char corto[MAXC];
    cout<<"ingrese texto largo: "<<endl;
    cin>>largo;
    cout<<"ingrese texto cort0: "<<endl;
    cin>>corto;
    int cardinalidad=strlen(largo);
    int cardinalidad2=strlen(corto);
    int resul=emparejamientoCadenas(largo,cardinalidad,corto,cardinalidad2);
    cout<<resul<<endl;
}

