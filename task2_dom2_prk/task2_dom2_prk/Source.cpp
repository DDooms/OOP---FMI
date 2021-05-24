#include <iostream>
#include <cstring>
#include "Rational.h"

int main() {
	Rational test1(5, 6);
	Rational test2(8, 7);
	test1 * test2;
	Rational test3(test1 / test2);
	test3.print();
	

}