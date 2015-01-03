#include "stdafx.h"
#include "Cellule.h"

template <typename T>
Cellule::Cellule(Coordonnee location, Etat<T> etat, Activite<T> activite)
{
	_location = location;
	_etat = etat;
	_activite = activite;
}


Cellule::~Cellule()
{
}
