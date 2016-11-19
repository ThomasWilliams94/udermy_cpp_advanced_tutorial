/*
 * Complex.cpp
 *
 *  Created on: 19 Nov 2016
 *      Author: Thomas
 */

#include "Complex.h"

namespace tjw {

Complex::Complex() : real(0), imaginary(0) {
	// TODO Auto-generated constructor stub

}

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary) {

}

Complex::Complex(const Complex &other) {
	real = other.real;
	imaginary = other.imaginary;
}

const Complex &Complex::operator=(const Complex &other) {
	real = other.real;
	imaginary = other.imaginary;

	return *this;
}

} /* namespace tjw */
