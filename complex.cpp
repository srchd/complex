#include <iostream>
#include <math.h>
#include "complex.h"
double Complex::abs() {
	return sqrt(_re * _re + _im * _im);
}
double Complex::getre() {
	return _re;
}
double Complex::getim() {
	return _im;
}
void Complex::add(Complex c) {
	_re += c.getre();
	_im += c.getim();
}
void Complex::sub(Complex c) {
	_re -= c.getre();
	_im -= c.getim();
}
void Complex::mul(Complex c) {
	_re *= c.getre();
	_im *= c.getim();
}
std::ostream& operator<<(std::ostream& os, const Complex& c) {
	os << c._re << ' ' << c._im;
	return os;
}