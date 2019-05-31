Main.out: main.o Persona.o Air.o Fire.o Earth.o Water.o Non.o Poder.o Ofensivos.o Defensivos.o Curativos.o Macotas.o
	g++ main.o Persona.o Air.o Fire.o Earth.o Water.o Non.o Poder.o Ofensivos.o Defensivos.o Curativos.o Macotas.o  -o Main.out
Main.o: main.cpp Persona.cpp Air.cpp Fire.cpp Earth.cpp Water.cpp Non.cpp Poder.cpp Ofensivos.cpp Defensivos.cpp Curativos.cpp Macotas.cpp 
	g++ -c Main.cpp