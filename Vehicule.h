#pragma once

#include <iostream>

class Vehicule {
public:
	Vehicule(std::string presentation);
	virtual void sePresenter();
	std::string get_presentation();
	void set_presentation(std::string presentation);
	int get_prix();

private:
	std::string _presentation;
	int _prix;
};

class Voiture : public Vehicule {
public:
	Voiture(std::string presentation);
	virtual void sePresenter();
private:
	int _nbRoue;
};

