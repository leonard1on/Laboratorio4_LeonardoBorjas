#include "Llanta.h"
#include "Bicicleta.h"
#include "Bicimontana.h"
#include "Bicicarrera.h"
#include <iostream>
using namespace std;

int getM(int);
int main(){
	int n1;
	int n2;
	int m1;
	int m2;
	cout<<"De que tamaño es su camion de Bicicletas de Montana? n:";
	cin>>n1;
	m1=getM(n1);
	
	return 0;
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
