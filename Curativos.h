#include "Poder.h"//hereda de poder
#ifndef CURATIVOS_H
#define CURATIVOS_H
class Curativos:public Poder{
	//Atributos
	private:
		string curacion;
	//Mutadores
	public:
		Curativos();
		Curativos(string);
		string getCuracion();
		void setCuracion(string);
		virtual string toString();
};
#endif