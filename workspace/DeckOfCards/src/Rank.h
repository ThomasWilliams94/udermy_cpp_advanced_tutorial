/*
 * Rank.h
 *
 *  Created on: 19 Nov 2016
 *      Author: Thomas
 */

#ifndef RANK_H_
#define RANK_H_

#include <iostream>
using namespace std;

namespace tjw {

class Rank {
private:

	//CardProperties::Rank rank;
	string name;
	int value;

public:
	Rank(CardProperties::Rank rank);
	virtual ~Rank();
};

} /* namespace tjw */

#endif /* RANK_H_ */
