#include "Llanta.h"
#include "Bicicleta.h"

Bicicleta::Bicicleta(float pPrecio, float pPeso, Llanta* pllanta){
	precio = pPrecio;
	peso = pPeso;
	llanta = pllanta;
}

float Bicicleta::getPrecio(){
	return precio;
}

float Bicicleta::getPeso(){
	return peso;
}

Llanta* Bicicleta::getLlanta(){
	return llanta;
}

void Bicicleta::setPrecio(float pPrecio){
	precio=pPrecio;
}

void Bicicleta::setPeso(float pPeso){
	peso=pPeso;
}

void Bicicleta::setLlanta(Llanta* pLlanta){
	llanta=pLlanta;
}

