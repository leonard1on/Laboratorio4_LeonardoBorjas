#include "Llanta.h"
#include "Bicicleta.h"
#include "Bicimontana.h"
#include "Bicicarrera.h"
#include <iostream>
#include <string>
using namespace std;

int getM(int);
Bicicleta*** crearcamion(int, int);
Bicicleta*** llenarcamion1(Bicicleta**, int, int);

int main(){
	int n1;
	int n2;
	int m1;
	int m2;
	int resp;
	cout<<"De que tamaño es su camion de Bicicletas de Montana? n:";
	cin>>n1;
	m1=getM(n1);
	cout<<"De que tamaño es su camion de Bicicletas de Carrera? n:";
	cin>>n2;
	m2=getM(n1);
	Bicicleta*** camion1=crearcamion(n1,m1);
	Bicicleta*** camion2=crearcamion(n2,m2);
	do{
		cout<<"- Menu -" <<endl
			<<"1. Llenar el Camion de bicis de montana" <<endl
			<<"2. Agregar al Camion de bicis de montana"<<endl
			<<"3. Llenar el Camion de bicis de carrera" <<endl
			<<"4. Agregar al Camion de bicis de carrera"<<endl
			<<"5. Salir" <<endl <<"Cual es su eleccion:";
		cin>>resp;
		if(resp==1){
			camion1=llenarcamion1(camion1, n1, m1);
			
		}
		if(camion1[n1-1][m1-1]->getPrecio()==-1){
			cout<<"El camion 1 no esta lleno";
		}else{
			cout<<"El camion esta lleno";
		}
	}while(resp!=5);
	
	
	return 0;
}

Bicicleta*** llenarcamion1(Bicicleta*** camion, int n, int m){
	float precio;
	float peso;
	string material;
	float precio2;
	string color;
	cout<<"Cual es el precio de las bicicletas";
	cin >>precio;
	cout<<"Cual es el peso de las bicicletas";
	cin >>peso;
	cout<<"De que material son las llantas";
	cin >>material;
	cout<<"Cual es el precio de las llantas";
	cin >>precio2;
	cout<<"De que color son las llantas";
	cin >>color;
	Llanta* llanta=new Llanta(material, precio2, color);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			camion[i][j]= Bicimontana(precio, peso, llanta);
		}
	}
	return camion;
}

int getM(int n){
	int m;
	if(n%4==0){
		m=n+(0.75*n);
	}else if(n%2==0){
		m=1.5*n;
	}else{
		m=2*n;
	}
	return m;
}

Bicicleta*** crearcamion(int n, int m){
	Bicicleta*** camion=new Bicicleta**[n];
	for(int i=0;i<n;i++){
		camion[i]=new Bicicleta*[m];
	}
	return camion;
}


