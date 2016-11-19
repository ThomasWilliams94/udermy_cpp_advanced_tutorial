/*
 * Card.h
 *
 *  Created on: 19 Nov 2016
 *      Author: Thomas
 */

#ifndef CARD_H_
#define CARD_H_


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

	virtual ~Card();

	friend ostream &operator<<(ostream &lhs, const Card::Rank &rank);
	friend ostream &operator<<(ostream &lhs, const Card::Suit &suit);
	friend ostream &operator<<(ostream &lhs, const Card::Colour &colour);
};

} /* namespace tjw */

#endif /* CARD_H_ */
