#include "Poder.h"//hereda de poder
#ifndef OFENSIVOS_H
#define OFENSIVOS_H
class Ofensivos:public Poder{
	//Atributos
	private:
		string rango;
		string fuerza;
	//Mutadores
	public:
		Ofensivos();
		Ofensivos(string,string);
		string getRango();
		void setRango(string);
		string getFuerza();
		void setFuerza(string);
		virtual string toString();
};
#endif