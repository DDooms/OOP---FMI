#pragma once
#include "AmericanCoin.h"
#include "BulgarianCoin.h"
#include "GermanCoin.h"
#include "Vector.h"
#include "Product.h"

class Buyer
{
	Vector<AmericanCoin> UScoins;
	Vector<GermanCoin> DEcoins;
	Vector<BulgarianCoin> BGcoins;
	Product product;
public:
	void buy(Product other);
};

