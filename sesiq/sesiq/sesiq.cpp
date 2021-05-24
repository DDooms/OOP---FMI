#include <iostream>
using namespace std;
//task1
//void fillMatrix(int matrix[][10],int size) {
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t j = 0; j < size; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//}
//
//void printMatrix(int matrix[][10], int size) {
//	for (size_t i = 0; i < size; i++)
//	{
//		for (size_t j = 0; j < size; j++)
//		{
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//void checkMatrix(int matrix[][10], int size) {
//	//for (size_t i = 0; i < size/2; i++)
//	//{
//	//	cout << matrix[i][i] << " ";//1 5
//	//}
//	//for (int i = size - 1; i >= size/2 +1; i--)
//	//{
//	//	cout << matrix[i][i] << " ";// 7 5
//	//}
//	//for (size_t i = 0; i < size/2; i++)
//	//{
//	//	for (size_t j = 1; j < size/2; j++)
//	//	{
//	//		cout << matrix[j][i] << " ";//4 5
//	//	}
//	//}
//	//for (size_t i = size/2 + 1; i < size; i++)
//	//{
//	//	cout << matrix[i][i] << " ";// 5 7
//	//}
//	for (int i = (size - 1)/2; i >= 0; i--)
//	{
//		for (size_t j = size/2 + 2; j < size; j++)
//		{
//			cout << matrix[i][j] << " ";
//		}
//	}
//
//}
//
//int main() {
//	int size;
//	do
//	{
//		cin >> size;
//	} while (size < 3 || size % 2 ==0);
//	int matrix[10][10] = { 0 };
//	fillMatrix(matrix, size);
//	checkMatrix(matrix, size);
//
//}

//task2
//char** String = 0;
//void fillMatrix(char** matrix, int row) {
//	for (int i = 0; i < row; i++)
//	{
//		cin >> String[i];
//	}
//}
//void printMatrix(char** matrix, int row) {
//	for (int i = 0; i < row; i++)
//	{
//		cout << String[i]<<" ";
//	}
//	cout << endl;
//}
//
//
//int main() {
//	int row, col = 10;
//	cin >> row;
//	
//	String = new char* [row];
//	for (int i = 0; i < row; i++)
//	{
//		String[i] = new char[col];
//	}
//	
//	fillMatrix(String, row);
//	printMatrix(String, row);
//
//	for (int i = 0; i < row; i++)
//	{
//		delete[] String[i];
//	}
//	delete[] String;
//}

//task 3
//void swap(char& a, char& b) {
//	char temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//void permute(string s, int i, int n) {
//	int j;
//	if (i == n)
//	{
//		cout << s;
//	}
//	else
//	{
//		for (size_t j = i; j < s.length(); j++)
//		{
//			swap(s[i], s[j]);
//			permute(s, i + 1, n);
//			swap(s[i], s[j]);
//		}
//	}
//}
//
//int main() {
//	string s;
//	cin >> s;
//	permute(s, 0, s.length() - 1);
//	cout << endl;
//	
//}