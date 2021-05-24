#pragma once
#include "Coin.h"
class AmericanCoin : public Coin {
public:
	AmericanCoin() : Coin() {}
	AmericanCoin(double _value) : Coin() {value = _value;}
	void flip() override {
		srand(time(NULL));
		bool Heads = (rand() % 100) < 90;
		bool Tails = (rand() % 100) < 10;
		if (Heads)
			side = HEADS;
		else if (Tails)
			side = TAILS;
	}
};
