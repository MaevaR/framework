#include "stdafx.h"
#include "Simulation.h"


Simulation::Simulation(string nomFichier)
{
	_modele = new Modele(nomFichier);
}

void Simulation::init()
{
	_t = 0;
	_modele->init();
}

void Simulation::generationSuiv()
{
	_modele->generationSuiv();
	_t++;
}

void Simulation::affichageModele()
{
	_modele->affichageCelBag();
}

Simulation::~Simulation()
{
}
