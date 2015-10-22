class Hand{
	private:
		vector<Card> _hand;

	public:


		//retourne la liste des cartes
		vector<Card> getCards();
		void addCard(Card c);
		Card removeCard(int id);
};