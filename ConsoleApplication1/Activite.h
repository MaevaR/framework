#pragma once
#include "Etat.h"

template <typename T>
class Activite : public Etat<T>
{
public:
	Activite();
	~Activite();
};

template <typename T> Activite<T>::Activite(){}

template <typename T> Activite<T>::~Activite(){}