#include <iostream>
#include "Complex.h"

using namespace std;

int main() {
	Complex c_one(3, 2);
	cout << c_one << endl;
	Complex c_two(-1, 2);
	cout << c_two << endl;
	cout << c_one.abs() << endl;
	c_one.add(c_two);
	cout << c_one << endl;
	c_one.mul(c_two);
	cout << c_one << endl;
	c_one.sub(c_two);
	cout << c_one << endl;
	return 0;
}