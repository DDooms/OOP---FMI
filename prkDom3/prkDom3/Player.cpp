#include "Player.h"
#include "Deck.h"

template<class T, class B>
Player<T, B>::Player()
{
	wins = 0;
	losses = 0;
}

template<class T, class B>
Player<T, B>::Player(const char* _playerName, size_t _wins, size_t _losses, const Deck<T>& _deck1, const Deck<B>& _deck2)
{
	playerName.setString();
	wins = _wins;
	losses = _losses;
}

template<class T, class B>
String Player<T, B>::getPlayerName() const
{
	return playerName.getString();
}

template<class T, class B>
size_t Player<T, B>::getWins() const
{
	return wins;
}

template<class T, class B>
size_t Player<T, B>::getLosses() const
{
	return losses;
}

template<class T, class B>
Deck<T> Player<T, B>::getDeckOne() const
{
	return deck1;
}

template<class T, class B>
Deck<B> Player<T, B>::getDeckTwo() const
{
	return deck2;
}

template<class T, class B>
void Player<T, B>::setPlayerName(const char* _playerName)
{
	playerName.setString(_playerName);
}

template<class T, class B>
void Player<T, B>::setWins(size_t _wins)
{
	wins = _wins;
}

template<class T, class B>
void Player<T, B>::setLosses(size_t _losses)
{
	losses = _losses;
}

template<class T, class B>
void Player<T, B>::setDeckOne(Deck<T> _deck1)
{
	for (size_t i = 0; i < _deck1.getSize(); i++)
	{
		deck1[i] = _deck1[i];
	}
}

template<class T, class B>
void Player<T, B>::setDeckTwo(Deck<B> _deck2)
{
	for (size_t i = 0; i < _deck2.getSize(); i++)
	{
		deck2[i] = _deck2[i];
	}
}

template<class T, class B>
void Player<T, B>::savePlayer(std::ofstream& out) const
{
	out << this->playerName << '\n';
	out << this->wins << '\n';
	out << this->losses << '\n';
}

template<class T, class B>
void Player<T, B>::loadPlayer(std::ifstream& in)
{
	in >> playerName;
	in >> wins;
	in >> losses;
}

template<class T, class B>
T Player<T, B>::drawCardFirstDeck()
{
	return deck1.drawCard();
}

template<class T, class B>
B Player<T, B>::drawCardSecondDeck()
{
	return deck2.drawCard();
}
