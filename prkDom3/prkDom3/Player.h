#pragma once
#include "String.h"
#include "Deck.h"
#include <fstream>
template<class T, class B>
class Player
{
	String playerName;
	size_t wins;
	size_t losses;
	Deck<T> deck1;
	Deck<B> deck2;

public:
	Player();
	Player(const char* _playerName, size_t _wins, size_t _losses, const Deck<T>& _deck1, const Deck<B>& _deck2);

	String getPlayerName() const;
	size_t getWins() const;
	size_t getLosses() const;
	Deck<T> getDeckOne() const;
	Deck<B> getDeckTwo() const;

	void setPlayerName(const char* _playerName);
	void setWins(size_t _wins);
	void setLosses(size_t _losses);
	void setDeckOne(Deck<T> _deck1);
	void setDeckTwo(Deck<B> _deck2);

	void savePlayer(std::ofstream& out) const;
	void loadPlayer(std::ifstream& in);

	T drawCardFirstDeck();
	B drawCardSecondDeck();
};