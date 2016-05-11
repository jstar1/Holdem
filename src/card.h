/*
 ~~~~~~~~~~~~~~~~~~~~~~~~~~
Uno in C++
File:card.h
 ~~~~~~~~~~~~~~~~~~~~~~~~~~
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

#include <iostream> 
#include <string>
#include <vector>
#include <algorithm>


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
	//The enum Value class starts with 0 and ends at 50. Face cards or action ards are all worth 50 points
	//When using an enum class the value or integer increases, this is why zero is 0 and no other card value
	//has a integer explicidly stated.  

	enum Value {ZERO = 0,ONE,TWO,THREE,
		FOUR,FIVE,SIX,SEVEN,EIGHT,NINE,SKIP = 50,DRAW_TWO,REVERSE,WILD,WILD_DRAW_FOUR};

	enum Color {RED,GREEN,YELLOW,BLUE};

	Card();

	Card(Value value,Color color); //constructor
	
	//function that will return a string for enum equivalent
	std::string getValue(Value value);
	
	//function that will return a string for enum equivalent
	std::string getColor(Color color);
	
	private:
	Value m_value; //rank of the card
	Color m_color; //color of the card

};
#endif









