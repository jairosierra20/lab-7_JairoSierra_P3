#include "Ofensivos.h"
Ofensivos::Ofensivos(){
	
}
Ofensivos::Ofensivos(string rango, string fuerza):Poder(nombre,nivel){
	//llamar al constructor del padre

}
string Ofensivos::getRango(){
	return rango;
}
void Ofensivos::setRango(string prango){
	rango=prango;
}
string Ofensivos::getFuerza(){
	return fuerza;
}
void Ofensivos::setFuerza(string pfuerza){
	fuerza=pfuerza;
}
string Ofensivos::toString(){
	string retval="";
	retval="Ofensivos:: Rango: "+rango+" Fuerza: "+fuerza;
	return retval;
}