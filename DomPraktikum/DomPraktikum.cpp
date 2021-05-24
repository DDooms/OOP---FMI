//#include <iostream>
//#include <cctype>
//using namespace std;

//task 1
//void printMatrix(int** matrix, int size) {
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < 9; ++j) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//void generateMatrix(int** matrix, int size) {
//    for (int i = 0; i < size; ++i) {
//        int number = i + 1, temp = 1;
//        for (int j = 0; j < 9; ++j) {
//            if (number + j > 9) {
//                matrix[i][j] = temp++;
//            }
//            else {
//                matrix[i][j] = number + j;
//            }
//        }
//    }
//}
//
//int main() {
//    int matrixSize;
//    cin >> matrixSize;
//
//    int** matrix = new int* [matrixSize];
//    for (int i = 0; i < matrixSize; ++i) {
//        matrix[i] = new int[9];
//    }
//
//    generateMatrix(matrix, matrixSize);
//
//    printMatrix(matrix, matrixSize);
//
//    for (int i = 0; i < matrixSize; ++i) {
//        delete[] matrix[i];
//    }
//
//    delete[] matrix;
//    return 0;
//}

//task 3
//void check(char niz1[], char niz2[])
//{
//    for (int help = 0; niz1[help]; help++)
//    {
//        for (int welp = 0; niz2[welp]; welp++)
//        {
//            if (niz1[help] == niz2[welp])
//            {
//                niz1[help] = toupper(niz2[welp]);
//                break;
//            }
//        }
//    }
//}
//
//int main() {
//    const size_t size = 256;
//    char arr[size];
//    char arr2[size];
//
//    cout << "Type the word (note, you can stop typing by entering '.': ";
//    for (size_t i = 0; i < size; i++)
//    {
//        cin >> arr[i];
//        if (arr[i] == '.')
//        {
//            break;
//        }
//    }
//    for (size_t i = 0; i < size; i++)
//    {
//        cin >> arr2[i];
//        if (arr2[i] == '.')
//        {
//            break;
//        }
//    }
//    check(arr, arr2);
//    for (int help = 0; arr[help] != '.'; help++)
//        cout << arr[help];
//    return 0;
//}

// task 2
//void MatrixFill(int arr[][100], int m) {
//	for (size_t i = 0; i < m; i++)
//	{
//		for (size_t j = 0; j < m; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//}
//
//void MatrixPrint(int arr[][100], int m) {
//	for (size_t i = 0; i < m; i++)
//	{
//		for (size_t j = 0; j < m; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//void swapElements(int& a, int& b, int& c, int& d) {
//	int temp = d;
//	d = c;
//	c = b;
//	b = a;
//	a = temp;
//}
//
//void swapElementsBack(int& a, int& b, int& c, int& d) {
//	int temp = a;
//	a = b;
//	b = c;
//	c = d;
//	d = temp;
//}
//
//void shiftElements(int arr[][100], int m, int n) {
//	int shift = 0;
//	for (size_t j = 0; j < m/2+1; j++)
//	{
//		if (j%2==0)
//		{
//			for (size_t i = 0; i < n; i++)
//			{
//				swapElements(arr[0 + shift][0 + shift], arr[shift][m - 1 - shift], arr[m - 1 - shift][m - 1 - shift], arr[m - 1 - shift][shift]);
//			}
//		}
//		else
//		{
//			for (size_t i = 0; i < n; i++)
//			{
//				swapElementsBack(arr[0 + shift][0 + shift], arr[shift][m - 1 - shift], arr[m - 1 - shift][m - 1 - shift], arr[m - 1 - shift][shift]);
//			}
//		}
//		shift++;
//	}
//	
//}
//
//int main() {
//	const size_t size = 100;
//	int arr[size][size], m, n;
//	cin >> m >> n;
//	
//	MatrixFill(arr, m);
//	shiftElements(arr, m, n);
//	MatrixPrint(arr, m);
//}

//task 4
//bool check(char* ch1, char ch2[]) {
//
//    bool flag = false;
//
//    if (*ch1 == '\0') {
//        return 1;
//    }
//
//    for (int i = 0; ch2[i] != '\0'; i++) {
//
//        if (*ch1 == ch2[i]) {
//            flag = true;
//        }
//    }
//    return (flag * check((ch1 + 1), ch2));
//}
//
//int main() {
//
//    char niz1[20];
//    char niz2[20];
//
//    cout << "Enter first string : ";
//    cin.getline(niz1, 20);
//
//    cout << "Enter second string : ";
//    cin.getline(niz2, 20);
//
//    cout << (check(&niz1[0], niz2)? "Yes" : "No");
//
//    return 0;
//}
