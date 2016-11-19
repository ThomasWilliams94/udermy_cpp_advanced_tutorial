/*
 * Rank.cpp
 *
 *  Created on: 19 Nov 2016
 *      Author: Thomas
 */

#include "Rank.h"

namespace tjw {

Rank::Rank(CardProperties::Rank rank) {
	switch (rank) {
	case CardProperties::Ace:
		name = "Ace";
		value = 1;
		break;
	case CardProperties::Two:
		name = "Two";
		value = 2;
		break;
	case CardProperties::Three:
		name = "Three";
		value = 3;
		break;
	case CardProperties::Four:
		name = "Four";
		value = 4;
		break;
	case CardProperties::Five:
		name = "Five";
		value = 5;
		break;
	case CardProperties::Six:
		name = "Six";
		value = 6;
		break;
	case CardProperties::Seven:
		name = "Seven";
		value = 7;
		break;
	case CardProperties::Eight:
		name = "Eight";
		value = 8;
		break;
	case CardProperties::Nine:
		name = "Nine";
		value = 9;
		break;
	case CardProperties::Ten:
		name = "Ten";
		value = 10;
		break;
	case CardProperties::Jack:
		name = "Jack";
		value = 10;
		break;
	case CardProperties::Queen:
		name = "Queen";
		value = 10;
		break;
	case CardProperties::King:
		name = "King";
		value = 10;
		break;
	}
}


Rank::~Rank() {
	// TODO Auto-generated destructor stub
}

} /* namespace tjw */
