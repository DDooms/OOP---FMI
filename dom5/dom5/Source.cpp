#include "Coin.h"
#include "Product.h"
#include "Buyer.h"

int main() {
	String name;
	name = "peshp";
	Product product(name, 50, 30, TAILS);
	Buyer buyer;
	AmericanCoin a1;
	a1.flip();
	
	a1.getSide();
	std::cout << a1.getSide() << "\n";
}