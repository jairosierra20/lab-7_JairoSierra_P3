#include "Persona.h"//hereda de persona
#ifndef AIR_H
#define AIR_H
//obtiene los metodos de figura
class Air:public Persona{
	//Atributos
	private:
		string pelo;
		string flechas;
	//Mutadores
	public:
		Air();
		Air(string,string);
		string getPelo();
		void setPelo(string);
		string getFlechas();
		void setFlechas(string);
		virtual string toString();
};
#endif