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
	Deck *d = new Deck();
	d->addCard(c);
	Card *e = d->getCard();
	
	cout<< e->getId() << endl;
	return 0;
}