#pragma once

#include <iostream>

class Vehicule {
public:
	Vehicule();
	virtual void sePresenter();
	int get_prix();
private:
	int _prix;
};

class Voiture : public Vehicule {
public:
	Voiture();
	virtual void sePresenter();
private:
	int _nbRoue;
};

