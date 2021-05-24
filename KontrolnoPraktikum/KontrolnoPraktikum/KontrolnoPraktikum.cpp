#include <iostream>
using namespace std;

int main()
{
	//Task1
	/*int m, n, a, b, c, d;
	do
	{
		cin >> m;
	} while (m < 1000 || m > 9999);
	do
	{
		cin >> n;
	} while (n < 1000 || n > 9999 || n < m);


	for (int i = m; i <= n; i++)
	{
		d = i % 10;
		c = i / 10 % 10;
		b = i / 100 % 10;
		a = i / 1000;
		if (d > c && c > b && b > a)
		{
			cout << i << " ";
		}

	}
	cout << endl;
	return 0;*/

	//Task 2


	/*int size[69], n, count = 0;
	bool isTrue;
	do 
	{
	cout << "Input lenght of array. It must be bigger than 2.. ";
	cin >> n;
	}
	while(n < 3);
	cout << "Now enter the array.. ";
	for (int i = 0; i < n; i++)
	{		
		cin >> size[i];
	}
	for (int i = 0; i < n; ++i)
	{
		isTrue = false;
		if (i <= n - 2 && size[i] == size[i + 2])
		{
			count++;
			isTrue = true;
			++i;
		}
	}
	cout << endl;
	if (count == n / 2 || isTrue == true)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	return 0;*/

	//Task 3


	/*char size[8];
	int n, count = 0;
	bool flag1 = true, flag2 = true, flag3 = true;
	
	do
	{
		cout << "the password needs to be 8 symbols: ";
		cin >> n;
	} while (n <8 || n > 8);
	for (int i = 0; i < n; i++)
	{
		cin >> size[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (size[i] >= 'A' && size[i] <= 'Z')
		{
			break;
		}
		else if (i == n-1)
		{
			cout << "invalid password";
			return 1;
		} 
		
	}
	for (int i = 0; i < n; i++)
	{
		if (size[i] >= 'a' && size[i] <= 'z')
		{
			break;
		}

		else if (i == n - 1)
		{
			cout << "invalid password";
			return 1;
		}

	}
	for (int i = 0; i < n; i++)
	{
		if (size[i] >= 48 && size[i] <= 57)
		{
			count++;
			if (count == 2)
			{
				flag3;
				break;
			}
		}
		else if (i == n -1)
		{
			cout << "invalid password";
			return 1;
		}

	}
	if (flag1 && flag2 && flag3)
	{
		cout << "password saved";
	}
	return 0;*/
	
}
