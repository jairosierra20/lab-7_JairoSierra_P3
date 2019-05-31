#include "Curativos.h"
Curativos::Curativos(){
	
}
Curativos::Curativos(string curacion):Poder(nombre,nivel){
	//llamar al constructor del padre

}
string Curativos::getCuracion(){
	return curacion;
}
void Curativos::setCuracion(string pcuracion){
	curacion=pcuracion;
}
string Curativos::toString(){
	string retval="";
	retval="Curativos:: Curacion: "+curacion;
	return retval;
}