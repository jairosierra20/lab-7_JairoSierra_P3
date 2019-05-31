#include "Defensivos.h"
Defensivos::Defensivos(){
	
}
Defensivos::Defensivos(string resistencia, string duracion):Poder(nombre,nivel){
	//llamar al constructor del padre

}
string Defensivos::getResistencia(){
	return resistencia;
}
void Defensivos::setResistencia(string presistencia){
	resistencia=presistencia;
}
string Defensivos::getDuracion(){
	return duracion;
}
void Defensivos::setDuracion(string pduracion){
	duracion=pduracion;
}
string Defensivos::toString(){
	string retval="";
	retval="Defensivos:: Resistencia: "+resistencia+" Duracion: "+duracion;
	return retval;
}