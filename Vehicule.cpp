#include "Vehicule.h"

using namespace std;

Vehicule::Vehicule() : _prix(0) {
}

void Vehicule::sePresenter(string presentation) {
	cout << "Vehicule : " << presentation << " " << _prix << endl;
}

string Vehicule::get_presentation() {
	return _presentation;
}

int Vehicule::get_prix() {
	return _prix;
}

Voiture::Voiture() : Vehicule(), _nbRoue(4) {
}

void Voiture::sePresenter() {
	cout << "Voiture : " << this->get_presentation() << " " << this->get_prix() << " " << _nbRoue << endl;
}