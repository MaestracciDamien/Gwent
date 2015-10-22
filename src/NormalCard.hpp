#include "Card.hpp"
class NormalCard : public Card{
	private:
		Action _action;
		bool _hero;
		int _position;
		int _power;

	public:
		void action();
		bool isHero();
		int getPosition();
		int getPower();
};