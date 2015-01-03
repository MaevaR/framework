#pragma once
class Coordonnee
{
private :
	int _x;
	int _y;

public:
	Coordonnee(int x = 0, int y = 0);
	int const x() const;
	int const y() const;
	~Coordonnee();
};

