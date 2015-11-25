#include "NormalCard.hpp"
#include <string>

NormalCard::NormalCard(int id,std::string s,bool h, int pos, int pow, Action * a) :Card(id,s), _hero(h), _position(pos), _power(pow), _action(a){

}


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