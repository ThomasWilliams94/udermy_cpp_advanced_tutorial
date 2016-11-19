/*
 * Deck.cpp
 *
 *  Created on: 19 Nov 2016
 *      Author: Thomas
 */

#include "Deck.h"

namespace tjw {

Deck::Deck() {
	// TODO Auto-generated constructor stub
	createDeck();

	while (cards.size() > 0) {
		Card &card = cards.top();
		card.print();

		cards.pop();
	}
}

Deck::~Deck() {
	// TODO Auto-generated destructor stub
}

void Deck::createDeck() {
	Card::Suit addSuit;
	Card::Rank addRank;

	for (int suit = 0; suit < 4; suit++) {

		for (int rank = 1; rank < 14; rank++) {

			Card card(rank, suit);
			cards.push(card);
		}
	}
}

} /* namespace tjw */
