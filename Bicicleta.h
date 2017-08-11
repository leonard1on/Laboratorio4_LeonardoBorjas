#ifndef BICICLETA_H
#define BICICLETA_H

class Bicicleta{
	private:
		float precio;
		float peso;
		Llanta llanta;
	public:
		Bicicleta(float, float, Llanta);
		float getPrecio();
		float getPeso();
		Llanta getLlanta();
		void set Precio(float);
		void set Peso(float);
		void setLlanta(Llanta);
};
#endif
