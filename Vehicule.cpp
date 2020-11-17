#include "Vehicule.h"

using namespace std;

Vehicule::Vehicule() : _prix(0) {
}

void Vehicule::sePresenter() {
	cout << "Vehicule : " << _prix << endl;
}

int Vehicule::get_prix() {
	return _prix;
}

Voiture::Voiture() : Vehicule(), _nbRoue(4) {
}

void Voiture::sePresenter() {
	cout << "Voiture : " << this->get_prix() << " " << _nbRoue << endl;
}