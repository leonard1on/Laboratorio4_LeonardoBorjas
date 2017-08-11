#ifndef LLANTA_H
#define LLANTA_H

#include <string>
using namespace std;

class Llanta{
	private:
		string material;
		float precio;
		string color;
	public:
		Llanta();
		Llanta(string, float, string);
		string getMaterial();
		float getPrecio();
		string getColor();
};
#endif
