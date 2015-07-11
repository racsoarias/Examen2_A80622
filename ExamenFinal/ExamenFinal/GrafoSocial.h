#pragma once

#include "IGrafoSocial.h"

using namespace std;

class GrafoSocial : IGrafoSocial{

public:
	GrafoSocial();
	~GrafoSocial();

	void aleatorizarGrafo();
	IPersona * getPersonaAleatoria();
	void agregarPersona(IPersona *);
	bool sonAmigos(IPersona *, IPersona *);
	void establecerAmistad(IPersona *, IPersona *);
};

