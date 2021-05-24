#include <iostream>
using namespace std;

void ArrFill(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}
void ArrPrint(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void FillMatrix3Cols(int arr[][3], int row_size) {
	for (int i = 0; i < row_size; i++)
	{
		for (int j = 0; j <= 3; j++)
		{
			cin >> arr[i][j];
		}
	}
}
void PrintMatrix3Cols(int arr[][3], int row_size) {
	for (int i = 0; i < row_size; i++)
	{
		for (int j = 0; j <= 3; j++)
		{
			cout << arr[i][j];
		}
	}
	cout << endl;
}
void Add4(int& a, int& b) {
	a += 4;
	b += 4;
}
void max(int arr[], unsigned size, int& max) {
	int maxNumber = arr[0];
	for (unsigned int i = 0; i < size; i++)
	{
		if (maxNumber < arr[i])
		{
			maxNumber = arr[i];
		}
	}
	max = maxNumber;
}
void replace(int x[], int size, int replaceWhat, int replaceWith) {
	for (int i = 0; i < size; ++i)
	{
		if (x[i] == replaceWhat)
		{
			x[i] = replaceWith;
		}
	}
}

int main()
{
	
}

