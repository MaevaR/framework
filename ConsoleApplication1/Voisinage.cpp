#include "stdafx.h"
#include "Voisinage.h"


Voisinage::Voisinage()
{
}

void Voisinage::ajouter(int x, int y)
{
	Voisin * nouv = new Voisin(x, y);
	_voisins.push(nouv);

}

Voisinage::~Voisinage()
{
}
