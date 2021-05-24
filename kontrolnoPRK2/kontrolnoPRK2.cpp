#include<iostream>
using namespace std;

const int SIZE = 5;

void invokePosition(int matrix[][SIZE], int row, int col) {
	for (size_t i = 0; i <= row; i++)
	{
		for (size_t j = 0; j <= col; j++)
		{
			if (i == row && j == col)
			{
				matrix[row][col];
				cout << matrix[row][col];
				return;
			}
		}
	}
	
}

void fillMatrix(int matrix[][SIZE]) {
	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
		{
			cin >> matrix[i][j];
		}		
	}
}

void printMatrix(int matrix[][SIZE]) {
	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int matrix[SIZE][SIZE] = { 0 };
	cout << "Fill the matrix: ";
	fillMatrix(matrix);
	printMatrix(matrix);
	int n, j;
	cout << "Now type the position of the element(Note, they should be between '0' and '4': ";
	do
	{
		cin >> n >> j;
	} while ((n < 0 || n > 4) || (j < 0 || j >4));
	
	invokePosition(matrix, n, j);
	
}

//task 2
//void removeS(char p[100], int size)
//{
//	for (int i = 0; p[i] != '\0'; ++i) {
//		if (!(p[i] >= '1' && p[i] <= '37') || (p[i] >= '39' && p[i] <= '47') || (p[i] >= '50' && p[i] <= '60') || (p[i] >= '62' && p[i] <= '123') || p[i] >= '125' || p[i] == '\0') {
//			for (int j = i; p[j] != '\0'; ++j) {
//				p[j] = p[j + 1];
//			}
//		}
//	}
//}
//
//int main() {
//	int arrSize = 100;
//	char* arr = new char[arrSize];
//	cout << "Enter your sentence: ";
//	cin.getline(arr, 100);
//	removeS(arr, 100);
//	cout << arr;
//	delete[] arr;
//	return 0;
//}
