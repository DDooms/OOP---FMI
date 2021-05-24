#pragma once
#include "Coin.h"
class BulgarianCoin : public Coin {
public:
	BulgarianCoin() : Coin(){}
	BulgarianCoin(double _value) : Coin() {value = _value;}
	void flip() override {
		srand(time(NULL));
		bool Heads = (rand() % 100) < 30;
		bool Tails = (rand() % 100) < 70;
		if (Heads)
			side = HEADS;
		else if (Tails)
			side = TAILS;
	}
};
