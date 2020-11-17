#pragma once

#include "Vehicule.h"
#include <vector>
#include <iostream>

class Garage {
public:
	Garage(int taille);
	~Garage();
	void ajouterVehicule(Vehicule* nouveau);
	void ajouterVehicule(Vehicule* nouveau, int index);
	void action();
private:
	std::vector<Vehicule*> _garage;
};

