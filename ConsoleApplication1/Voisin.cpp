#include "stdafx.h"
#include "Voisin.h"


Voisin::Voisin(int x, int y)
{
	_x = x;
	_y = y;
}

Coordonnee * Voisin::calculeVoisin(Voisin v)
{
	return new Coordonnee(v.x()+_x, v.y()+_y);
}

Voisin::~Voisin()
{
}
