#include "Rational.h"

Rational::Rational() :nom(0), denom(1)
{	}

Rational::Rational(int _nom, int _denom)
{
	nom = _nom;
	denom = _denom;
}

int Rational::getNom() const
{
	return nom;
}

int Rational::getDenom() const
{
	return denom;
}

void Rational::setNom(int _nom)
{
	nom = _nom;
}

void Rational::setDenom(int _denom)
{
	denom = _denom;
}

void Rational::print() const
{
	std::cout << nom << "/" << denom << std::endl;
}

Rational& Rational::operator+(const Rational& _number)
{
	Rational temp;
	temp.nom = nom*_number.denom + _number.nom*denom;
	temp.denom = denom * _number.denom;
	return temp;
}

Rational& Rational::operator-(const Rational& _number)
{
	Rational temp;
	temp.nom = nom * _number.denom - _number.nom * denom;
	temp.denom = denom * _number.denom;
	return temp;
}

Rational& Rational::operator*(const Rational& _number)
{
	Rational temp;
	temp.nom = nom * _number.nom;
	temp.denom = denom * _number.denom;
	return temp;
}

Rational& Rational::operator/(const Rational& _number)
{
	Rational temp;
	temp.nom = nom * _number.denom;
	temp.denom = denom * _number.nom;
	return temp;
}

bool Rational::operator==(const Rational& _number)
{

	return nom == _number.nom && denom == _number.denom;
	
}

bool Rational::operator!=(const Rational& _number)
{
	return !(*this == _number);
}

bool Rational::operator>=(const Rational& _number)
{
	return nom >= _number.nom && denom >= _number.denom;
}

bool Rational::operator<=(const Rational& _number)
{
	return nom <= _number.nom && denom <= _number.denom;
}

Rational& Rational::operator=(const Rational& _number)
{
	if (this != &_number)
	{
		nom = _number.nom;
		denom = _number.denom;
	}
	return *this;
}
Rational& Rational::operator+=(const Rational& _number)
{
	this->operator+(_number);
	return *this;
}

Rational& Rational::operator-=(const Rational& _number)
{
	this->operator-(_number);
	return *this;
}

Rational& Rational::operator*=(const Rational& _number)
{
	this->operator*(_number);
	return *this;
}

Rational& Rational::operator/=(const Rational& _number)
{
	this->operator/(_number);
	return *this;
}