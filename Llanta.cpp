#include "Llanta.h"

#include <string>
using namespace std;

Llanta::Llanta(string mMaterial, float pPrecio, string pColor){
	material=mMaterial;
	precio=pPrecio;
	color=pColor;
}

string Llanta::getMaterial(){
	return material;
}

float Llanta::getPrecio(){
	return precio;
}

string Llanta::getColor(){
	return color;
}
