#include "Buyer.h"

void Buyer::buy(Product other)
{
	double price = product.getPrice();
	size_t discount = product.getPercentage();
	srand(time(NULL));
	size_t random = rand() % 3;
	if (random == 0)
	{
		std::cout << "Prices are in BulgarianCoin!\n" << "Product price: " << price << "\n";
		BulgarianCoin b1;
		b1.flip();
		if (b1.getSide() == HEADS)
		{
			product.setPrice(price*(100 - discount)/100);
			price = product.getPrice();
		}
	}
	else if (random == 1)
	{
		std::cout << "Prices are in AmericanCoin!\n" << "Product price: " << price << "\n";
		AmericanCoin a1;
		a1.flip();
		if (a1.getSide() == HEADS)
		{
			product.setPrice(price * (100 - discount) / 100);
			price = product.getPrice();
		}
	}
	else
	{
		std::cout << "Prices are in GermanCoin!\n" << "Product price: " << price << "\n";
		GermanCoin g1;
		g1.flip();
		if (g1.getSide() == HEADS)
		{
			product.setPrice(price * (100 - discount) / 100);
			price = product.getPrice();
		}
	}
}
