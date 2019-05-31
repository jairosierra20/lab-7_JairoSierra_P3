#include "Poder.h"

//Constructores
Poder::Poder(string pnombre,string pnivel){
   this->nombre=pnombre;
   this->nivel=pnivel;
}
Poder::Poder(){
  
}
//Metodos
string Poder::getNombre(){
	return nombre;
}
void Poder::setNombre(string pnombre){
	nombre=pnombre;
}
string Poder::getNivel(){
	return nivel;
}
void Poder::setNivel(string pnivel){
	nivel=pnivel;
}

string Poder::toString(){
	string retval = "";
	retval="Poder Especial:: Nombre: "+nombre+" Nivel del poder: "+nivel;
	return retval;
}