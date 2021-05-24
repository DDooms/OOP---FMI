#include <iostream>
using namespace std;

int main()
{
    int side;

    cout << "Enter side size: ";
    cin >> side;
    for (int i = 0; i < side; i++)
    {
        cout << " *";
    }
    for (int i = 1; i < side; i++)      //height
    {
        cout << "\n";
        for (int j = 1; j <= i; j++)       //length
        {
            cout << " *";
        }
        for (int h = 0; h < 2 * (side - i - 1); h++)
        {
            cout << " ";
        }
        cout << " *";

    }
}