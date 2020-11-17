#include "Garage.h"

Garage::Garage(int taille) {
	_garage.resize(taille);
}

void Garage::ajouterVehicule(Vehicule* nouveau) {
	for (int i = 0; i < _garage.size(); i++) {
		if (_garage[i] == NULL) {
			_garage[i] = nouveau;
			break;
		}
	}
}

void Garage::ajouterVehicule(Vehicule* nouveau, int index) {
	_garage[index] = nouveau;
}

void Garage::action() {
	for (int i = 0; i < _garage.size(); i++) {
		_garage[i]->sePresenter();
	}
}