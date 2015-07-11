#pragma once
#include "stdafx.h"
#include "INodoLista.h"

using namespace std;

template<class T>
class NodoLista : public INodoLista <T>{

	//template <class T>
	//friend class Lista;

private:
	T actual;
	INodoLista<T> *next, *prev;

public:
	NodoLista(T elemento) {
		this->actual = elemento;
		next = NULL;
		prev = NULL;
	}

	virtual ~NodoLista(){}

	void setActual(T actual){
		this->actual = actual;
	}

	T getActual(){
		return this->actual;
	}

	void setSiguiente(INodoLista<T>* siguiente){
		this->next = siguiente;
	}

	INodoLista<T>* getSiguiente(){
		return this->next;
	}

	void setAnterior(INodoLista<T>* anterior){
		this->prev = anterior;
	}

	INodoLista<T>* getAnterior(){
		return this->prev;
	}
};

