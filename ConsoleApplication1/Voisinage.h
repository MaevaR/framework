#pragma once
#include <vector>

using namespace std;

#include "Voisin.h"

class Voisinage
{
private :
	vector<Voisin *> _voisins;
public:
	Voisinage();
	void ajouter(int x, int y);
	int taille(){ return _voisins.size(); }
	Voisin * get(int i){ return _voisins[i]; };
	~Voisinage();
};

