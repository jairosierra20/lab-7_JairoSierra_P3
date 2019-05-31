#include "Persona.h"//hereda de persona
#ifndef FIRE_H
#define FIRE_H
//obtiene los metodos de figura
class Fire:public Persona{
	//Atributos
	private:
		string cicatrices;
		string victorias;
	//Mutadores
	public:
		Fire();
		Fire(string,string);
		string getCicatrices();
		void setCicatrices(string);
		string getVictorias();
		void setVictorias(string);
		virtual string toString();
};
#endif