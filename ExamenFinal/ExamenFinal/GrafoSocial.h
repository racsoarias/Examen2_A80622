#pragma once

#include "IGrafoSocial.h"
#include "INodoGrafoSocial.h"
#include "NodoGrafoSocial.h"
#include "IPersona.h"
#include "Persona.h"
#include "Lista.h"


using namespace std;

class GrafoSocial : public IGrafoSocial{

public:
	ILista<INodoGrafoSocial *> * todos;

	GrafoSocial();
	~GrafoSocial();

	void aleatorizarGrafo();
	IPersona * getPersonaAleatoria();
	void agregarPersona(IPersona *);
	bool sonAmigos(IPersona *, IPersona *);
	void establecerAmistad(IPersona *, IPersona *);
};

