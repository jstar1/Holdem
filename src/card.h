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

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

/*
 ~~~~~~~~~~~~~~~~~~~
 Card class
 ~~~~~~~~~~~~~~~~~~~
*/ 

class card
{
	public:
	//Strong enumerations 
	//enumerator names are local to the enum and their values do not implicitly convert to other types 
	
	enum class rank {SKIP,DRAW_TWO,REVERSE,WILD, ILD_FOUR,ZERO,ONE,TWO,THREE,
		FOUR,FIVE,SIX,SEVEN,EIGHT,NINE};

	enum class color {RED,GREEN,YELLOW,BLUE};

	/*
	 ~~~~~~~~~~~~~~~~~~
	 Return the value of a card
	 ~~~~~~~~~~~~~~~~~~
	 */
	 int GetValue() const;

	private:
	
	rank m_Rank;
	color m_Color;
};
#endif









