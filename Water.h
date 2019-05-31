#include "Persona.h"//hereda de persona
#ifndef WATER_H
#define WATER_H
class Water:public Persona{
	//Atributos
	private:
		string tribu;
		string arma;
	//Mutadores
	public:
		Water();
		Water(string,string);
		string getTribu();
		void setTribu(string);
		string getArma();
		void setArma(string);
		virtual string toString();
};
#endif