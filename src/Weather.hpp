#include "Capacite.hpp"

class Weather : public Capacite{
private:
	int _pos;
	public:
		void action();
		Weather(int p);
};