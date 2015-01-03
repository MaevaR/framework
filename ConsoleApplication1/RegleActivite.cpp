#include "stdafx.h"
#include "RegleActivite.h"

//inutile ???
template <typename T> RegleActivite::RegleActivite(Activite<T> * eIni, Activite<T> * eFin) : Regle(eIni, eFin)
{}

RegleActivite::~RegleActivite()
{
}
