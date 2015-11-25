#include "Factory.hpp"

Deck  Factory::creerDeck(){
	Deck e* = new Deck();
	//int id,bool h, int pos, int pow, Action * a
	NormalAction *n = new NormalAction();
	Spy *s = new Spy();
	Scorch *sc = new Scorch();
	Bond *b = new Bond();
	Moral *m = new Moral();
	e->addCard(new NormalCard(01,"Vernon Roche",true,1,10,*n));
	e->addCard(new NormalCard(02,"John Natalis",true,1,10,*n));
	e->addCard(new NormalCard(03,"Esteread Thyssen",true,1,10,*n));
	e->addCard(new NormalCard(04,"Philippa Eilhart",true,2,10,*n));
	e->addCard(new NormalCard(05,"Thaler",false,3,1,*s));
	e->addCard(new NormalCard(06,"Ves",false,1,5,*n));
	e->addCard(new NormalCard(07,"Siegfried of Denesle",false,1,5,*n));
	e->addCard(new NormalCard(08,"Yarpen Zigrin",false,1,2,*n));
	e->addCard(new NormalCard(09,"Sigsmund Dijkstra",false,1,4,*s));
	e->addCard(new NormalCard(10,"Keira Metz",false,2,5,*n));
	e->addCard(new NormalCard(11,"Sile de Tansarville",false,2,5,*n));
	e->addCard(new NormalCard(12,"Sabrina Glevissig",false,2,4,*n));
	e->addCard(new NormalCard(13,"Sheldon Skaggs",false,2,4,*n));
	e->addCard(new NormalCard(14,"Dethmold",false,2,6,*n));
	e->addCard(new NormalCard(15,"Prince Stennis",false,1,5,*s));
	e->addCard(new NormalCard(16,"Trebuchet",false,3,6,*n));
	e->addCard(new NormalCard(19,"Crinfrid Reavers Dragon Hunter",false,1,5,*b));
	e->addCard(new NormalCard(20,"Redanian foot soldier",false,1,1,*n));
	e->addCard(new NormalCard(22,"Catapult",false,3,8,*b));
	e->addCard(new NormalCard(23,"Balista",false,3,6,*n));
	e->addCard(new NormalCard(24,"Kaedweni Siege expert",false,3,1,*m));
	e->addCard(new NormalCard(25,"Villentretenmerth",false,1,7,*sc));
	e->addCard(new SpecialCard(26,"Commander Horn",));
	e->addCard(new SpecialCard(27,"Bitting frost",*n));
	e->addCard(new SpecialCard(28,"Impenetrable Frog",false,*n));
	e->addCard(new SpecialCard(29,"TorrentialRain",*n));
	e->addCard(new SpecialCard(30,"Clear Weather",*n));
	e->addCard(new SpecialCard(30,"Clear Weather",*n));





}