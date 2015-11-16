#include "Hand.hpp"

std::vector<Card> Hand::getCards(){
	return _hand;
}

void Hand::addCard(Card c){
	_hand.push_back(c);
}

Card Hand::removeCard(int id){
	int c=0;
	int pos=0;
	for (auto &i : _hand)
	    {
	    	if (i.getId()==id){
	    		pos=c;
	    		break;
	    	}
	    	++c;
	    }
}