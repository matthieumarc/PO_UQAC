# include "PacMan.h"

PacMan::PacMan(){}

void PacMan::nouvellePartie() {
	direction = 'H';
	invincible = false;
}

char PacMan::getDirection() {
	return direction;
}

void PacMan::setDirection(char d) {
	if (d == 'H' || d == 'B' || d == 'G' || d == 'D') {
		direction = d;
	}
}

bool PacMan::estInvincible() {
	return invincible;
}

std::string PacMan::attaquer() {
	std::string val_attaque;
	if (estInvincible()) {
		val_attaque = ";-)";
	}
	else {
		val_attaque = ":-(";
	}
	return val_attaque;
}

void PacMan::avalerSuperPacGomme() {
	invincible = true;
}

void PacMan::finInvincibilite() {
	invincible = false;
}

std::string PacMan::direPhraseVictoire() {
	return " Victoire ! ";
}