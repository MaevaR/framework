#include "stdafx.h"
#include "RegleTransition.h"

template <typename T> RegleTransition::RegleTransition(Etat<T> * eIni, Etat<T> * eFin) : Regle(eIni, eFIn)
{}

template <typename T> void RegleTransition::ajouterEtat(Etat<T> * e)
{
	_etatsVoisins.push(e);
}

RegleTransition::~RegleTransition()
{
}
