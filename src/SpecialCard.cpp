#include "SpecialCard.hpp"


SpecialCard::SpecialCard(int id,string s,Capacite *c) :Card(id,s), _capacite(c){

}


void SpecialCard::action(){
	_capacite->action();
}

