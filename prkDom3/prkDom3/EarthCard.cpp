#include "EarthCard.h"
EarthCard::EarthCard()
{
    power = 0;
    bonusPower = 0;
    totalPower = 0;
}

EarthCard::EarthCard(String _earthCard, size_t _power, size_t _bonusPower)
{
    earthCard =_earthCard;
    power = _power;
    bonusPower = _bonusPower;
    totalPower = _bonusPower + _power;;
}

EarthCard& EarthCard::operator=(const EarthCard& other)
{
    if (this != &other)
    {
        earthCard = other.earthCard;
        power = other.power;
        bonusPower = other.bonusPower;
        totalPower = other.totalPower;
    }
    return *this;
}

bool EarthCard::operator==(const EarthCard& other)
{
    if (this->earthCard == other.earthCard)
    {
        return true;
    }

    return false;
}

String EarthCard::getEarth() const
{
    return earthCard;
}

size_t EarthCard::getPower() const
{
    return power;
}

size_t EarthCard::getBonusPower() const
{
    return bonusPower;
}

size_t EarthCard::getTotalPower() const
{
    return totalPower;
}

const size_t EarthCard::getType() const
{
    return type;
}

void EarthCard::setEarth(String _earthCard)
{
    earthCard =_earthCard;
}

void EarthCard::setPower(size_t _power)
{
    power = _power;
}

void EarthCard::setBonusPower(size_t _bonusPower)
{
    bonusPower = _bonusPower;
}
void EarthCard::print() const
{
    std::cout << earthCard << "\n";
    std::cout << power << "\n";
    std::cout << bonusPower << "\n";
}
