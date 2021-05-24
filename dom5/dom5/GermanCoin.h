#pragma once
#include "Coin.h"
class GermanCoin : public Coin {
public:
	GermanCoin() : Coin() {}
	GermanCoin(double _value) : Coin() {value = _value;}
	void flip() override {
		srand(time(NULL));
		size_t random = rand() % 2;
		if (random == 1)
			side = HEADS;
		else side = TAILS;		
	}
	void printInfo() const {
		std::cout << "Nationality: " << nationality << "\n" << "Side: " << side
			<< "\n" << "Value: " << value;
	}
};
