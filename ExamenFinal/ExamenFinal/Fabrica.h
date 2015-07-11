
#pragma once

#include "IFabrica.h"
#include "ILista.h"
#include "IGrafoSocial.h"

class Fabrica :
	public IFabrica {

public:
	
	Fabrica();
	~Fabrica();

	IPersona * crearPersona();
	ILista<int> * crearListaInt();
	ILista<IPersona *> * crearListaPersona();
	IGrafoSocial * crearGrafoSocial();

	void borrarPersona(IPersona *);
	void borrarListaInt(ILista<int> *);
	void borrarListaPersona(ILista<IPersona *> *);
	void borrarGrafoSocial(IGrafoSocial *);

};

