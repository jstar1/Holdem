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
	switch (value)
	{
		case Value::ZERO: return "Zero";
		case Value::ONE: return "One";
		case Value::TWO: return "Two";

	}
}

