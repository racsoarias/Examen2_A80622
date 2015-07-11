#include "stdafx.h"
#include "NodoGrafoSocial.h"


NodoGrafoSocial::NodoGrafoSocial(){
	persona = NULL;
	amigos = new Lista<INodoGrafoSocial*>();
}

NodoGrafoSocial::~NodoGrafoSocial(){
}

void NodoGrafoSocial::setPersona(IPersona * actual){
	this->persona = actual;
}

IPersona * NodoGrafoSocial::getPersona(){
	return this->persona;
}

void NodoGrafoSocial::agregarAmigo(IPersona * nodo){/*no implementar*/}

ILista<INodoGrafoSocial *> * NodoGrafoSocial::getAmigos(){
	return this->amigos;
}
