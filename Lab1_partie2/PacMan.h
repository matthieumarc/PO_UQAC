#pragma once
#include <string>

class PacMan {
private:
	char direction;
	bool invincible;
public:
	PacMan();
	void nouvellePartie();
	char getDirection();
	void setDirection(char d);
	bool estInvincible();
	std::string attaquer();
	void avalerSuperPacGomme();
	void finInvincibilite();
	std::string direPhraseVictoire();
};