#include "Earth.h"
Earth::Earth(){
	
}
Earth::Earth(string coles, string ojos):Persona(nacion,nombre,edad,sexo,poder){
	//llamar al constructor del padre

}
string Earth::getColes(){
	return coles;
}
void Earth::setColes(string pcoles){
	coles=pcoles;
}
string Earth::getOjos(){
	return ojos;
}
void Earth::setOjos(string pojos){
	ojos=pojos;
}
string Earth::toString(){
	string retval="";
	retval="Earth Bender:: Coles que ha cosechado: "+coles+" Graduacion de ojos: "+ojos;
	return retval;
}