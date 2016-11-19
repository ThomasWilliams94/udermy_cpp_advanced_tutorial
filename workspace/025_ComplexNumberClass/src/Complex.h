/*
 * Complex.h
 *
 *  Created on: 19 Nov 2016
 *      Author: Thomas
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
using namespace std;

namespace tjw {

class Complex {
private:
	double real;
	double imaginary;

public:
	Complex();
	Complex(double real, double imaginary);
	Complex(const Complex &other);

	const Complex &operator=(const Complex &other);

	double getReal() const { return real; }
	double getImaginary() const { return imaginary; }
};

inline ostream &operator<< (ostream &out, const Complex &c) {
	return out << "(" << c.getReal() << "," << c.getImaginary() << ")";
}

} /* namespace tjw */

#endif /* COMPLEX_H_ */
