#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
	if (n % 2 == 0 || n % 3 == 0 )
	{
		if (n == 2 || n == 3)
		{
			cout << "YES\n";
		}
		else
		cout << "NO\n";
	}
	else
		cout << "YES\n";
}

