#include "Garage.h"

using namespace std;

int main() {
	Vehicule *truc, *truc3;
	Voiture *truc2;
	truc = new Vehicule("truc");
	truc2 = new Voiture("truc2");
	truc3 = new Vehicule("truc3");
	Garage *garage;
	garage = new Garage(3);
	garage->ajouterVehicule(truc);
	garage->ajouterVehicule(truc2);
	garage->ajouterVehicule(truc3);
	garage->action();
	delete garage;

	//changement
}