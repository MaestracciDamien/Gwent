class Pit{
	private:
		vector<Card> _vector;

	public:
		vector<Card> getCards();
		void addCard(Card c);
		Card removeCard(int id);
};