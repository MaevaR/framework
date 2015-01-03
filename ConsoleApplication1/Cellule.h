#pragma once
#include "Etat.h"
#include "Activite.h"
#include "Coordonnee.h"

class Cellule
{
	private :
		Coordonnee *_location;
		template <typename T> Etat<T> * _etat;
		template <typename T> Activite<T> * _activite;
		
	public:
// ---- Constructeur
		template <typename T> Cellule(Coordonnee, Etat<T>, Activite<T>);

// ---- Getters
		Coordonnee * getLocation(){ return _location; }
		template <typename T> Etat<T> * getEtat(){ return _etat; }
		template <typename T> Activite<T>* getActivite(){ return _activite; }

		//Fonction virtuelle pure ???

// ---- Destructeur
		~Cellule();
};

