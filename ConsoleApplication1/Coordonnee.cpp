#include "stdafx.h"
#include "Coordonnee.h"


Coordonnee::Coordonnee(int x, int y)
{
	_x = x;
	_y = y;
}

int const Coordonnee::x() const
{
	return _x;
}

int const Coordonnee::y() const 
{
	return _y;
}

Coordonnee::~Coordonnee()
{
}
