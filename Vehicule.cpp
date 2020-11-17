#include "Vehicule.h"

using namespace std;

Vehicule::Vehicule(string presentation) : _presentation(presentation) {
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

Voiture::Voiture(string presentation) : Vehicule(presentation) {
}

void Voiture::sePresenter() {
	cout << "Voiture : " << this->get_presentation() << endl;
}