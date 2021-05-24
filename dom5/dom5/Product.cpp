#include "Product.h"

Product::Product()
{
    productName = "";
    price = 0;
    percentage = 0;
    side = HEADS;
}

Product& Product::operator=(const Product& other)
{
    if (this!=&other)
    {
        productName = other.productName;
        price = other.price;
        percentage = other.percentage;
        side = other.side;
    }
    return *this;
}

Product::Product(const String& name, double _price, size_t discount, coins _side)
{
    productName = name;
    price = _price;
    percentage = discount;
    srand(time(NULL));
    size_t random = rand() % 2;
    if (random == 1)
        _side = HEADS;
    else _side = TAILS;
}

String Product::getName() const
{
    return productName;
}

double Product::getPrice() const
{
    return price;
}

void Product::setPrice(double _price)
{
    price = _price;
}

size_t Product::getPercentage() const
{
    return percentage;
}

coins Product::getSide() const
{
    return side;
}
