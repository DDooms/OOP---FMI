#include <iostream>
using namespace std;

int main()
{
    int arr[69];
    int count = 0;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < count; i++)
    {
        
        if (arr[i] == 3 && arr[i + 1] == 8)
            {
                arr[i] = 6;
                for (int j = i; j < count - 1; j++)
                {
                    arr[j + 1] = arr[j + 2];
                }
                count--;
            }
        if (arr[i] == 2)
        {
            if (i == count - 1)
                arr[i] *= arr[0];
            else
                arr[i] *= arr[i + 1];
        }
    }

    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}