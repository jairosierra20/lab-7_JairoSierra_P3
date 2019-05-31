#ifndef PODER_H
#define PODER_H
#include <string>
using std::string;
class Poder{
	//Atributos
public:
	string nombre;
	string nivel;
	//Metodos
public:
	Poder();
	Poder(string,string);

	string getNombre();
	void setNombre(string);

	string getNivel();
	void setNivel(string);
	
	virtual string toString();
};
#endif