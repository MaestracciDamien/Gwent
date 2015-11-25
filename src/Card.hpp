#ifndef CARD_H
#define CARD_H
#include <string>

class Card{
	private:
		int _id;
		std::string _nom;

	public:
		int getId();
		Card(int id,std::string s);
		virtual void action();
};

#endif