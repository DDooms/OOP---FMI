#pragma once
#include "String.h"
class WindCard
{
		String windCard;
		size_t power;
		size_t bonusPower;
		size_t totalPower = bonusPower + power;
		const size_t type = 4;
	public:
		WindCard();
		WindCard(String _windCard, size_t _power, size_t _bonusPower);
		WindCard& operator=(const WindCard& other);
		bool operator==(const WindCard& other);

		String getWind() const;
		size_t getPower() const;
		size_t getBonusPower() const;
		size_t getTotalPower() const;
		const size_t getType() const;
		void setWind(String _windCard);
		void setPower(size_t _power);
		void setBonusPower(size_t _bonusPower);
		void print() const;
};

