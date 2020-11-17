#include "Vehicule.h"

using namespace std;

Vehicule::Vehicule(string presentation) : _presentation(presentation), _prix(0) {
}

void Vehicule::sePresenter() {
	cout << "Vehicule : " << _presentation << endl;
}

string Vehicule::get_presentation() {
	return _presentation;
}

void Vehicule::set_presentation(string presentation) {
	_presentation = presentation;
}

int Vehicule::get_prix() {
	return _prix;
}

Voiture::Voiture(string presentation) : Vehicule(presentation), _nbRoue(4) {
}

void Voiture::sePresenter() {
	cout << "Voiture : " << this->get_presentation() << endl;
}