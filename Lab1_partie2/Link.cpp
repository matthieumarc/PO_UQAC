#include "Link.h"
#include <iostream>
using namespace std;

void Link::nouvellePartie() {
	vie = 12;
	nbTriForce = 0;
	item it;

	it.id = " ";
	it.nom = " ";
	it.pouvoir = " ";
	for (int i = 0; i < 3; i++)inventaire[i] = it;
}

void Link::ajouterInventaire(std::string id, std::string nom, std::string pouvoir) {
	int i = 0;



	while (inventaire[i].id.compare(" ") != 0  && i<2) {
		i++;
	}

	inventaire[i].id = id;
	inventaire[i].nom = nom;
	inventaire[i].pouvoir = pouvoir;
	

	
}

void Link::supprimerInventaire(std::string idItem) {
	int i = 0;
	
	while (inventaire[i].id.compare(idItem) && i<3) {
		i++;
	}
	if (i < 3) {
		inventaire[i].id = " ";
		inventaire[i].nom = " ";
		inventaire[i] .pouvoir = " ";
	}

}

std::string Link::getInventaire() const {
	std::string res = "Inventaire : \n";
	for (int i = 0; i < 3; i++) {
		if (inventaire[i].id == " ") {
			res = res + "<Vide> \n";
		}
		else {
			res = res + inventaire[i].id + " : " + inventaire[i].nom + " - " + inventaire[i].pouvoir + " \n";
		}
	}
	return res;
}

std::string Link::attaquerEpee() const {
	return " Attaque Epée ! ";
}

std::string Link::lancerBoomerang() const {
	return " Lancer Boomerang ! ";
}

void Link::ajouterTriForce() {
	if (nbTriForce < MAX_TRI_FORCE) {
		nbTriForce += 1;
	}
}

bool Link::peutAccederDonjonGanonPourSauverZelda() const {
	if (nbTriForce == MAX_TRI_FORCE) {
		return true;
	}
	else {
		return false;
	}
}

char Link::getDirection() {
	return direction;
}

void Link::tournerNord() {
	direction = 'N';
}

void Link::tournerSud() {
	direction = 'S';
}

void Link::tournerEst() {
	direction = 'E';
}

void Link::tournerOuest() {
	direction = 'O';
}

int Link::getNombreVies() const {
	return vie;
}

void Link::estBlesse(int degat) {
	if (vie - degat <= 0) {
		vie = 0;
	}
	else {
		vie = vie - degat;
	}
}

bool Link::enVie() const {
	if (vie > 0) {
		return true;
	}
	else {
		return false;
	}
}