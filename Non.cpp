#include "Non.h"
Non::Non(){
	
}
Non::Non(string trabajo, string fuerza,string velocidad):Persona(nacion,nombre,edad,sexo,poder){
	//llamar al constructor del padre

}
string Non::getTrabajo(){
	return trabajo;
}
void Non::setTrabajo(string ptrabajo){
	trabajo=ptrabajo;
}
string Non::getFuerza(){
	return fuerza;
}
void Non::setFuerza(string pfuerza){
	fuerza=pfuerza;
}
string Non::getVelocidad(){
	return velocidad;
}
void Non::setVelocidad(string pvelocidad){
	velocidad=pvelocidad;
}
string Non::toString(){
	string retval="";
	retval="Non Bender:: Trabajo: "+trabajo+" Fuerza: "+fuerza+" Velocidad: "+velocidad;
	return retval;
}