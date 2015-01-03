#pragma once
#include "Etat.h"

class Regle
{
private:
	template <typename T> Etat<T> * _etatInitial;
	template <typename T> Etat<T> * _etatFinal;
public:
	Regle();
	template <typename T> Regle(Etat<T> *, Etat<T>*);
	//fonction virtuelle pure pour classe abstraite
	~Regle();
};

