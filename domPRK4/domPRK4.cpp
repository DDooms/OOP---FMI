#include <iostream>
using namespace std;

bool check(char* ch1, char* ch2, int index)
{
	if(*ch1 == '\0')
	{
		return 1;
	}
	if(ch2[index] == '\0')
	{
		return 0;
	}
	if(*ch1 == ch2[index])
	{
		index = -1;
		return check(ch1 + 1, ch2, index + 1);
	}
	return check(ch1, ch2, index + 1);
}

int main() {

	char niz1[20];
	char niz2[20];

	cout << "Enter first string : ";
	cin.getline(niz1, 20);
	cout << "Enter second string : ";
	cin.getline(niz2, 20);

	cout << (check(&niz1[0], niz2, 0) ? "Yes" : "No");

	return 0;
}