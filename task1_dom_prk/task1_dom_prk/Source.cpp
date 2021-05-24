#include <iostream>
#include <cstring>
#include "Crypto.h"

int main() {
	Crypto crypto;
	crypto.setName("BTC");
	crypto.setCurrentPrice(420);
	crypto.setLastPrice(69);
	crypto.print();
	std::cout << crypto.priceDifference();
}