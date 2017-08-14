#include <iostream>
using namespace std;
void ordenamientoSeleccion(int a[],int n){
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
		cout <<a[i]<< endl;
	}
}

int emparejamientoCadenas(int largo[],int n, int patron[],int m){
	int i=0;
	for(i=0,i<n-m;i++){
		int j=0;
		while(j<m && patron[j]==largo[i+j]){
			if(j==m){
				return i;
			}
			j=j+1;
			
		}
		
	}
	return -1:
}



int main(){
	int ar[]={100,4,500,2};
	int n=4;
	ordenamientoSeleccion(ar,n);
	
	
	
}
