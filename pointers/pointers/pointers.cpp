#include <iostream>
using namespace std;

int SwapInteger(int& num1, int& num2) {
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	return 0;
}
int BigInteger(int &num1,int &num2) {
	while (true) {
		num1++;
		if (num1 /2 == num2)
		{
			break;
		}
	}
    
    return 0;
}

void Array(int *arr, int size) {
	for (int i = 0; i < size /2; i++)
	{
		SwapInteger(arr[i], arr[size - i - 1]);
	}
}

int main()
{
	
}

