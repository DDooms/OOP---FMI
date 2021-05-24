#include <iostream>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		cin >> n;
		sum += n;
	}
	cout << sum;
}

