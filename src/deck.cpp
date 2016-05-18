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

//constructor
Deck::Deck(){
						
	std::vector<Card> temp (108); //temp vector that takes in a Card, allocated to 108 the size of the deck
	
	m_card = temp; //m_card copies the temp
	
	for(Card::Color color = Card::RED; color <= Card::BLUE; ++color)
	{
		for (Card::Value value = Card::ZERO; value <= Cardi::WILD_DRAW_FOUR; ++value)
		{
			cards[i].color = color;
			cards[k].value = value;
		}
	}
}
