#pragma once
#include "stdafx.h"
#include "NodoLista.h"
#include "ILista.h"

using namespace std;

template<class T>
class Lista : public ILista < T > {

private:

	INodoLista<T> * head;
	INodoLista<T> * tail;

public:
	Lista(){
		head = NULL;
		tail = NULL;
	}

	virtual ~Lista(){
	}

	void insertarFinal(T elemento){
		INodoLista<T> * nodo = new NodoLista<T>(elemento);
		if (head == NULL){
			head = nodo;
			tail = nodo;
		}
		else{
			tail->setSiguiente(nodo);
			dynamic_cast<NodoLista<T>*>(nodo)->setAnterior(tail);
			tail = nodo;
		}
	}


	void eliminarFinal(){
		INodoLista<T> * temp = tail;
		if (tail != NULL && head != tail) {
			tail = dynamic_cast<NodoLista<T>*>(tail)->getAnterior();
			tail->setSiguiente(NULL);
		}
		else{
			head = NULL;
			tail = NULL;
		}
		delete temp;
	}

	T get(int index){
		INodoLista<T> * temp = head;
		while (index-- > 0) {
			temp = temp->getSiguiente();
		}
		return temp->getActual();
	}

	int cantidadElementos(){
		int size = 0;
		if (head != NULL){
			size++;
			INodoLista<T> * temp = head;
			while (temp->getSiguiente() != NULL){
				temp = temp->getSiguiente();
				size++;
			}
		}
		return size;
	}

	bool contiene(T elemento){
		INodoLista<T> * nodo = new NodoLista<T>(elemento);
		INodoLista<T> * temp = head;
		bool resultado = false;
		while (temp != NULL){
			if (temp->getActual() == nodo->getActual()){
				resultado = true;
			}
			temp = temp->getSiguiente();
		}
		return resultado;
	}


};
