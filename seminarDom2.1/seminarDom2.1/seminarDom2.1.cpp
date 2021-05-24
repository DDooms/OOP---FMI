//#include <iostream>
//#include <iomanip>
//#include <cctype>
//using namespace std;

//task 1
//void similarCols(int** matrix, int rowSize, int colSize) {
//	bool flag = false;
//	int help1 = colSize - 1;
//	for (int i = 0; i < rowSize; i++)
//	{
//		flag = false;
//		for (int j = 0; j < colSize; j++)
//		{
//			help1 = colSize - 1;
//			while (help1 != j)
//			{
//				if (matrix[j][i] == matrix[help1][i]&&matrix[j][i] !=0)
//				{
//					flag = true;
//					cout << setw(4) << 1 << " ";
//					break;
//				}
//				help1--;
//			}
//			if (help1 == colSize-1 && !flag)
//			{
//				cout << setw(4) << 0 << " ";
//				break;
//			}		
//		}
//	}
//}
//
//void matrixFill(int** matrix, int rowSize, int colSize) {
//	bool flag = false;
//	for (int i = 0; i < rowSize; i++)
//	{
//		for (int j = 0; j < colSize; j++)
//		{
//			do
//			{
//				cin >> matrix[i][j];
//				if (matrix[i][j] == 0)
//				{
//					for (int k = i; k < rowSize; k++)
//					{
//						for (int l = j; l < colSize; l++)
//						{
//							matrix[k][l] = 0;						
//						}
//						j = 0;
//					}
//					flag = true;
//					break;
//				}				
//			} while (matrix[i][j] < 1000 || matrix[i][j] > 9999);
//			if (flag)
//			{
//				break;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//}
//
//void matrixPrint(int** matrix, int rowSize, int colSize) {
//	for (int i = 0; i < rowSize; i++)
//	{
//		for (int j = 0; j < colSize; j++)
//		{
//			if (matrix[i][j] == 0)
//			{
//				cout << "0000" << " ";
//			}
//			else
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//
//int main()
//{
//	int **matrix, rows, cols;
//	cout << "Type the number of the rows and cols: ";
//	cin >> rows >> cols;
//	cout << "Now type the last 4 numbers of any EGN(If you type more or less than 4 numbers, you will have to retype the number)";
//	cout << "Note- if you want to stop the typing, just type '0': ";
//	matrix = new int* [rows];
//	for (int i = 0; i < rows; i++)
//	{		
//		matrix[i] = new int[cols];
//	}
//	matrixFill(matrix, rows, cols);
//	matrixPrint(matrix, rows, cols);
//	similarCols(matrix, rows, cols);
//	
//	for (int i = 0; i < rows; i++)
//	{
//		delete[]matrix[i];		
//	}
//	delete[]matrix;
//}

