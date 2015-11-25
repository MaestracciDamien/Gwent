#include "Factory.hpp"
#include "Moral.hpp"
#include "Spy.hpp"
#include "NormalAction.hpp"
#include "Scorch.hpp"
#include "Bond.hpp"
#include "Deck.hpp"
#include "Horn.hpp"
#include "Weather.hpp"
#include "ClearWeather.hpp"
#include "NormalCard.hpp"
#include "SpecialCard.hpp"


Deck  Factory::creerDeck(){

	Deck *e = new Deck();
	Action *n = new NormalAction();
	Action *s = new Spy();
	Action *sc = new Scorch();
	Action *b = new Bond();
	Action *m = new Moral();
	Capacite *h = new Horn();
	Capacite *c = new ClearWeather();
	e->addCard(new NormalCard(1,"Vernon Roche",true,1,10,n));
	e->addCard(new NormalCard(2,"John Natalis",true,1,10,n));
	e->addCard(new NormalCard(3,"Esteread Thyssen",true,1,10,n));
	e->addCard(new NormalCard(4,"Philippa Eilhart",true,2,10,n));
	e->addCard(new NormalCard(5,"Thaler",false,3,1,s));
	e->addCard(new NormalCard(6,"Ves",false,1,5,n));
	e->addCard(new NormalCard(7,"Siegfried of Denesle",false,1,5,n));
	e->addCard(new NormalCard(8,"Yarpen Zigrin",false,1,2,n));
	e->addCard(new NormalCard(9,"Sigsmund Dijkstra",false,1,4,s));
	e->addCard(new NormalCard(10,"Keira Metz",false,2,5,n));
	e->addCard(new NormalCard(11,"Sile de Tansarville",false,2,5,n));
	e->addCard(new NormalCard(12,"Sabrina Glevissig",false,2,4,n));
	e->addCard(new NormalCard(13,"Sheldon Skaggs",false,2,4,n));
	e->addCard(new NormalCard(14,"Dethmold",false,2,6,n));
	e->addCard(new NormalCard(15,"Prince Stennis",false,1,5,s));
	e->addCard(new NormalCard(16,"Trebuchet",false,3,6,n));
	e->addCard(new NormalCard(19,"Crinfrid Reavers Dragon Hunter",false,1,5,b));
	e->addCard(new NormalCard(20,"Redanian foot soldier",false,1,1,n));
	e->addCard(new NormalCard(22,"Catapult",false,3,8,b));
	e->addCard(new NormalCard(23,"Balista",false,3,6,n));
	e->addCard(new NormalCard(24,"Kaedweni Siege expert",false,3,1,m));
	e->addCard(new NormalCard(25,"Villentretenmerth",false,1,7,sc));
	e->addCard(new SpecialCard(26,"Commander Horn",h));
	e->addCard(new SpecialCard(27,"Bitting frost",new Weather(1)));
	e->addCard(new SpecialCard(28,"Impenetrable Frog",new Weather(2)));
	e->addCard(new SpecialCard(29,"TorrentialRain",new Weather(3)));
	e->addCard(new SpecialCard(30,"Clear Weather",c));
	e->addCard(new SpecialCard(30,"Clear Weather",c));





}