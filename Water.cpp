#include "Water.h"
Water::Water(){
	
}
Water::Water(string tribu, string arma):Persona(nacion,nombre,edad,sexo,poder){
	//llamar al constructor del padre

}
string Water::getTribu(){
	return tribu;
}
void Water::setTribu(string ptribu){
	tribu=ptribu;
}
string Water::getArma(){
	return arma;
}
void Water::setArma(string parma){
	arma=parma;
}
string Water::toString(){
	string retval="";
	retval="Water Bender:: Tribu de origen: "+tribu+" Arma de preferencia: "+arma;
	return retval;
}