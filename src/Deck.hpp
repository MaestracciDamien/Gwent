class Deck{
	private:
		stack<Card> _deck;

	public:
		void addCard(Card c);
		Card getCard();
		void shuffle();
};