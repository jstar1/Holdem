/*
 ~~~~~~~~~~~~~~~~~~~~~~~~~~
Uno in C++
File:card.h
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

/*
~~~~~~~~~~~~~~~~~~~~~~
Define Headers
~~~~~~~~~~~~~~~~~~~~~~
*/

#ifndef CARD__H //if card has'nt beent used
#define CARD__H //define so compiler knows its been included

/*
~~~~~~~~~~~~~~~~~~~~~~
Include files
~~~~~~~~~~~~~~~~~~~~~~
*/

#include <ostream> //not using the istream so no need to include the full iostream
#include <string>
#include <vector>
#include <algorithm>
//#include <ctime> //move to deck.cpp

//using namespace std;

/*
 ~~~~~~~~~~~~~~~~~~~
 Card class
 ~~~~~~~~~~~~~~~~~~~
*/ 

class Card
{
	public:
	//Strong enumerations 
	//enumerator names are local to the enum and their values do not implicitly convert to other types 
	
	enum class Value {ZERO,ONE,TWO,THREE,
		FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,SKIP = 50,DRAW_TWO = 50,REVERSE = 50,WILD = 50,WILD_DRAW_FOUR = 50};

	enum class Color {RED,GREEN,YELLOW,BLUE};


	Card(Value value,Color color);


	Value GetValue() const; //get the value of the card 	
	void SetValue(Value Value); //set the value of the card
	Color GetColor() const; //get the color of the card
	void SetColor(Color color); //set the color of the card

	private:
	int m_value; //rank of the card
	Color color; //color of the card

};
#endif









