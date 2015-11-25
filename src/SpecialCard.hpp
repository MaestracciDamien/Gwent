#include "Card.hpp"
#include "Action.hpp"
#include <string>

class SpecialCard : public Card{
	private:
		Capacite *_capacite;

	public:
		void action();
		SpecialCard(int id,std::string n,Capacite *c);
};