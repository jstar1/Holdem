/*
~~~~~~~~~~~~~~~~~~~~~~~
Uno in C++
File:card.cpp
~~~~~~~~~~~~~~~~~~~~~~~
*/

/*
~~~~~~~~~~~~~~~~~~~~~~~~
Implementation of the .h 
~~~~~~~~~~~~~~~~~~~~~~~~
*/
#include "card.h"

//default constructor
Card::Card(){
}

//constructor implementation using a initlization list
Card::Card(Value value, Color color):
	m_value(value),m_color(color){
}

//method that will convert a enum value to a string
std::string Card::getValue(Value value){
	//using switch statemnet to change each enum value of the card into
	//a string output
	switch (value)
	{
		case ZERO: return "Zero";
		case ONE: return "One";
		case TWO: return "Two";
		case THREE: return "Three";
		case FOUR: return "Four";
		case FIVE: return "Five";
		case SIX: return "Six";
		case SEVEN: return "Seven";
		case EIGHT: return "Eight";
		case NINE: return "Nine";
		case SKIP: return "Skip";
		case DRAW_TWO: return "Draw Two";
		case REVERSE: return "Reverse";
		case WILD: return "Wild";
		case WILD_DRAW_FOUR: return "Wild Draw Four";
		default: return "Failed";
	}
}

//method that will convert a enum color to a string
std::string Card::getColor(Color color){
	//Using a switch s tatement to change each enum color of the card into
	//a string output
	switch (color)
	{
		case RED: return "Red";
		case GREEN: return "Green";
		case YELLOW: return "Yellow";
		case BLUE: return "Blue";
		default: return "Failed";
	}
}
