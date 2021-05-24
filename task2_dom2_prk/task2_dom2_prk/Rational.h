#pragma once
#include <iostream>
#include <cstring>
class Rational
{
private:
	int nom;
	int denom;
public:
	Rational();
	Rational(int _nom, int _denom);

	int getNom() const;
	int getDenom() const;
	void setNom(int _nom);
	void setDenom(int _denom);
	void print() const;
	Rational& operator+(const Rational& _number);
	Rational& operator-(const Rational& _number);
	Rational& operator*(const Rational& _number);
	Rational& operator/(const Rational& _number);
	bool operator==(const Rational& _number);
	bool operator!=(const Rational& _number);
	bool operator>=(const Rational& _number);
	bool operator<=(const Rational& _number);
	Rational& operator=(const Rational& _number);
	Rational& operator+=(const Rational& _number);
	Rational& operator-=(const Rational& _number);
	Rational& operator*=(const Rational& _number);
	Rational& operator/=(const Rational& _number);
};

