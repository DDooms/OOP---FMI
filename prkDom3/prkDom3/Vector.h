#pragma once
#include "String.h"

template<class T>
class Vector {
	T* vector;
	size_t size;
	size_t capacity;

	void Resize() {
		capacity *= 2;
		T* newDeck = new T[capacity];

		for (size_t i = 0; i < size; i++)
			newDeck[i] = vector[i];

		delete[] vector;
		vector = newDeck;
	}
public:
	Vector() {
		size = 0;
		capacity = 4;
		vector = new T[capacity];
	}
	void PushBack(const T& value) {
			if (size >= capacity)
				Resize();

			vector[size++] = value;
	}
	size_t getSize() const {
		return size;
	}
	size_t getCap() const {
		return capacity;
	}
	const T& operator[](size_t index) const {
		return vector[index];
	}
	void PopBack() {
		if (size > 0)
			size--;
	}
	void copy(const T& other) {
		vector = new T[other.capacity];
		size = other.size;
		capacity = other.capacity;
		for (size_t i = 0; i < size; i++)
		{
			vector[i] = other.vector[i];
		}
	}
	Vector& operator=(const Vector& other) {
		if (this != &other)
		{
			delete[] vector;
			copy();
		}
		return *this;
	}
};