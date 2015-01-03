#pragma once
#include <vector>

#include "Regle.h"
#include "Etat.h"

class RegleTransition : public Regle
{
private :
	template <typename T> vector<Etat<T> *> _etatsVoisins;
public:
	template <typename T> RegleTransition(Etat<T> *, Etat<T> *);
	template <typename T> void ajouterEtat(Etat<T> *);
	~RegleTransition();
};

