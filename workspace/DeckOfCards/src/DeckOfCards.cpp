//============================================================================
// Name        : DeckOfCards.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Card.h"
using namespace std;

int main() {

	tjw::Card testCard(tjw::Card::Ace, tjw::Card::Spades);

	testCard.print();

	return 0;
}
