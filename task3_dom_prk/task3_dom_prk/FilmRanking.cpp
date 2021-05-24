#include "FilmRanking.h"
const int MAX_CAPACITY = 20;

void FilmRanking::copy(const FilmRanking& _FilmRanking)
{
	this->films = new Film[20];
	this->size = _FilmRanking.size;
}

void FilmRanking::erase()
{
	delete[] this->films;
}

FilmRanking::FilmRanking()
{
	int size = 0;
	films = new Film[MAX_CAPACITY];
}

FilmRanking& FilmRanking::operator=(const FilmRanking& _FilmRanking)
{
	if (this != &_FilmRanking)
	{
		this->erase();
		this->copy(_FilmRanking);
	}
	return *this;
}

FilmRanking::FilmRanking(const FilmRanking& _FilmRanking)
{
	this->copy(_FilmRanking);
}

FilmRanking::~FilmRanking()
{
	this->erase();
}

FilmRanking::FilmRanking(Film* _films, int _size)
{
	this->size = _size;
	films = new Film[_size];
	for (int i = 0; i < _size ; i++)
	{
		this->films[i] = _films[i];
	}
}

const Film* FilmRanking::getFilms() const
{
	return this->films;
}

const int FilmRanking::getSize() const
{
	return this->size;
}

void FilmRanking::setFilms(Film* _films, int _size)
{
	delete[]this->films;
	this->films = new Film[_size];
	this->size = _size;
	
	for (size_t i = 0; i < size; i++)
	{
		films[i] = _films[i];
	}
}

void FilmRanking::setSize(int _size)
{
	this->size = _size;
}

void FilmRanking::print()
{
	for (size_t i = 0; i < size; i++)
	{
		films[i].print();
		std::cout << std::endl;
	}
}
