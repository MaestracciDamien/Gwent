class Ligne{
private:
	int value;
	bool boost;
	bool meteo;
	vector<Card> _cartes;
public:
	void calcValue();
	void addCard(Card c);
	Card removeCard(int idCard);
};