#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include "Persona.h"
#include "Air.h"
#include "Fire.h"
#include "Earth.h"
#include "Water.h"
#include "Non.h"
#include "Poder.h"
#include "Ofensivos.h"
#include "Defensivos.h"
#include "Curativos.h"
#include "Macotas.h"
#include <fstream>
#include <stdlib.h>
using namespace std;
//#include "stdafx.h"
void Agregar();
void Listar();
void Eliminar();
void Archivo();
vector<string> hola;
	vector<string>maestros;
int main(){
	int opcion=0;
	while(opcion!=5){
		//inicializar matriz n x n
		cout<<"Menu"<<endl;
		cout<<"1) Agregar Persona"<<endl;
		cout<<"2) Listar Personas"<<endl;
		cout<<"3) Eliminar Personas"<<endl;
		cout<<"4) Crear archivo de texto"<<endl;
		cout<<"5) Salir"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:
				Agregar();
				break;
			case 2:
				Listar();
				break;
			case 3:
				Eliminar();
				break;
			case 4:
				Archivo();
				break;
			case 5:
				cout<<"El programa se cerrara"<<endl;
			default:
				cout<<"La opcion es incorrecta"<<endl;
				break;

		}
	}
	return 0;
}//fin del main
void Agregar(){
	string nombre,nacion,edad,sexo,pelo,nombre1,nivel,rango,fuerza,resistencia,duracion,curacion,nombre2,especie;
	string flechas,habilidad,tipo,cicatrices,victorias,tribu,arma,coles,ojos,trabajo,fuerza1,velocidad;
	Air* a=new Air();
	Fire* f=new Fire();
	Water* w=new Water();
	Earth* e=new Earth();
	Non* n=new Non();
	string cadena4="";
	string cadena2="";
	cout<<"Ingrese el nombre: "<<endl;
	cin>>nombre;
	cout<<"Ingrese la nacion de origen: "<<endl;
	cin>>nacion;
	cout<<"Ingrese la edad: "<<endl;
	cin>>edad;
	cout<<"Ingrese el sexo: "<<endl;
	cin>>sexo;
	cout<<"Ingrese el poder"<<endl;
	cout<<"Ingrese el nombre del poder: "<<endl;
	cin>>nombre1;
	cout<<"Ingrese el nivel del poder: "<<endl;
	cin>>nivel;
	Poder* poder;
	int opcion1=0;
	cout<<"Menu de poderes especiales"<<endl;
	cout<<"1) Ofensivos"<<endl;
	cout<<"2) Defensivos"<<endl;
	cout<<"3) Curativos"<<endl;
	cout<<"4) Mascotas"<<endl;;
	cout<<"Ingrese una opcion: "<<endl;
	cin>>opcion1;
	switch(opcion1){
		case 1:
			cout<<"Ingrese el rango: "<<endl;
			cin>>rango;
			cout<<"Ingrese la fuerza: "<<endl;
			cin>>fuerza;
			cout<<rango<<endl;
			poder = new Ofensivos(rango,fuerza);
			break;
		case 2: 
			cout<<"Ingrese la resistencia: "<<endl;
			cin>>resistencia;
			cout<<"Ingrese la duracion: "<<endl;
			cin>>duracion;
			poder=new Defensivos(resistencia,duracion);
			break;
		case 3:
			cout<<"Ingrese el tipo de curacion: "<<endl;
			cin>>curacion;
			poder = new Curativos(curacion);
			break;
		case 4:
			cout<<"Ingrese el nombre de la mascota: "<<endl;
			cin>>nombre2;
			cout<<"Ingrese la especie: "<<endl;
			cin>>especie;
			cout<<"Ingrese la habilidad: "<<endl;
			cin>>habilidad;
			cout<<"Ingrese el tipo de mascota: "<<endl;
			cin>>tipo;
			poder = new Macotas(nombre2,especie,habilidad,tipo);
			break;
		default:
			cout<<"La opcion es incorrecta"<<endl;
			break;
	}
	Persona* persona= new Persona(nacion,nombre,edad,sexo,poder);
	cadena4=persona->toString();
	delete poder;
	int opcion=0;
	cout<<"Menu de elementos"<<endl;
	cout<<"1) Air Bender"<<endl;
	cout<<"2) Fire Bender"<<endl;
	cout<<"3) Water Bender"<<endl;
	cout<<"4) Earth Bender"<<endl;
	cout<<"5) Non Bender"<<endl;
	cout<<"Ingrese una opcion: "<<endl;
	cin>>opcion;
	switch(opcion){
		case 1:
			cout<<"Ingrese la cantidad de pelo: "<<endl;
			cin>>pelo;
			cout<<"Ingrese el color de las flechas de su cuerpo: "<<endl;
			cin>>flechas;
			a = new Air(pelo,flechas);
			cadena2=a->toString();
			maestros.push_back("Air");
			break;
		case 2:
			cout<<"Ingrese la cantidad de cicatrices: "<<endl;
			cin>>cicatrices;
			cout<<"Ingrese el numero de victorias: "<<endl;
			cin>>victorias;
			f = new Fire(cicatrices,victorias);
			cadena2 = f->toString();
			maestros.push_back("Fire");
			break;
		case 3:
			cout<<"Ingrese la tribu (Norte o Sur): "<<endl;
			cin>>tribu;
			cout<<"Ingrese su arma de preferencia: "<<endl;
			cin>>arma;
			w = new Water(tribu,arma);
			cadena2=w->toString();
			maestros.push_back("Water");
			break;
		case 4:
			cout<<"Ingrese la cantidad de coles que ha cosechado: "<<endl;
			cin>>coles;
			cout<<"Ingrese la graduacion de ojos(menor a 20): "<<endl;
			cin>>ojos;
			e = new Earth(coles,ojos);
			cadena2=e->toString();
			maestros.push_back("Earth");
			break;
		case 5:
			cout<<"Ingrese el trabajo: "<<endl;
			cin>>trabajo;
			cout<<"Ingrese la fuerza: "<<endl;
			cin>>fuerza1;
			cout<<"Ingrese la velocidad: "<<endl;
			cin>>velocidad;
			n = new Non(trabajo,fuerza1,velocidad);
			cadena2 = n->toString();
			maestros.push_back("Non");
			break;
		default:

			cout<<"La opcion es incorrecta"<<endl;
			break;
	}
	hola.push_back(cadena4+cadena2);
	//liberar memoria
	delete poder;
	delete persona;
	delete a;
	delete f;
	delete w;
	delete e;
	delete n;
}
void Listar(){
	for (int i = 0; i < hola.size(); ++i)
	{
		cout<<i<<"- "<<hola[i]<<endl;
	}
	for (int i = 0; i < maestros.size(); ++i)
	{
		if(maestros[i] == "Water"){
			cout<<i<<"- "<<hola[i]<<endl;
		}
		if(maestros[i] == "Fire"){
			cout<<i<<"- "<<hola[i]<<endl;
		}
		if(maestros[i]=="Earth"){
			cout<<i<<"- "<<hola[i]<<endl;
		}
		if(maestros[i]=="Air"){
			cout<<i<<"- "<<hola[i]<<endl;
		}
		if(maestros[i]=="Non"){
			cout<<i<<"- "<<hola[i]<<endl;
		}
	}
}
void Eliminar(){
	int pos=0;
	cout<<"Ingrese la posicion a Eliminar"<<endl;
	cin>>pos;
 	hola.erase(hola.begin()+pos);
	cout<<"Se elimino exitosamente"<<endl;
}
void Archivo(){
	ofstream file;
	file.open("Lab#7_JairoSiera.txt",ios::out);
	for (int i = 0; i < maestros.size(); ++i)
	{
		if(maestros[i] == "Water"){
			file<<hola[i];
		}
		if(maestros[i] == "Fire"){
			file<<hola[i];
		}
		if(maestros[i]=="Earth"){
			file<<hola[i];
		}
		if(maestros[i]=="Air"){
			file<<hola[i];
		}
		if(maestros[i]=="Non"){
			file<<hola[i];
		}
	}
	cout<<"Se creo exitosamente"<<endl;
	file.close();

}