#pragma once
#include "Coordonnee.h"

class Voisin
{
private :
	int _x;
	int _y;
public:
	Voisin(int x, int y);
	Coordonnee * calculeVoisin(Voisin);
	~Voisin();
};

