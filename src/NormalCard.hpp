#include "Card.hpp"
#include "Action.hpp"
#include <string>
class NormalCard : public Card{
	private:
		
		bool _hero;
		int _position;
		int _power;
		Action *_action;

	public:
		NormalCard(int id,std::string s, bool h, int pos, int pow, Action *a);
		void action();
		bool isHero();
		int getPosition();
		int getPower();
};