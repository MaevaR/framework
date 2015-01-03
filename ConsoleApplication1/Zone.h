#pragma once

class Zone
{
private :
	int _largeur;
	int _hauteur;
	vector<double**> _caracteristique;
public:
	Zone(int largeur, int hauteur);
	int getLargeur(){return _largeur;}
	int hethauteur(){ return _hauteur; }
	void ajouter(string);
	double ** caracteristique(int i);
	~Zone();
};

