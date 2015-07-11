#pragma once

#include "INodoGrafoSocial.h"

using namespace std;

class NodoGrafoSocial : public INodoGrafoSocial{
private:
	IPersona * persona;
	ILista<INodoGrafoSocial *> * amigos;

public:
	NodoGrafoSocial();
	~NodoGrafoSocial();

	void setPersona(IPersona * actual);
	IPersona * getPersona();
	void agregarAmigo(IPersona * nodo);// no implementar
	ILista<INodoGrafoSocial *> * getAmigos();
};

