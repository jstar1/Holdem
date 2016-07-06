/*
======================
Uno in c++
======================
*/

/*
========================
Implementation of deck.h
========================
*/

#include "deck.h"
#include <ctime>

//constructor
Deck::Deck(){
						
	std::vector<Card> temp(108); //temp vector that takes in a Card, allocated to 108 the size of the deck
	
	m_card = temp; //m_card copies the temp

	
	//Populate deck	
	
	for(Card::Color color = Card::RED; color <= Card::BLUE; color = Card::Color(color+1))
	{
		for (Card::Value value = Card::ZERO; value <= Card::WILD_DRAW_FOUR; value = Card::Value(value+1))
		{

			m_card.push_back(Card(value,color)); //push_back function is used to add a new element to the vector
		}
	}
}

//shuffle deck using the random_shuffle function call. This is using the
void Deck::shuffle(){
	
	
	std::srand((unsigned int)std::time(0)); //seed set for the psuedo-random number generator
	std::random_shuffle(m_card.begin(),m_card.end());
}

//Function that draws a card from the deck
//returns the card that is on the top
Card Deck::drawCard(){

	Card aCard = m_card[0];
	m_card.erase(m_card.begin());
	return aCard;
}

