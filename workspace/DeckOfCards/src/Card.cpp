/*
 * Card.cpp
 *
 *  Created on: 19 Nov 2016
 *      Author: Thomas
 */

#include "Card.h"

namespace tjw {

Card::Card(Rank rank, Suit suit) {
	this->rank = rank;
	this->suit = suit;

	if (suit == Diamonds || suit == Hearts) {
		colour = Red;
	} else {
		colour = Black;
	}

}

void Card::print() {
	cout << rank << " of " << suit << endl;
}

Card::~Card() {
	// TODO Auto-generated destructor stub
}

} /* namespace tjw */
