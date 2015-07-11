#pragma once

#include "IPersona.h"

using namespace std;

class Persona : public IPersona{

private:
	long ID;
	char * nombre;

public:
	Persona();
	~Persona();
	void setID(long);
	long getID();
	void setNombre(char *);
	char * getNombre();
	bool operator==(IPersona &);
	bool operator!=(IPersona &);

};

