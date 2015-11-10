#include "Deck.hpp"

Deck::Deck(){
	_deck = new std:stack<Card>();
}

void Deck::addCard(Card c){
	_deck.push(c);
}

Card Deck::getCard(){
	Card c = _deck.top();
	_deck.pop();
	return c;
}

void Deck::shuffle(){
	//TODO
}