//task 2
//void arrayLength(char arr[], int& length)
//{
//	int index = 0;
//	int size = 0;
//	while (arr[index] != '\0')
//	{
//		index++;
//		size++;
//
//	}
//	length = size;
//}
//
//void swap(char& first, char& second)
//{
//	int temp = first;
//	first = second;
//	second = temp;
//}
//
//void replaceFourAndSix(char arr[], int& length)
//{
//	for (int i = 0; i < length; ++i)
//	{
//		bool firstStatement = (arr[i] == '4' || arr[i] == '6') && ((arr[i + 1]) >= 'a' && arr[i + 1] <= 'z');
//		bool secondStatement = (arr[i] == '4' || arr[i] == '6') && ((arr[i + 1]) >= 'a' && arr[i + 1] <= 'z');
//		if (firstStatement || secondStatement)
//		{
//			++length;
//			if (arr[i] == '6')
//			{
//				arr[i] = 's';
//			}
//			else if (arr[i] == '4')
//			{
//				arr[i] = 'c';
//			}
//			for (int k = 0, j = i + 1; j < length; ++j, ++k)
//			{
//				swap(arr[length - k], arr[length - 1 - k]);
//			}
//			arr[i + 1] = 'h';
//		}
//	}
//}
//
//void anySymbols(char arr[], int length)
//{
//	for (int i = 0; i < length; ++i)
//	{
//		bool isLetter = arr[i] >= 'a' && arr[i] <= 'z';
//		bool isSymbol = arr[i + 1] == '.' || arr[i + 1] == ':' || arr[i + 1] == '!' || arr[i + 1] == '?';
//		if (isLetter && isSymbol)
//		{
//			for (int j = i + 2; j < length; ++j)
//			{
//				if (arr[j] >= 'a' && arr[j] <= 'z')
//				{
//					arr[j] = toupper(arr[j]);
//					break;
//				}
//			}
//		}
//	}
//}
//
//void delWord(char arr[], int& length)
//{
//	int wordLength;
//	char word[] = "visoko";
//	arrayLength(word, wordLength);
//
//	for (int i = 0; i < length; ++i)
//	{
//		int j, temp = i;
//		for (j = 0; j < wordLength; ++j)
//		{
//			if (arr[temp] == word[j])
//			{
//				++temp;
//			}
//			else
//			{
//				break;
//			}
//		}
//		int check = temp - i;
//		if (check == wordLength)
//		{
//			temp = i;
//			for (j = i; j < (length - wordLength); ++j)
//			{
//				arr[j] = arr[j + wordLength];
//			}
//			length -= wordLength;
//			arr[j] = '\0';
//		}
//	}
//}
//
//int main()
//{
//	const size_t size = 256;
//	char arr[size];
//	cout << "Enter your sentence: ";
//	cin.getline(arr, sizeof(arr));
//	int length;
//	arrayLength(arr, length);
//	replaceFourAndSix(arr, length);
//	delWord(arr, length);
//	anySymbols(arr, length);
//
//	cout << arr << endl;
//	return 0;
//}


#include <iostream>
using namespace std;
void printDani(int n, int rows)
{
    int copy = n;
    for (int i = 0; i < rows; i++)
    {
        cout << copy << " ";
        if (copy == 1)
            return;
        copy--;
    }
    cout << endl;
    printDani(n, rows + 1);
}
void count(int* arr, int size, int elem, int& occ) {
    if (size == 0) {
        return;
    }

    if (arr[0] != elem) {
        return count(arr + 1, size - 1, elem, occ);
    }

    occ++;
    return count(arr + 1, size - 1, elem, occ);
}

void replace(int* arr, int size, int oldElem, int newElem)
{
    if (size == 0)
        return;
    if (arr[0] == oldElem)
    {
        arr[0] = newElem;
    }
    return replace(arr + 1, size - 1, oldElem, newElem);

}


void printArray(const int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void helperPrinter(int n, int i) {
    if (i == 0) {
        cout << endl;
        return;
    }

    cout << n - 1 << " ";

    return helperPrinter(n - 1, i - 1);
}

void printPyramid(int n, int i) {
    if (n == i) {
        return;
    }
    cout << n << " ";
    helperPrinter(n, i);
    printPyramid(n, i + 1);
}

void printMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++) {
            cout << matrix[i][j] << ' ';
        }

        cout << endl;
    }

}

void makeMatrix(int* arr, int size, int n, int**& matrix) {
    int final_size = 0;
    if (size % n == 0) {
        final_size = size / n;
        matrix = new int* [final_size];
    }
    else {
        final_size = size / n + 1;
        matrix = new int* [final_size];
    }

    for (int i = 0; i < final_size; i++) {
        matrix[i] = new int[n];
    }
    int k = 0;

    for (int i = 0; i < final_size; i++) {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = arr[k];
            k++;
        }
    }
}

int main() {
    int rows = 5;

    //int* array = new int[420];
    int** matrix = nullptr;
    int array[10] = { 4,5,6,6,4,2,3,4,6 };
    int size = 9;
    int n = 3;
    makeMatrix(array, size, n, matrix);
    printMatrix(matrix, 3);

    //matrix = new int* [rows];
    //for (int i = 0; i < rows; i++)
    //{
    //    matrix[i] = new int[rows];  
    //}
//

//
    //for(int i = 0; i < rows; i++){
    //	delete[] matrix[i];
    //}
    //delete matrix; 
    return 0;


