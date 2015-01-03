#pragma once

#include <string>

#include "Modele.h"
using namespace std;

class Simulation
{
private :
	int _t;
	Modele * _modele;
	
public:
	Simulation(string nomFichier);
	void init();
	void generationSuiv();
	void affichageModele();
	~Simulation();
};