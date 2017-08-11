#include "Llanta.h"
#include "Bicicleta.h"
#include "Bicimontana.h"

Bicimontana::Bicimontana(){

}

Bicimontana::Bicimontana(float pPrecio, float pPeso, Llanta* pLlanta) : Bicicleta(pPrecio, pPeso, pLlanta){
}

