/*
 * Deck.h
 *
 *  Created on: 19 Nov 2016
 *      Author: Thomas
 */

#ifndef DECK_H_
#define DECK_H_

#include <stack>
#include "Card.h"

namespace tjw {

class Deck {
private:
	stack<Card> cards;

public:
	Deck();
	virtual ~Deck();

private:
	void createDeck();

};

} /* namespace tjw */

#endif /* DECK_H_ */
