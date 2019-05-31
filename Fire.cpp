#include "Fire.h"
Fire::Fire(){
	
}
Fire::Fire(string cicatrices, string victorias):Persona(nacion,nombre,edad,sexo,poder){
	//llamar al constructor del padre

}
string Fire::getCicatrices(){
	return cicatrices;
}
void Fire::setCicatrices(string pcicatrices){
	cicatrices=pcicatrices;
}
string Fire::getVictorias(){
	return victorias;
}
void Fire::setVictorias(string pvictorias){
	victorias=pvictorias;
}
string Fire::toString(){
	string retval="";
	retval="Fire Bender:: Cantidad del cicatrices: "+cicatrices+" Numero de victorias en Pai Sho: "+victorias;
	return retval;
}