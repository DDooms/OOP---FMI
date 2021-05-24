#pragma once
#include "String.h"
class EarthCard
{
	String earthCard;
	size_t power;
	size_t bonusPower;
	size_t totalPower = bonusPower + power;
	const size_t type = 3;
public:
	EarthCard();
	EarthCard(String _earthCard, size_t _power, size_t _bonusPower);
	EarthCard& operator=(const EarthCard& other);
	bool operator==(const EarthCard& other);

	String getEarth() const;
	size_t getPower() const;
	size_t getBonusPower() const;
	size_t getTotalPower() const;
	const size_t getType() const;
	void setEarth(String _earthCard);
	void setPower(size_t _power);
	void setBonusPower(size_t _bonusPower);
	void print() const;
};

