#pragma once
#include <iostream>
#include <cstring>
class Film
{
private:
	char* movieName;
	char* directorName;
	int trophies;

	void copy(const Film& _Film);
	void erase();
public:
	Film();
	Film& operator=(const Film& _Film);
	Film(const Film& _Film);
	~Film();
	Film(const char* _movieName, const char* _directorName, int _trophies);

	const char* getMovieName() const;
	const char* getDirectorName() const;
	int getTrophies() const;
	void setMovieName(const char* _movieName);
	void setDirectorName(const char* _directorName);
	void setTrophies(int _trophies);
	void print();

};

