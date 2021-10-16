# include "Mario.h"

Mario::Mario() {
	etat = "petit";
	invincible = false;
}

void Mario::estBlesse() {
	if (!estInvincible()) {
		if (etat == "petit") {
			etat = "mort";
		}
		else if (etat == "gros") {
			etat = "petit";
		}
		else if (etat == "grosBouleFeu" || etat == "grosBouleGlace") {
			etat = "gros";
		}
	}
}

std::string Mario::getEtat() const {
	return etat;
}

bool Mario::estInvincible() const {
	return invincible;
}

void Mario::mangerChampignon() {
	if (etat == "petit") {
		etat = "gros";
	}
}

void Mario::mangerFleurFeu() {
	etat = "grosBouleFeu";
}

void Mario::mangerFleurGlace() {
	etat = "grosBouleGlace";
}

void Mario::attraperEtoile() {
	invincible = true;
}

void Mario::finPouvoirEtoile() {
	invincible = false;
}

std::string Mario::direPhraseVictoire() const {
	return " Victoire ! ";
}