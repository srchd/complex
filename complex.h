#pragma once
#include <iostream>
class Complex {
public:
	Complex(double re, double im) : _re(re), _im(im) {}
	double abs();
	double getre();
	double getim();
	void add(Complex c);
	void sub(Complex c);
	void mul(Complex c);
	friend std::ostream& operator<<(std::ostream& os, const Complex& c);
private:
	double _re, _im;
};