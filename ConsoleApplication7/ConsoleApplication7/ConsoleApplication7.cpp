#include <iostream>
using namespace std;

int main()
{
    int n; int num; cin >> n >> num;
    int result = 1;
    for (int i = 0; i < num; i++)
    {
        result *= n;
    }

    cout << result << endl;
    // За негативните числа не знам как да го направя(реципрочната част)

}
