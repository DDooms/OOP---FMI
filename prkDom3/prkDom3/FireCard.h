#pragma once
#include "String.h"
class FireCard
{
	String fireCard;
	size_t power;
	size_t bonusPower;
	size_t totalPower = bonusPower + power;
	const size_t type = 2;
public:
	FireCard();
	FireCard(String _fireCard, size_t _power, size_t _bonusPower);
	FireCard& operator=(const FireCard& other);
	bool operator==(const FireCard& other);

	String getFire() const;
	size_t getPower() const;
	size_t getBonusPower() const;
	size_t getTotalPower() const;
	const size_t getType() const;
	void setFire(String _fireCard);
	void setPower(size_t _power);
	void setBonusPower(size_t _bonusPower);
	void print() const;
};

