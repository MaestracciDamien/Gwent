#include "Card.hpp"
#include "Action.hpp"

class SpecialCard : public Card{
	private:
		Capacite *_capacite;

	public:
		void action();
};