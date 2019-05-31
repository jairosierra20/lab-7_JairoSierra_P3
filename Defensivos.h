#include "Poder.h"//hereda de poder
#ifndef DEFENSIVOS_H
#define DEFENSIVOS_H
class Defensivos:public Poder{
	//Atributos
	private:
		string resistencia;
		string duracion;
	//Mutadores
	public:
		Defensivos();
		Defensivos(string,string);
		string getResistencia();
		void setResistencia(string);
		string getDuracion();
		void setDuracion(string);
		virtual string toString();
};
#endif