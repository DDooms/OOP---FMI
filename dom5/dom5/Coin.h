#pragma once
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <ctime>
enum coins {
	HEADS, TAILS
};

class Coin
{
protected:
	coins side;
	char* nationality;
	double value;
	void copy(const Coin& other);
	void erase();
public:
	Coin();
	Coin(const char* _nationality, double _value, coins _side);
	virtual void flip();
	coins getSide() const;
	~Coin();
	Coin(const Coin& other);
	Coin& operator=(const Coin& other);
	void printConverterInfo() const;
};

