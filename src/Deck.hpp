#ifndef DECK_H
#define DECK_H
#include <stack>
#include "Card.hpp"
class Deck{
	private:
		std::stack<Card*> *_deck;

	public:
		Deck();
		void addCard(Card* c);
		virtual Card* getCard();
		void shuffle();
};
#endif