#include "Garage.h"

using namespace std;

int main() {
	Vehicule* truc, * truc2, * truc3;
	truc = new Vehicule();
	truc2 = new Vehicule();
	truc3 = new Vehicule();
	Garage garage(3);
	garage.ajouterVehicule(truc);
	garage.ajouterVehicule(truc2);
	garage.ajouterVehicule(truc3);
	garage.action();
}