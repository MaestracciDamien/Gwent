#include <stack>
#include "Card.hpp"
class Deck{
	private:
		std::stack<Card> _deck;

	public:
		Deck();
		void addCard(Card c);
		Card getCard();
		void shuffle();
};