#include "Card.hpp"
#include "Action.hpp"

class SpecialCard : public Card{
	private:
		Action *_action;

	public:
		void action();
};