#include "NormalCard.hpp"

NormalCard::NormalCard(bool h, int pos, int pow, Action &a) : _hero(h), _position(pos), _power(pow), _action(a){

};

void NormalCard::action(){
	_action.action();
}

bool NormalCard::isHero(){
	return _hero;
}

int NormalCard::getPosition(){
	return _position;
}

int getPower(){
	return _power;
}