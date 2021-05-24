#include "String.h"
#include "Deck.h"
#include "Player.h"
#include <time.h>
#include "EarthCard.h"
#include "FireCard.h"
#include "WaterCard.h"
#include "WindCard.h"
#include <cstdlib>
#include <fstream>

template<class T, class B, class V, class S>
void Game(Player<T,B> player1, Player<V,S> player2) {
	std::ofstream Save1("Player1.txt");
	std::ofstream Save2("Player2.txt");
	size_t counter = 0;
	srand(time(0));
	while (counter !=5)
	{
		size_t random = rand() % 2 + 1;
		size_t random2 = rand() % 2 + 1;
		if (random == 1 && random2 == 1)
		{
			player1.drawCardFirstDeck();
			player2.drawCardFirstDeck();
		}
		else if (random == 2 && random2 == 1)
		{
			player1.drawCardSecondDeck();
			player2.drawCardFirstDeck();
		}
		else if (random == 1 && random2 == 2)
		{
			player1.drawCardSecondDeck();
			player2.drawCardSecondDeck();
		}
		else if (random == 2 && random2 == 2)
		{
			player1.drawCardSecondDeck();
			player2.drawCardSecondDeck();
		}
		counter++;
	}
	if (Save1.is_open())
	{
		player1.savePlayer(Save1);
		Save1.close();
	}
	else std::cout << "File not opened\n";
	if (Save2.is_open())
	{
		player2.savePlayer(Save2);
		Save2.close();
	}
	else std::cout << "File not opened\n";
}


int main() {
	std::ifstream Load1("Player1.txt");
	std::ifstream Load2("Player2.txt");
	if (Load1.is_open() && Load2.is_open())
	{
		WaterCard wcard("adada", 20, 10);
		wcard.print();
		Deck<WaterCard> wa;
		wa.add(wcard);
		wa.print();


		Load1.close();
		Load2.close();
	}
	else std::cout << "Nqkvo suobshtenie umrqlo\n";

	return 0;
}