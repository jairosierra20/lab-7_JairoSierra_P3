#include "Persona.h"

//Constructores
Persona::Persona(string pnacion,string pnombre,string pedad,string psexo,Poder* ppoder){
   this->nacion=pnacion;
   this->nombre=pnombre;
   this->edad=pedad;
   this->sexo=psexo;
   this->poder=ppoder;
}
Persona::Persona(){
  
}
//Metodos
string Persona::getNacion(){
	return nacion;
}
void Persona::setNacion(string pnacion){
	nacion=pnacion;
}
string Persona::getNombre(){
	return nombre;
}
void Persona::setNombre(string pnombre){
	nombre=pnombre;
}
string Persona::getEdad(){
	return edad;
}
void Persona::setEdad(string pedad){
	edad=pedad;
}
string Persona::getSexo(){
	return sexo;
}
void Persona::setSexo(string psexo){
	sexo=psexo;
}
Poder* Persona::getPoder(){
	return poder;
}
void Persona::setPoder(Poder* ppoder){
	poder=ppoder;
}
string Persona::toString(){
	string retval = "";
	retval="Persona:: Nacion: "+nacion+" Nombre: "+nombre+" Edad: "+edad+" Sexo: "+sexo+" Poder Especial: "+poder->toString();
	return retval;
}