#include "FireCard.h"
FireCard::FireCard()
{
    power = 0;
    bonusPower = 0;
    totalPower = 0;
}

FireCard::FireCard(String _fireCard, size_t _power, size_t _bonusPower)
{
    fireCard = _fireCard;
    power = _power;
    bonusPower = _bonusPower;
    totalPower = _bonusPower + _power;;
}

FireCard& FireCard::operator=(const FireCard& other)
{
    if (this != &other)
    {
        fireCard = other.fireCard;
        power = other.power;
        bonusPower = other.bonusPower;
        totalPower = other.totalPower;
    }
    return *this;
}

bool FireCard::operator==(const FireCard& other)
{
    if (this->fireCard == other.fireCard)
    {
        return true;
    }

    return false;
}

String FireCard::getFire() const
{
    return fireCard;
}

size_t FireCard::getPower() const
{
    return power;
}

size_t FireCard::getBonusPower() const
{
    return bonusPower;
}

size_t FireCard::getTotalPower() const
{
    return totalPower;
}

const size_t FireCard::getType() const
{
    return type;
}

void FireCard::setFire(String _fireCard)
{
    fireCard =_fireCard;
}

void FireCard::setPower(size_t _power)
{
    power = _power;
}

void FireCard::setBonusPower(size_t _bonusPower)
{
    bonusPower = _bonusPower;
}
void FireCard::print() const
{
    std::cout << fireCard << "\n";
    std::cout << power << "\n";
    std::cout << bonusPower << "\n";
}
