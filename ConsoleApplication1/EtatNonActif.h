#pragma once

#include "Etat.h"

template <typename T>
class EtatNonActif : public Etat<T>
{
public:
	EtatNonActif();
	~EtatNonActif();
};

template <typename T> EtatNonActif<T>::EtatNonActif(){}

template <typename T> EtatNonActif<T>::~EtatNonActif(){}