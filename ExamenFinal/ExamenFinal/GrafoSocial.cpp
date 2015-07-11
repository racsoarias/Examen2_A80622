#include "stdafx.h"
#include "GrafoSocial.h"

GrafoSocial::GrafoSocial(){
	todos = new Lista<INodoGrafoSocial*>();
}

GrafoSocial::~GrafoSocial(){}

void GrafoSocial::aleatorizarGrafo(){
	for (int i = 0; i < 15; i++){
		Persona * p1 = new Persona();
		p1->setID(i);
		agregarPersona(p1);
	}
}

IPersona * GrafoSocial::getPersonaAleatoria(){
	return todos->get(rand() % (todos->cantidadElementos()))->getPersona();
}

void GrafoSocial::agregarPersona(IPersona * persona){
	NodoGrafoSocial *temp = new NodoGrafoSocial();
	temp->setPersona(persona);
	todos->insertarFinal(temp);
}

bool GrafoSocial::sonAmigos(IPersona * a, IPersona * b){
	bool resultado = false;
	for (int i = 0; i < todos->cantidadElementos(); i++){
		if (a == todos->get(i)->getPersona()){
			for (int j = 0; j < todos->get(i)->getAmigos()->cantidadElementos(); j++){
				if (b == todos->get(i)->getAmigos()->get(j)->getPersona()){
					resultado = true;
				}
			}
		}
	}
	return resultado;
}

void GrafoSocial::establecerAmistad(IPersona * a, IPersona * b){
	NodoGrafoSocial *temp = new NodoGrafoSocial();
	NodoGrafoSocial *temp2 = new NodoGrafoSocial();
	temp->setPersona(a);
	temp2->setPersona(b);

	for (int i = 0; i < todos->cantidadElementos(); i++){
		if (a == todos->get(i)->getPersona()){
			todos->get(i)->getAmigos()->insertarFinal(temp2);
		}
		if (b == todos->get(i)->getPersona()){
			todos->get(i)->getAmigos()->insertarFinal(temp);
		}
	}
}
