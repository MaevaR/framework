#include "stdafx.h"
#include "Modele.h"
#include <fstream>


Modele::Modele(string nomFichier)
{
	string line, key, attributs;
	//ouverture du fichier
	ifstream file(nomFichier);

	//lecture du fichier
	if (file.is_open())
	{
		while (getline(file, line))
		{
			int ind = line.find(" ");
			key = line.substr(0,ind);
			attributs = line.substr(ind++);
			/*switch(key)
			{
				case 'zone':
					break;
				case 'type':
					break;
				case 'etatsNnActif':
					break;
				case 'activite':
					break;
				case 'regleTransition':
					break;
				case 'regleActivite':
					break;
				case 'voisinage':
					break;
			}*/
			cout << key << " : "<< attributs<< '\n';
		}
		file.close();
	}
	else cout << "Impossible d'ouvrir le fichier";

}

void Modele::init()
{
	//initialisation fixée des cellules du celluleBag (t = 0)
	//chargement des états des cellules initale via un fichier d'initialisation
	
	//lecture du fichier
	string line;
	//ouverture du fichier d'initialisation
	ifstream file("initialisation.txt");

	//lecture du fichier
	if (file.is_open())
	{
		while (getline(file, line))
		{
			cout << line << '\n';
		}
		file.close();
	}
	else cout << "Impossible d'initialiser le modèle";
}

void Modele::generationSuiv()
{
	//Sur toutes les cellules : appel des fonctions de transition
	for (int i = 0; i < _celBag->all.size(); i++)
	for (int j = 0; j < _celBag->all[i].size(); i++)  transition(_celBag->all[i][j]);

	// Sur les cellules actives : appel des fonctions d'activités
	for (int i = 0; i < _celBag->actives.size(); i++) propagation(_celBag->actives[i]);

	_celBagTampon = _celBag;
}

void Modele::transition(Cellule * cel)
{
	int taille = _regleTransition.size() - 1;
	//parcours du vector _regleTransition
	for (int i = 0; i < _regleTransition.size(); i++)
	{
		int sommeRegle;
		int sommeReel;
		//parcours des voisins
		for (int j = 0; j < _voisinage.taille(); j++)
		{
			sommeRegle += pow(2,j)*(_celBag->find(cel->voisin(_voisinage(j))))->;
			sommeReel += pow(2,j)*(_celBag->find(cel->voisin(_voisinage(j))))->;
		}
		if (sommeRegle = sommeReel) cel->getEtat() = _regleTransition[i][taille];
	}
}

void Modele::propagation(Cellule * cel)
{
	int taille = _regleActivite.size() -1;
	//parcours du vector _regleActivite
	for (int i = 0; i < _regleActivite.size(); i++)
	{
		//parcours des voisins
		for (int j = 0; j < _voisinage.taille(); j++)
		{
			if () _celBag[][]->getEtat() = _regleActivite[i][taille];
		}
	}
}
//Affiche en mode texte dans la console
void Modele::affichageCelBag()
{
	for (int i = 0; i < _celBag->all.size(); i++)
	{
		for (int j = 0; j < _celBag->all[i].size(); i++)
		{
			cout << _celBag->all[i][j].geEtat() << " ";
		}
		cout << endl;
	}

}

Modele::~Modele(){}
