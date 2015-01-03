#include "stdafx.h"
#include "CelluleBag.h"


CelluleBag::CelluleBag(){}

Cellule * CelluleBag::find(Coordonnee * location)
{
	return _cellules[location->x()][location->y()];
}

Cellule * CelluleBag::voisin(Cellule * cel)
{
	return find(cel->getLocation());
}
CelluleBag::~CelluleBag()
{
	_cellules.clear();
}
