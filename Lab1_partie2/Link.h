#pragma once
#include <string>

class Link {
private:
	char direction;
	int vie;
	struct item {
		std::string id;
		std::string nom;
		std::string pouvoir;
	};
	item inventaire[3];
	int nbTriForce;
	const int MAX_TRI_FORCE = 8;
public:
	void nouvellePartie();
	void ajouterInventaire(std::string id, std::string nom, std::string pouvoir);
	void supprimerInventaire(std::string idItem);
	std::string getInventaire();
	std::string attaquerEpee();
	std::string lancerBoomerang();
	void ajouterTriForce();
	bool peutAccederDonjonGanonPourSauverZelda();
	char getDirection();
	void tournerNord();
	void tournerSud();
	void tournerEst();
	void tournerOuest();
	int getNombreVies();
	void estBlesse(int degat);
	bool enVie();
};