#pragma once
#include "Regle.h"
#include "Activite.h"

class RegleActivite : Regle
{
public:
	template <typename T> RegleActivite(Activite<T> *, Activite<T> *);
	~RegleActivite();
};

