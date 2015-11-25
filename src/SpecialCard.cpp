#include "SpecialCard.hpp"
#include <string>

SpecialCard::SpecialCard(int id,std::string s,Capacite *c) :Card(id,s), _capacite(c){

}


void SpecialCard::action(){
	_capacite->action();
}

