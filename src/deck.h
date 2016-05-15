/*
============================
Uno in c++
File:deck.h
============================
*/

/*
===========================
Defining header
===========================
*/

#ifndef DECK__H  //if deck has not been used
#define DECK__H  //define so compiler knows its been included

/*
=========================
Included files
=========================
*/

#include "card.h"
#include "vector"

/*
========================
Class Deck
========================
*/

class Deck
{
	Deck(int n); //constructor
	
	void suffle(); //shuffle deck
	void print_deck() const; //print deck for testing

	private:
	/*NOTE: The object named deck has a single instance vairale name m_card, which is a vector of the Card object*/
	std::vector<Card> m_card; //using vector as a container for m deck  

};
#endif




















