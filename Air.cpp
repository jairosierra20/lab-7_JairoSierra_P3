#include "Air.h"
Air::Air(){
	
}
Air::Air(string pelo, string flechas):Persona(nacion,nombre,edad,sexo,poder){
	//llamar al constructor del padre

}
string Air::getPelo(){
	return pelo;
}
void Air::setPelo(string ppelo){
	pelo=ppelo;
}
string Air::getFlechas(){
	return flechas;
}
void Air::setFlechas(string pflechas){
	flechas=pflechas;
}
string Air::toString(){
	string retval="";
	retval="Air Bender:: Cantidad del pelo: "+pelo+" Color de las feclas de su cuerpo: "+flechas;
	return retval;
}