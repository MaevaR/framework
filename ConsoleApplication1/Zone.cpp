#include "stdafx.h"
#include "Zone.h"
#include <iostream>


Zone::Zone(int largeur, int hauteur)
{
	_largeur = largeur;
	_hauteur = hauteur;
}

void Zone::ajouter(string matrice)
{
	double ** matrice = new double[][];
	int i = 0, j = 0;

	//Parcours du string
	while ()
	{
		matrice[i][j] = ;

		if (i >= _largeur)
		{
			j++;
			i =0
		}
		else i++;
	}
}

double ** Zone::caracteristique(int i)
{
	return _caracteristique[i];
}


Zone::~Zone()
{
}
