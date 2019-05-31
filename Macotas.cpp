#include "Macotas.h"
Macotas::Macotas(){
	
}
Macotas::Macotas(string nombre1,string especie,string habilidad,string tipo):Poder(nombre,nivel){
	//llamar al constructor del padre

}
string Macotas::getNombre(){
	return nombre1;
}
void Macotas::setNombre(string pnombre1){
	nombre1=pnombre1;
}
string Macotas::getEspecie(){
	return especie;
}
void Macotas::setEspecie(string pespecie){
	especie=pespecie;
}
string Macotas::getHabilidad(){
	return habilidad;
}
void Macotas::setHabilidad(string phabilidad){
	habilidad=phabilidad;
}
string Macotas::getTipo(){
	return tipo;
}
void Macotas::setTipo(string ptipo){
	tipo=ptipo;
}
string Macotas::toString(){
	string retval="";
	retval="Mascotas:: Nombre: "+nombre1+" Especie: "+especie+" Habilidad: "+habilidad+" Tipo: "+tipo;
	return retval;
}