#include "Persona.h"//hereda de persona
#ifndef NON_H
#define NON_H
class Non:public Persona{
	//Atributos
	private:
		string trabajo;
		string fuerza;
		string velocidad;
	//Mutadores
	public:
		Non();
		Non(string,string,string);
		string getTrabajo();
		void setTrabajo(string);
		string getFuerza();
		void setFuerza(string);
		string getVelocidad();
		void setVelocidad(string);
		virtual string toString();
};
#endif