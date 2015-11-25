#include "Card.hpp"

Card::Card(int id,string s): _id(id), _nom(s){
	
}
int Card::getId(){
	return _id;
}
