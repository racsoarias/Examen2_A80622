#include "stdafx.h"
#include "Persona.h"


Persona::Persona(){
	ID = 0.0;
	nombre = "";
}

Persona::~Persona(){
}

void Persona::setID(long ID){
	this->ID = ID;
}

long Persona::getID(){
	return this->ID;
}

void Persona::setNombre(char * nombre){
	this->nombre = nombre;
}
char * Persona::getNombre(){
	return this->nombre;
}

bool Persona::operator ==(IPersona & otra) {
	return this->getID() == otra.getID();
}

bool Persona::operator !=(IPersona & otra) {
	return this->getID() != otra.getID();
}
