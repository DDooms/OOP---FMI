#include <iostream>
using namespace std;

/*task 1
void fillMatrix(double matrix[][10], int size) {
	for (int i = 0; i < size; i++)
	{
		cin >> matrix[i][i];
	}

	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			matrix[i][j] = i + matrix[i - 1][j];
		}
	}

	for (int i = size-1; i >= 0; i--)
	{
		for (int j = i+1; j < size; j++)
		{
			matrix[i][j] = (matrix[i][j-1] + matrix[i+1][j]) / 2;
		}
	}
}

void printMatrix(double matrix[][10], int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	double matrix[10][10] = { 0 };
	int n;
	do
	{
		cin >> n;
	} while (n < 4 || n > 10);
	fillMatrix(matrix, n);
	printMatrix(matrix, n);
}
*/
/*task 2
void CapitalLetters(char* p, int size) {
	for (int i = 0; i < size; i++)
	{
		if (*(p+i) == '[')
		{
			for (int j = i; *(p+j) != ']'; j++)
			{
				if (*(p+j) >= 'a' && *(p+j) <= 'z' )
				{
					*(p+j) = toupper(*(p+j));
				}
			}
		}
	}
}
void removeSymbols(char* p, const char* pCharsToRemove) {
	int Remove[256] = { 0 };
	if (p == NULL || pCharsToRemove == NULL)
	{
		return;
	}
	while (*pCharsToRemove)
	{
		Remove[*pCharsToRemove++] = true;
	}
	char* pDest = p;
	while (*p)
	{
		if (!Remove[*p]) {
			*pDest++ = *p;
		}
		p++;
	}
	*pDest = '\0';
}
		
int main() {
	int arrSize = 100;
	char* arr = new char[arrSize];
	cout << "Enter your sentence: ";
	cin.getline(arr, 100);
	CapitalLetters(arr, 100);
	removeSymbols(arr, "[]");
	cout << arr;
	return 0;
}
*/
//task 3
const int SIZE = 20;

void recursive(int* arr, int size, int sum) {
	int i = 0;
	if (size == 0)
	{
		return;
	}
	if (arr[i] + arr[i + 1] + arr[i + 2] + arr[i + 3] == sum)
	{
		cout << "Quadruplet exists\n";
		return;
	}
	++i;
	return recursive(arr+1, size - 1, sum);
}

int main() {
	
	int size, sum;
	cout << "Enter the size: ";
	cin >> size;
	int arr[SIZE];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "Enter the sum: ";
	cin >> sum;
	recursive(arr, size, sum);
	return 0;
}