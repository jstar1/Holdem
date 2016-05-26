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
						
	std::vector<Card> temp(108); //temp vector that takes in a Card, allocated to 108 the size of the deck
	
	m_card = temp; //m_card copies the temp

	
	//Populate deck	
	
	for(Card::Color color = Card::RED; color <= Card::BLUE; color = Card::Color(color+1))
	{
		for (Card::Value value = Card::ZERO; value <= Card::WILD_DRAW_FOUR; value = Card::Value(value+1))
		{

			m_card.push_back(Card(value,color)); //push_back function is used to at a new element to the vector
		}
	}
}

std::ostream& operator << (std::ostream& out, const std::vector<Card>& vType){
	
	out << vType;
	return out;	
}

//print deck
/*
void Deck::printDeck() const{

	//for(const auto& i : m_card)
	//	std::cout << i << "\n";

	std::copy(m_card.begin(),m_card.end(),std::ostream_iterator<Card>(std::cout, ""));
}
*/









