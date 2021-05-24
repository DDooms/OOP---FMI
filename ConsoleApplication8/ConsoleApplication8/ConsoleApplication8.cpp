#include <iostream>
using namespace std;

int main()
{
    int n, fibo1 = 0, fibo2 = 1, nextTerm = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        
        if (i == 1)
        {
            cout << fibo1;
            continue;
        }
        if (i == 2)
        {
            cout << " " << fibo2 << " ";
            continue;
        }
        nextTerm = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = nextTerm;

        cout << nextTerm << " ";
    }
}