#include "Coin.h"

void Coin::copy(const Coin& other)
{
	side = other.side;
	nationality = new char[strlen(other.nationality)+1];
	strcpy_s(nationality, strlen(other.nationality) + 1, other.nationality);
	value = other.value;
}

void Coin::erase()
{
	delete[] nationality;
}

Coin::Coin() : value(0) {
	nationality = new char[2];
	nationality[0] = '\0';
	side = HEADS;
}
Coin::Coin(const char* _nationality, double _value, coins _side)
{
	nationality = new char[strlen(_nationality)+1];
	strcpy_s(nationality, strlen(_nationality) + 1, _nationality);
	side = _side;
	value = _value;
}
void Coin::flip()
{
	srand(time(NULL));
	size_t random = rand() % 2;
	if (random == 1)
		side = HEADS;
	else side = TAILS;
}
coins Coin::getSide() const
{
	return side;
}
Coin::~Coin() { erase(); }

Coin::Coin(const Coin& other)
{
	copy(other);
}

Coin& Coin::operator=(const Coin& other)
{
	if (this != &other)
	{
		erase();
		copy(other);
	}
	return *this;
}

void Coin::printConverterInfo() const
{
	double n1, n2, list;
	std::cout << "BG - 1, US - 2, DE - 3";
	std::cout << "Enter the first currency: ";
	do
	{
		std::cin >> n1;
	} while (n1 > 3 || n1 < 1);
	std::cout << "Now the second one: ";
	do
	{
		std::cin >> n2;
	} while (n2 > 3 || n2 < 1);
	std::cout << "Now enter the amount of coins: "; std::cin >> list;
	if (n1 == 1 && n2 == 2)
		list *= 3;
	else if (n1 == 1 && n2 == 3)
		list *= 6;
	else if (n1 == 2 && n2 == 3)
		list *= 2.5;
	else if (n1 == 2 && n2 == 1)
		list /= 3;
	else if (n1 == 3 && n2 == 1)
		list /= 6;
	else if (n1 == 3 && n2 == 2)
		list /= 2.5;

	std::cout << "Converted to: " << list;

}


