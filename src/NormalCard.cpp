#include "NormalCard.hpp"

NormalCard::NormalCard(bool h, int pos, int pow, Action &a) : _hero(h), _position(pos), _power(pow), _action(&a){
	this->action();
};

void NormalCard::action(){
	_action->action();
}

bool NormalCard::isHero(){
	return _hero;
}

int NormalCard::getPosition(){
	return _position;
}

int NormalCard::getPower(){
	return _power;
}