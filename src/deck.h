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
#include <vector>
#include <ostream>
#include <algorithm>
#include <iterator>
#include <ctime>

/*
========================
Class Deck
========================
*/

/*NOTE: Creating a object called a Deck that contains a  vector of Cards*/

class Deck
{
	public:
	
		Deck(); //constructor
	
		void shuffle(); //shuffle deck	
	
	
	private:
	
		std::vector<Card> m_card; //using vector as a container for m deck  

};
#endif




















