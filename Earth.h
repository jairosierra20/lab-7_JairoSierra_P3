#include "Persona.h"//hereda de persona
#ifndef EARTH_H
#define EARTH_H
class Earth:public Persona{
	//Atributos
	private:
		string coles;
		string ojos;
	//Mutadores
	public:
		Earth();
		Earth(string,string);
		string getColes();
		void setColes(string);
		string getOjos();
		void setOjos(string);
		virtual string toString();
};
#endif