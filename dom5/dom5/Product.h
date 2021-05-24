#pragma once
#include "String.h"
#include "Coin.h"
#include "AmericanCoin.h"
#include "BulgarianCoin.h"
#include "GermanCoin.h"
class Product
{
	String productName;
	double price;
	size_t percentage;
	coins side;
public:
	Product();
	Product& operator=(const Product& other);
	Product(const String& name, double _price, size_t discount, coins _side);
	String getName() const;
	double getPrice() const;
	void setPrice(double _price);
	size_t getPercentage() const;
	coins getSide() const;
};

