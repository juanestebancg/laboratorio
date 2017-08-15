#include <iostream>
using namespace std;
int potencia(int n,int a){
	//este algoritmo tiene como entrada dos parametros, la base y la potencia a la que se dese elevar el numero,//
	//como salida devuelve la base elevada a la potencia deseada//
	int poten=1;
	int i=0;
	for(i=0;i<n;i++){
		poten=poten*a;
	}
	return poten;
}




int busquedaSecuencial(int k,int n, int a[]){
	//este algoritmo tiene 3 entradas como paramentro, el k que se desea buscar, el n que es el tamano del arreglo//
	//y a el arreglo de numeros enteros, devuelve -1 si no lo encuentra o la posicion del numero en el arreglo si este esta//
	int i=0;
	for(i=0;i<n;i++){
		if(a[i]==k){
			return i;
		}
	}
	return -1;
}


void ordenamientoBurbuja(int a[],int n){
	//este alogirmto le entra un arreglo a como parametro y su tamano n, y como salida devuelve el arreglo ordenado de mayor a menor//
    int i=0;
    int j=0;
    int temp=0;
    for(i=0;i<=n-2;i++){
            for(j=0;j<=n-2-i;j++){
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;

                }
            }

    }

    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }


}

void ordenamientoSeleccion(int a[],int n){
	//este algoritmo le entran dos paramentros, un a que es un arreglo de enteros y un n que es su tamano, y devuelve el arreglo ordenado//
	int temp=0;
	int i=0;
	int j=0;
	int min=0;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				temp=a[j];
				a[j]=a[min];
				a[min]=temp;
			}

		}
	}
	for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}

int emparejamientoCadenas(char *largo,int n, char *patron,int m){
	//este algoritmo le entran 4 parametros, el texto largo, el tamano de este, el patron y el tamano de este//
	//retorna la posicion donde encontro la primera letra//
	int i=0;
	int j=0;
	for(i=0;i<n-m;i++){
		int j=0;
		while(j<m && patron[j]==largo[i+j]){
		          j++;
		}
		if(j==m){
		  return i;
			
		}

	}
	return -1;
}

