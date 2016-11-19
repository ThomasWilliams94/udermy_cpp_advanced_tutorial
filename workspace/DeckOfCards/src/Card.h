/*
 * Card.h
 *
 *  Created on: 19 Nov 2016
 *      Author: Thomas
 */

#ifndef CARD_H_
#define CARD_H_

#include <map>
#include <iostream>

using namespace std;

namespace tjw {

class Card {
private:

public:
	enum Suit {
		Diamonds, Hearts, Clubs, Spades
	};
	enum Colour {
		Black, Red
	};
	enum Rank {
		Ace = 1,
		Two,
		Three,
		Four,
		Five,
		Six,
		Seven,
		Eight,
		Nine,
		Ten,
		Jack,
		Queen,
		King
	};

	Suit suit;
	Rank rank;
	Colour colour;

public:
	Card(Rank rank, Suit suit);

	void print();
	friend ostream& operator<<(ostream& lhs, const Card::Rank& rank);
	virtual ~Card();

};

// BAH ALREADY TOO COMPLICATED. Write a simple function for now and come back to this later

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

} /* namespace tjw */

#endif /* CARD_H_ */
