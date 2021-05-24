#pragma once
#include "String.h"
#include <ctime>
#include <cstdlib>

template <class T>
class Deck {
	T deck[30];
	size_t size;
	bool IsTheSame(T card) const;
public:
	Deck();

	Deck<T> getDeck() const;
	size_t getSize() const;

	void setDeck(const Deck<T>& _deck);
	void setSize(size_t _size);
	void shuffle();
	T& drawCard();
	void add(const T& value);
	T operator+(const T& card);
	T& operator+=(const T& card);
	bool operator==(const Deck& other);
	void print() const;
};
template<class T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;	
}
template<class T>
bool Deck<T>::IsTheSame(T card) const
{
	for (size_t i = 0; i < size; i++)
		if (card == deck[i])
			return false;
	return true;
}
template<class T>
Deck<T>::Deck() : size(0) {};

template<class T>
Deck<T> Deck<T>::getDeck() const
{
	return deck;
}

template<class T>
size_t Deck<T>::getSize() const
{
	return size;
}

template<class T>
void Deck<T>::setDeck(const Deck<T>& _deck)
{
	for (size_t i = 0; i < size; i++)
	{
		deck[i] = _deck[i];
	}
}

template<class T>
void Deck<T>::setSize(size_t _size)
{
	size = _size;
}

template<class T>
void Deck<T>::shuffle()
{
	srand(time(0));

	for (int i = 0; i < size; i++)
	{
		size_t random = i + (rand() % size);
		swap(deck[i], deck[random]);
	}
}

template<class T>
T& Deck<T>::drawCard()
{
	for (size_t i = 0; i < size - 1; i++)
	{
		swap(deck[i], deck[i + 1]);
	}
	return deck[size - 1];
}

template<class T>
void Deck<T>::add(const T& value)
{
	if (size <= 30 && !IsTheSame(value))
		deck[size++] = value;
}

template<class T>
T& Deck<T>::operator+=(const T& card)
{
	*this = *this + card;
	return *this;
}

template<class T>
inline bool Deck<T>::operator==(const Deck& other)
{
	for (size_t i = 0; i < size; ++i)
	{
		if (deck[i] != other.deck[i])
		{
			return false;
		}
	}
	return true;
}

template<class T>
inline void Deck<T>::print() const
{
	for (size_t i = 0; i < size; i++)
	{
		deck[i].print();
	}
}

template<class T>
T Deck<T>::operator+(const T& card)
{
	Deck<T> temp;
	for (int i = 0; i < size; ++i)
	{
		temp[i] = deck[i];
	}
	temp.add(card);
	return temp;
}