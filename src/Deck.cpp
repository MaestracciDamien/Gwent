#include "Deck.hpp"

void Deck::addCard(Card c){

}

Card Deck::getCard(){
	Card c = _deck.top();
	_deck.pop();
	return c;
}

void Deck::shuffle(){

}