#pragma once
#include <iostream>
#include <cstring>
#include "Film.h"
const int MAX_CAPACITY = 20;
class FilmRanking
{
private:
	Film* films;
	int size;
	void copy(const FilmRanking& _FilmRanking);
	void erase();
public:
	FilmRanking();
	FilmRanking& operator=(const FilmRanking& _FilmRanking);
	FilmRanking(const FilmRanking& _FilmRanking);
	~FilmRanking();
	FilmRanking(Film* _films, int _size);

	const Film* getFilms() const;
	const int getSize() const;
	void setFilms(Film* _films, int size);
	void setSize(int _size);
	void print();

};

