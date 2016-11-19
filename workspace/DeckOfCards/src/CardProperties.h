/*
 * CardProperties.h
 *
 *  Created on: 19 Nov 2016
 *      Author: Thomas
 */

#ifndef CARDPROPERTIES_H_
#define CARDPROPERTIES_H_

#include <iostream>
#include "Rank.h"
using namespace std;

namespace tjw {

static const class CardProperties {
public:
	enum Suit {
		Diamonds = 0, Hearts, Clubs, Spades
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

private:

	const Suit suits[4];
	const Colour colours[2];

public:
	CardProperties();
	virtual ~CardProperties();
};

} /* namespace tjw */

#endif /* CARDPROPERTIES_H_ */
