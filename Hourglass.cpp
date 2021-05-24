#include <iostream> 
using namespace std;

int main()
//TASK 4
{
    int n, i, j, k;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "* ";;//Goren kapak
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {

            if (i == j)
            {
                cout << "*";//lqvo stupalo
            }
            else cout << " ";

        }
        for (k = n; k >= 1; k--)
        {
            if (i == k + 1)
            {
                cout << "*";//dqsno stupalo
            }
            else cout << " ";
        }
        cout << endl;
    }
    for (i = 0; i <= n - 1; i++)
    {
        cout << " ";//srednata zvezda
    }
    cout << "*";      
    cout << endl;
        for (i = 1; i < n; i++)
        {
            for (j = n; j > 0; j--)
            {

                if (i == j)
                {
                    cout << "*";//lqvo stupalo
                }
                else cout << " ";

            }
            for (k = 1; k <= n; k++)
            {
                if (i == k-1)
                {
                    cout << "*";//dqsno stupalo
                }
                else cout << " ";
            }
            cout << endl;
        }
        for (i = 0; i <= n; i++)
            {
                cout << "* ";;//Dolen kapak
            }
}