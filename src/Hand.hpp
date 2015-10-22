#include <vector>
#include "Card.hpp"
class Hand{
	private:
		std::vector<Card> _hand;

	public:


		//retourne la liste des cartes
		std::vector<Card> getCards();
		void addCard(Card c);
		Card removeCard(int id);
};