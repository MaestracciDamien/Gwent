#include <vector>
#include "Card.hpp"
class Ligne{
private:
	int value;
	bool boost;
	bool meteo;
	std::vector<Card> _cartes;
public:
	void calcValue();
	void addCard(Card c);
	Card removeCard(int idCard);
};