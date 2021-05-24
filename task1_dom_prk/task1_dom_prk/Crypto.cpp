#include "Crypto.h"

Crypto::Crypto()
{
	this->name = new char[6];
	strcpy_s(name, 6, "empty");
	this->lastPrice = 0.0;
	this->currentPrice = 0.0;
}

Crypto::Crypto(const char* _name, double _lastPrice, double _currentPrice)
{
	name = new char[strlen(_name) + 1];
	strcpy_s(name, strlen(_name) + 1, _name);
	this->lastPrice = _lastPrice;
	this->currentPrice = _currentPrice;
}

const char* Crypto::getName() const
{
	return this->name;
}

double Crypto::getLastPrice() const
{
	return this->lastPrice;
}

double Crypto::getCurrentPrice() const
{
	return this->currentPrice;
}

void Crypto::setName(const char* _name)
{
	delete[] this->name;
	this->name = new char[strlen(_name) + 1];
	strcpy_s(name, strlen(_name) + 1, _name);
}

void Crypto::setLastPrice(double _lastPrice)
{
	this->lastPrice = _lastPrice;
}

void Crypto::setCurrentPrice(double _currentPrice)
{
	this->currentPrice = _currentPrice;
}

void Crypto::print() const
{
	std::cout << name << "\n";
	std::cout << lastPrice << "\n";
	std::cout << currentPrice << "\n";
}

double Crypto::priceDifference() const
{
	return ((currentPrice - lastPrice) * 100.0) / lastPrice;
}
