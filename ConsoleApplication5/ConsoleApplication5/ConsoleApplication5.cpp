#include <iostream>
using namespace std;
void check(char niz1[], char niz2[])
{
    for (int help = 0; niz1[help]; help++)
    {
        for (int welp = 0; niz2[welp]; welp++)
        {
            if (niz1[help] == niz2[welp])
            {
                niz1[help] = toupper(niz2[welp]);
                break;
            }
        }
    }
}

int main() {
    const size_t size = 256;
    char arr[size];
    char arr2[size];

    cout << "Type the word (note, you can stop typing by entering '.': ";
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] == '.')
        {
            break;
        }
    }
    for (size_t i = 0; i < size; i++)
    {
        cin >> arr2[i];
        if (arr2[i] == '.')
        {
            break;
        }
    }
    check(arr, arr2);
    for (int help = 0; arr[help] != '.'; help++)
        cout << arr[help];
    return 0;
}