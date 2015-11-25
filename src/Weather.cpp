#include "Weather.hpp"
#include <iostream>

Weather::Weather(int p): _pos(p){
}
void Weather::action(){
	std::cout<< "Weather" << std::endl;
}

