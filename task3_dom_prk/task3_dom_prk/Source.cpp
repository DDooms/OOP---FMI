#include <iostream>
#include <cstring>
#include "Film.h"

int main() {
	Film film;
	film.setDirectorName("SSSS");
	film.print();

	Film film2(film);
	film2.print();
}