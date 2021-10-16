#pragma once
#include <string>

class Mario {
private:
	bool invincible;
	std::string etat;
	char nom;
public:
	Mario();
	void estBlesse();
	std::string getEtat() const;
	bool estInvincible() const;
	void mangerChampignon();
	void mangerFleurFeu();
	void mangerFleurGlace();
	void attraperEtoile();
	void finPouvoirEtoile();
	std::string direPhraseVictoire() const;
};