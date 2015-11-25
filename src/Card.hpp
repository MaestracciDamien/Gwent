#ifndef CARD_H
#define CARD_H

class Card{
	private:
		int _id;
		string _nom;

	public:
		int getId();
		Card(int id,string s);
		virtual void action()=0;
};

#endif