#pragma once
#include <iostream>
#include <cstring>

class Crypto
{
private:
	char* name;
	double lastPrice;
	double currentPrice;
public:
	Crypto();
	Crypto(const char*, double, double);

	const char* getName() const;
	double getLastPrice() const;
	double getCurrentPrice() const;

	void setName(const char* _name);
	void setLastPrice(double _lastPrice);
	void setCurrentPrice(double _currentPrice);

	void print() const;
	double priceDifference() const;
};

