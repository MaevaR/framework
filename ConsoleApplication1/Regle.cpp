#include "stdafx.h"
#include "Regle.h"

Regle::Regle(){}

template <typename T> Regle::Regle(Etat<T> * eIni, Etat<T> * eFin)
{
	_etatInitial = eIni;
	_etatFinal = eFin;
}


Regle::~Regle()
{
}
