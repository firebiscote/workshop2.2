#pragma once

#include "Vehicule.h"
#include <vector>

class Garage {
public:
	Garage(int taille);
	void ajouterVehicule(Vehicule* nouveau);
	void ajouterVehicule(Vehicule* nouveau, int index);
	void action();
private:
	std::vector<Vehicule*> _garage;
};

