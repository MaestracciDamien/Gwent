#include "NormalCard.hpp"
#include "Moral.hpp"
#include <cstddef>
int main(int argc, char const *argv[])
{
	Action a = new Moral();

	NormalCard c = new NormalCard(false,5,2,&a);
	return 0;
}