#include<iostream>
using namespace std;

//const int SIZE = 5;
//
//bool invokePosition(int matrix[][SIZE], int row, int col) {
//	if (!(matrix[row][col] == matrix[row-2][col+1] && row - 2 >= 0 && col + 1 <= SIZE))
//	{
//		return 0;
//	}
//	if (!(matrix[row][col] == matrix[row - 2][col - 1] && row - 2 >= 0 && col - 1 >= 0))
//	{
//		return 0;
//	}
//	if (!(matrix[row][col] == matrix[row + 2][col + 1] && row + 2 <= SIZE && col + 1 <= SIZE))
//	{
//		return 0;
//	}
//	if (!(matrix[row][col] == matrix[row + 2][col - 1] && row + 2 <= SIZE && col - 1 >= 0))
//	{
//		return 0;
//	}
//	if (!(matrix[row][col] == matrix[row - 1][col + 2] && row - 1 >= 0 && col + 2 <= SIZE))
//	{
//		return 0;
//	}
//	if (!(matrix[row][col] == matrix[row - 1][col - 2] && row - 1 >= 0 && col - 2 >= 0))
//	{
//		return 0;
//	}
//	if (!(matrix[row][col] == matrix[row + 1][col + 2] && row + 1 <= SIZE && col + 2 <= SIZE))
//	{
//		return 0;
//	}
//	if (!(matrix[row][col] == matrix[row + 1][col - 2] && row + 1 <= SIZE && col - 2 >= 0))
//	{
//		return 0;
//	}
//	return 1;
//}
//
//void fillMatrix(int matrix[][SIZE]) {
//	for (size_t i = 0; i < SIZE; i++)
//	{
//		for (size_t j = 0; j < SIZE; j++)
//		{
//			cin >> matrix[i][j];
//		}		
//	}
//}
//
//void printMatrix(int matrix[][SIZE]) {
//	for (size_t i = 0; i < SIZE; i++)
//	{
//		for (size_t j = 0; j < SIZE; j++)
//		{
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	int matrix[SIZE][SIZE] = { 0 };
//	cout << "Fill the matrix: ";
//	fillMatrix(matrix);
//	printMatrix(matrix);
//	int n, j;
//	cout << "Now type the position of the element(Note, they should be between '0' and '4': ";
//	do
//	{
//		cin >> n >> j;
//	} while ((n < 0 || n > 4) || (j < 0 || j >4));
//	
//	cout << boolalpha << invokePosition(matrix, n, j);
//	
//}

//task 2
bool checkSymbols(char* p) {
	return *p == '=' || *p == '0' || *p == '1' || *p == '&' || *p == '|';
}

void stoyansIdea(char* p) {
	while (*p = *(1 + p++));
	{

	}
}

void removeS(char* p, int size)
{
	while (*p != '\0')
	{
		if (!checkSymbols(p)) {
			stoyansIdea(p);
			continue;
		}
		*p++;
	}
}

int main() {
	int arrSize = 100;
	char* arr = new char[arrSize];
	cout << "Enter your sentence: ";
	cin.getline(arr, 100);
	removeS(arr, 100);
	cout << arr;
	delete[] arr;
	return 0;
}
