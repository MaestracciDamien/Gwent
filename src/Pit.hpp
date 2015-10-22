#include <vector>
#include "Card.hpp"

class Pit{
	private:
		std::vector<Card> _vector;

	public:
		std::vector<Card> getCards();
		void addCard(Card c);
		Card removeCard(int id);
};