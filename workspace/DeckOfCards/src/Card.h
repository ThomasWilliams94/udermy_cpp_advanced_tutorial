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

	CardProperties::Suit suit;
	CardProperties::Rank rank;
	CardProperties::Colour colour;

public:
	Card(CardProperties::Rank rank, CardProperties::Suit suit);

	void print();

	virtual ~Card();

	friend ostream &operator<<(ostream &lhs, const CardProperties::Rank &rank);
	friend ostream &operator<<(ostream &lhs, const CardProperties::Suit &suit);
	friend ostream &operator<<(ostream &lhs, const CardProperties::Colour &colour);
};

} /* namespace tjw */

#endif /* CARD_H_ */
