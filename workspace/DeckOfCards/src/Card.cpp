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

ostream& operator<<(ostream& lhs, const Card::Rank& rank) {
	switch (rank) {
	case Card::Ace:
		lhs << "Ace";
		break;
	case Card::Two:
		lhs << "Two";
		break;
	case Card::Three:
		lhs << "Three";
		break;
	case Card::Four:
		lhs << "Four";
		break;
	case Card::Five:
		lhs << "Five";
		break;
	case Card::Six:
		lhs << "Six";
		break;
	case Card::Seven:
		lhs << "Seven";
		break;
	case Card::Eight:
		lhs << "Eight";
		break;
	case Card::Nine:
		lhs << "Nine";
		break;
	case Card::Ten:
		lhs << "Ten";
		break;
	case Card::Jack:
		lhs << "Jack";
		break;
	case Card::Queen:
		lhs << "Queen";
		break;
	case Card::King:
		lhs << "King";
		break;
	}

	return lhs;
}

ostream &operator<<(ostream &lhs, const Card::Suit &suit) {
	switch (suit) {
	case Card::Hearts:
		lhs << "Hearts";
		break;
	case Card::Diamonds:
		lhs << "Diamonds";
		break;
	case Card::Spades:
		lhs << "Spades";
		break;
	case Card::Clubs:
		lhs << "Clubs";
		break;
	}

	return lhs;
}

ostream &operator<<(ostream &lhs, const Card::Colour &colour) {
	 switch(colour) {
	 case Card::Black:
		 lhs << "Black";
		 break;
	 case Card::Red:
		 lhs << "Red";
		 break;
	 }

	return lhs;
}

Card::~Card() {
	// TODO Auto-generated destructor stub
}

} /* namespace tjw */
