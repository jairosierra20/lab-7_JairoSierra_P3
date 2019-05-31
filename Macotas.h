#include "Poder.h"//hereda de poder
#ifndef MACOTAS_H
#define MACOTAS_H
class Macotas:public Poder{
	//Atributos
	private:
		string nombre1;
		string especie;
		string habilidad;
		string tipo;
	//Mutadores
	public:
		Macotas();
		Macotas(string,string,string,string);
		string getNombre();
		void setNombre(string);
		string getEspecie();
		void setEspecie(string);
		string getHabilidad();
		void setHabilidad(string);
		string getTipo();
		void setTipo(string);
		virtual string toString();
};
#endif