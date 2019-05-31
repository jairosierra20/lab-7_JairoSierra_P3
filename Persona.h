#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using std::string;
#include "Poder.h"
class Persona{
	//Atributos
public:
	string nacion;
	string nombre;
	string edad;
	string sexo;
	Poder* poder;
	//Metodos
public:
	Persona();
	Persona(string,string,string,string,Poder*);

	string getNacion();
	void setNacion(string);

	string getNombre();
	void setNombre(string);

	string getEdad();
	void setEdad(string);

	string getSexo();
	void setSexo(string);

	Poder* getPoder();
	void setPoder(Poder*);
	
	virtual string toString();
};
#endif