#include "Card.hpp"
class NormalCard : public Card{
	private:
		Action _action;
		bool _hero;
		int _position;
		int _power;

	public:
		NormalCard(bool h, int pos, int pow, Action a);
		void action();
		bool isHero();
		int getPosition();
		int getPower();
};