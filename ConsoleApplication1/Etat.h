#pragma once

template <typename T>
class Etat
{
private :
	T _etat;
public:
	Etat(T etat);
	T etat() const;
	//fonction virtuelle pure ????
	virtual bool  actif?() = 0;
	~Etat();

};

template <typename T> Etat<T>::Etat(T etat)
{}

template <typename T> T Etat<T>::etat() const { return _etat; }

template <typename T> Etat<T>::~Etat()
{}