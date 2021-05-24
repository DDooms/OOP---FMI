#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
	int product = 1;
	if (n == 0 || n == 1)
	{
		cout << 1;
	}
	else
	{
		
		while (n != 1)
		{
			product *= n;
			n--;			
		}
		cout << product;
	}
}


