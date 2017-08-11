#ifndef BICICARRERA_H
#define BICICARRERA_H

#include "Llanta.h"
#include "Bicicleta.h"
class Bicicarrera : public Bicicleta{
	public:
		Bicicarrera(float, float, Llanta*);
};
#endif
