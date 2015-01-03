#pragma once

#include <vector>

using namespace std;

#include "Cellule.h"

class CelluleBag
{
private :
	vector<vector<Cellule *> > _cellules;
	vector<Cellule *> _cellulesActives;

public:
	CelluleBag();

// Getters
	vector<vector<Cellule *> > all() { return _cellules; };
	vector<Cellule *> actives() { return _cellulesActives; };
	Cellule * find(Coordonnee * location);
	Cellule * voisin(Cellule * cel);
	~CelluleBag();
};

