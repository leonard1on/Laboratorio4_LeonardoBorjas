#ifndef BICICLETA_H
#define BICICLETA_H

#include "Llanta.h"
class Bicicleta{
	private:
		float precio;
		float peso;
		Llanta* llanta;
	public:
		Bicicleta();
		Bicicleta(float, float, Llanta*);
		float getPrecio();
		float getPeso();
		Llanta* getLlanta();
		void setPrecio(float);
		void setPeso(float);
		void setLlanta(Llanta*);
};
#endif
