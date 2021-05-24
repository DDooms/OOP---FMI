#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
	
	if (n > 99 && n <= 999)
	{
		int unit = n % 10;
		int decimal = n /10 % 10;
		int hundred = n / 100;
		int product = unit * decimal * hundred;
		if (product > 99 && product <= 999)
		{
			cout << "YES\n";
		}
		else
			cout << "NO\n";
	}
	else
		cout << "Invalid input";
}

