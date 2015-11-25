#include "NormalCard.hpp"
#include "Deck.hpp"
#include "Moral.hpp"
#include "Factory.hpp"
#include <cstddef>
#include <iostream> 

using namespace std; 
int main(int argc, char const *argv[])
{
	Action *a = new Moral();

	//c->action();
	Factory *f = new Factory();
	Deck d = f->creerDeck() ;
	
	for (int i = 0; i < 25; ++i)
	{
		d.getCard()->action();
	}
	return 0;
}