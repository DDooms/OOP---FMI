#include <iostream>
using namespace std;
#include <cmath>

int main()// tova e zadacha 1
{
    int n;
    cin >> n;
    bool goodC, paid, passed;
    cin >> goodC >> paid >> passed;
    bool check1 = n == 2 && goodC;
    bool check2 = n == 1 && goodC && paid;
    bool check3 = n == 0 && passed && paid && goodC;

    cout << (check1 || check2 || check3 || n == 5 ? "Good job, you passed!" : "September is a fun month!");
}

int main()// tova e zadacha 2
{
	int n, k;
	int counter = 0;
	cin >> n;
	
	bool solved = false;
		while (solved == false)
		{
			cin >> k;
			counter++;
			if (n == k)
			{
				if (counter == 1)
				{
					cout << "Chackpot! You are really good at this!";
				}
				else
				{
					cout << "Chackpot! - It took you " << counter << " tries!";
				}
				solved = true;

			}
			else if (k > n)
			{
				cout << "Try with a smaller number: ";
			}
			else
				cout << "Try with a bigger number: ";
		}
}

int main() // tova e zadacha 3
{
	int year, days;
	float money = 0;
	cin >> year;
	bool isLeapYear = ((year % 4 == 0) && (year % 100 != 0) || year % 400 == 0);
	if (isLeapYear)
	{
		days = 29;
	}
	else
	{
		days = 28;
	}
	for (int i = 1; i <= days; i++)
	{
		if (i == 2 || i == 3 || i == 5 || i == 7 || i == 11 || i == 13 || i == 17 || i == 19 || i == 23 || i == 29)
		{
			money += 2.00;
			continue;
		}
		if (i % 2 == 0)
		{
			money += 2.99;
		}
		else if (i % 2 != 0) 
		{
			money += 3.00;
		}
	}
	
	
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << money / days;
}

// ne znam kak da napravq zadacha 4
