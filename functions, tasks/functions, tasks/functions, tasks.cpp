#include <iostream>
using namespace std;

//task 1
int absoluteNumber(int num) {
    if (num < 0)
    {
        return num *= -1;
    }
    return num *= 1;
}
double poweredNumber(double realN, int num) {
   
    double result = 1;
    bool negative = num < 0;
    if (negative)
    {
        num = absoluteNumber(num);
        for (int i = 0; i < num; i++)
        {
            result *= realN;
        }
        return 1 / result;
    }
    else {
        for (int i = 0; i < num; i++)
        {
            result *= realN;
        }
        return result;
    }

    return 0;
}
int minNumber(int num1, int num2) {
    if (num1 < num2) {
        return num1;
    }
    return num2;
}
int maxNumber(int num1, int num2) {
    if (num1 < num2) {
        return num2;
    }
    return num1;
}
int minOfThree(int num1, int num2, int num3) {
    return minNumber(minNumber(num1, num2), num3);
}
int maxOfThree(int num1, int num2, int num3) {
    return maxNumber(maxNumber(num1, num2), num3);
}
bool UpperCase(char letter) {
    return letter >= 'A' && letter <= 'Z';
}
bool LowerCase(char letter) {
    return letter >= 'a' && letter <= 'z';
}
bool IsLetter(char letter) {
    return UpperCase(letter) || LowerCase(letter);
}
bool isDigit(char num) {
    return num >= '0' && num <= '9';
}
//task 2
bool isPrime(int num) {
    for (int i = 2; i < num - 1; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}
bool PrimeNumbers(int num1, int num2) {
    return isPrime(num1) && isPrime(num2) && (num1 + 2 == num2);
}
//task 3
double Discount(double price, double disc) {
    return price - (price * disc / 100.0);
}
//task 4




int main()
{
    int n, j;
    cin >> n >> j;
    cout << poweredNumber(n, j);
}