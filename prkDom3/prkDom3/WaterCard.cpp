#include "WaterCard.h"
WaterCard::WaterCard()
{
    power = 0;
    bonusPower = 0;
    totalPower = 0;
}

WaterCard::WaterCard(String _waterCard, size_t _power, size_t _bonusPower)
{
    waterCard = _waterCard;
    power = _power;
    bonusPower = _bonusPower;
    totalPower = _bonusPower + _power;
}

WaterCard& WaterCard::operator=(const WaterCard& other)
{
    if (this != &other)
    {
        waterCard = other.waterCard;
        power = other.power;
        bonusPower = other.bonusPower;
        totalPower = other.totalPower;
    }
    return *this;
}

bool WaterCard::operator==(const WaterCard& other)
{
        if (this->waterCard == other.waterCard)
        {
            return true;
        }
 
    return false;
}

String WaterCard::getWater() const
{
    return waterCard;
}

size_t WaterCard::getPower() const
{
    return power;
}

size_t WaterCard::getBonusPower() const
{
    return bonusPower;
}

size_t WaterCard::getTotalPower() const
{
    return totalPower;
}

const size_t WaterCard::getType() const
{
    return type;
}

void WaterCard::setWater(String _waterCard)
{
    waterCard =_waterCard;
}

void WaterCard::setPower(size_t _power)
{
    power = _power;
}

void WaterCard::setBonusPower(size_t _bonusPower)
{
    bonusPower = _bonusPower;
}

void WaterCard::print() const
{
    std::cout << waterCard << "\n";
    std::cout << power << "\n";
    std::cout << bonusPower << "\n";
}
