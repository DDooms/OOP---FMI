#include <iostream>
using namespace std;

//task 2
//void removeSymbols(char* p, const char* pCharsToRemove) {
//	int Remove[256] = { 0 };
//	if (p == NULL || pCharsToRemove == NULL)
//	{
//		return;
//	}
//	while (*pCharsToRemove)
//	{
//		Remove[*pCharsToRemove++] = true;
//	}
//	char* pDest = p;
//	while (*p)
//	{
//		if (!Remove[*p]) {
//			*pDest++ = *p;
//		}
//		p++;
//	}
//	*pDest = '\0';
//}
//
//int main() {
//	int arrSize = 100;
//	char* arr = new char[arrSize];
//	cout << "Enter your sentence: ";
//	cin.getline(arr, 100);
//	removeSymbols(arr, "[]");
//	cout << arr;
//	return 0;
//}

//task 3
//const int SIZE = 20;
//
//void recursive(int* arr, int size, int sum) {
//	int i = 0;
//	if (size == 0)
//	{
//		return;
//	}
//	if (arr[i] + arr[i + 1] + arr[i + 2] + arr[i + 3] == sum)
//	{
//		cout << "Quadruplet exists\n";
//		return;
//	}
//	++i;
//	return recursive(arr+1, size - 1, sum);
//}
//
//int main() {
//	
//	int size, sum;
//	cout << "Enter the size: ";
//	cin >> size;
//	int arr[SIZE];
//	for (int i = 0; i < size; i++)
//	{
//		cin >> arr[i];
//	}
//	cout << "Enter the sum: ";
//	cin >> sum;
//	recursive(arr, size, sum);
//	return 0;
//}
