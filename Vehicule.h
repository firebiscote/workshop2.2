#pragma once

#include <iostream>

class Vehicule {
public:
	Vehicule(std::string presentation);
	virtual void sePresenter();
	std::string get_presentation();
	void set_presentation(std::string presentation);
private:
	std::string _presentation;
};

class Voiture : public Vehicule {
public:
	Voiture(std::string presentation);
	virtual void sePresenter();
private:
};

