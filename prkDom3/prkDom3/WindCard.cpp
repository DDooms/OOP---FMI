#include "WindCard.h"

WindCard::WindCard()
{
    power = 0;
    bonusPower = 0;
    totalPower = 0;
}

WindCard::WindCard(String _windCard, size_t _power, size_t _bonusPower)
{
    windCard =_windCard;
    power = _power;
    bonusPower = _bonusPower;
    totalPower = _bonusPower + _power;
}

WindCard& WindCard::operator=(const WindCard& other)
{
    if (this != &other)
    {
        windCard = other.windCard;
        power = other.power;
        bonusPower = other.bonusPower;
        totalPower = other.totalPower;
    }
    return *this;
}

bool WindCard::operator==(const WindCard& other)
{
    if (this->windCard == other.windCard)
    {
        return true;
    }

    return false;
}

String WindCard::getWind() const
{
    return windCard;
}

size_t WindCard::getPower() const
{
    return power;
}

size_t WindCard::getBonusPower() const
{
    return bonusPower;
}

size_t WindCard::getTotalPower() const
{
    return totalPower;
}

const size_t WindCard::getType() const
{
    return type;
}

void WindCard::setWind(String _windCard)
{
    windCard =_windCard;
}

void WindCard::setPower(size_t _power)
{
    power = _power;
}

void WindCard::setBonusPower(size_t _bonusPower)
{
    bonusPower = _bonusPower;
}
void WindCard::print() const
{
    std::cout << windCard << "\n";
    std::cout << power << "\n";
    std::cout << bonusPower << "\n";
}