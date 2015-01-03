#pragma once

#include <vector>
#include <iostream>

#include "Zone.h"
#include "Simulation.h"
#include "RegleActivite.h"
#include "RegleTransition.h"
#include "EtatNonActif.h"
#include "Activite.h"
#include "CelluleBag.h"
#include "Voisinage.h"

using namespace std;
class Modele
{
private :
	Zone * _zone;
	CelluleBag * _celBag;
	CelluleBag * _celBagTampon;
	template <typename T> vector<EtatNonActif<T> *> _etatsNonActif;
	template <typename T> vector<Activite<T> *> _activites;
	vector<RegleTransition *> _regleTransition;
	vector<RegleActivite *> _regleActivite;
	Voisinage _voisinage;

public:
	Modele(string nomFichier);
	void init();
	void generationSuiv();
	void transition(Cellule * cel);
	void propagation(Cellule * cel);
	void affichageCelBag();
	~Modele();
};

