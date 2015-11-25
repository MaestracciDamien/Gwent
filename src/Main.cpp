#include "NormalCard.hpp"
#include "Deck.hpp"
#include "Moral.hpp"
#include <cstddef>
#include <iostream> 

using namespace std; 
int main(int argc, char const *argv[])
{
	Action *a = new Moral();

	NormalCard *c = new NormalCard(42,false,5,2,a);
	//c->action();
	Factory *f = new Factory();
	Deck d = f->creerDeck() ;
	
	for (int i = 0; i < 25; ++i)
	{
		cout<< d.getCard()->getId() << endl;
	}
	cout<< e->getId() << endl;
	return 0;
}