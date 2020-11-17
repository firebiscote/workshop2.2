#include "Vehicule.h"

int main() {
	Vehicule truc;
	truc.sePresenter();
	Voiture voiture;
	voiture.sePresenter();
	Vehicule* truc2;
	truc2 = new Voiture();
	truc2->sePresenter();
}