#include "Film.h"

void Film::copy(const Film& _Film)
{
	this->movieName = new char[strlen(_Film.movieName) + 1];
	strcpy_s(this->movieName, strlen(_Film.movieName) + 1, _Film.movieName);
	this->directorName = new char[strlen(_Film.directorName) + 1];
	strcpy_s(this->directorName, strlen(_Film.directorName) + 1, _Film.directorName);
	this->trophies = _Film.trophies;
}

void Film::erase()
{
	delete[] this->movieName;
	delete[] this->directorName;
}

Film::Film()
{
	this->movieName = new char[6];
	strcpy_s(movieName, 6, "empty");
	this->directorName = new char[6];
	strcpy_s(directorName, 6, "empty");
	this->trophies = 0;
}

Film& Film::operator=(const Film& _Film)
{
	if (this != &_Film)
	{
		this->erase();
		this->copy(_Film);
	}
	return *this;
}

Film::Film(const Film& _Film)
{
	this->copy(_Film);
}

Film::~Film()
{
	this->erase();
}

Film::Film(const char* _movieName, const char* _directorName, int _trophies)
{
	this->movieName = new char[strlen(_movieName) + 1];
	strcpy_s(this->movieName, strlen(_movieName) + 1, _movieName);
	this->directorName = new char[strlen(_directorName) + 1];
	strcpy_s(this->directorName, strlen(_directorName) + 1, directorName);
	this->trophies = _trophies;
}

const char* Film::getMovieName() const
{
	return this->movieName;
}

const char* Film::getDirectorName() const
{
	return this->directorName;
}

int Film::getTrophies() const
{
	return this->trophies;
}

void Film::setMovieName(const char* _movieName)
{
	delete[] this->movieName;
	this->movieName = new char[strlen(_movieName) + 1];
	strcpy_s(this->movieName, strlen(_movieName) + 1, _movieName);
}

void Film::setDirectorName(const char* _directorName)
{
	delete[] this->directorName;
	this->directorName = new char[strlen(_directorName) + 1];
	strcpy_s(this->directorName, strlen(_directorName) + 1, _directorName);
}

void Film::setTrophies(int _trophies)
{
	this->trophies = _trophies;
}

void Film::print()
{
	std::cout << movieName << "\n";
	std::cout << directorName << "\n";
	std::cout << trophies << "\n";
}
