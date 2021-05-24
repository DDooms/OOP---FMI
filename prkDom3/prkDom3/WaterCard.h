#pragma once
#include "String.h"
class WaterCard
{
	String waterCard;
	size_t power;
	size_t bonusPower;
	size_t totalPower = bonusPower + power;
	const size_t type = 1;
public:
	WaterCard();
	WaterCard(String _waterCard, size_t _power, size_t _bonusPower);
	WaterCard& operator=(const WaterCard& other);
	bool operator==(const WaterCard& other);

	String getWater() const;
	size_t getPower() const;
	size_t getBonusPower() const;
	size_t getTotalPower() const;
	const size_t getType() const;
	void setWater(String _waterCard);
	void setPower(size_t _power);
	void setBonusPower(size_t _bonusPower);
	void print() const;

};

