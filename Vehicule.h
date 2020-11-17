#pragma once

#include <iostream>

class Vehicule {
public:
	Vehicule();
	virtual void sePresenter(std::string presentation);
	std::string get_presentation();
	int get_prix();
private:
	std::string _presentation;
	int _prix;
};

class Voiture : public Vehicule {
public:
	Voiture();
	virtual void sePresenter();
private:
	int _nbRoue;
};

