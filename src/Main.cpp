#include "NormalCard.hpp"
#include "Moral.hpp"
#include <cstddef>
int main(int argc, char const *argv[])
{
	Action *a = new Moral();

	NormalCard *c = new NormalCard(42,false,5,2,a);
	c->action();
	return 0;
}