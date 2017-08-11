#ifndef BICIMONTANA_H
#define BICIMONTANA_H

#include "Llanta.h"
#include "Bicicleta.h"

class Bicimontana : public Bicicleta{
	public:
		Bicimontana();
		Bicimontana(float, float, Llanta*);
};
#endif
