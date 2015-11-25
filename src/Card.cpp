#include "Card.hpp"
#include <string>

Card::Card(int id,std::string s): _id(id), _nom(s){
	
}
int Card::getId(){
	return _id;
}
void Card::action(){
	
}