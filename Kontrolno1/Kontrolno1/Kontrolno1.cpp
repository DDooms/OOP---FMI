#include <iostream>
using namespace std;

int main()
{
    //Task 1 (a)
    double temperature;
    bool cough, bolkiVGurlo, smellIsMissing, PCRtest;
    cin >> temperature >> cough >> bolkiVGurlo >> smellIsMissing >> PCRtest;
    bool check1 = cough && temperature >= 37.5 && temperature <= 40.5 && bolkiVGurlo;
    bool check2 = cough && smellIsMissing;
    bool check3 = PCRtest;
    cout << (check1 || check2 || check3 ? "Pesho needs to be quarantined ASAP!" : "He will live!");

    return 0;

    //(b)
    /*int num; cin >> num;
    int a, b, c;
    if (num > 99 && num < 1000)
    {
        c = num % 10;
        b = num / 10 % 10;
        a = num / 100;
    }
    bool diffNums = a != b && a != c && b != c;
    cout << (diffNums ? "They are not the same" : "Are you blind? They are the same");
    return 0;*/

    //Task 2
    /*int n;
    cout << "Number should be positive: ";
    do
    {
        cin >> n;
    } while (n <= 0);
    int before = n - 1;
    int count = 0;

    for (int i = 0; i < 100; i++)
    {

        if (before % 2 == 0)
        {
            
            n = before / 2;
        }
        else
        {
            
            n = (before * 3) + 1;
        }
        before = n;
        count++;
        if (n == 1)
        {
            cout << n << endl;
            cout << "Number of elements: " << count;
            break;
        }
        else cout << n << " ";
        
    }


    return 0;
}*/


//    //Task 3, ako vzema nqkakva tochka ot tuk shte se radvam haha
//    int n, nums; cin >> n;
//    int middleAr = 0;
//    int count = 1;
//    int count2 = 2;
//    int firstNum = 0;
//    int secondNum = 0;
//    int a, b, c, d, e, f, g, h, i, j, k, l, m;
//
//    for (int i = 1; i <= n; i++) // loop for the numbers
//    {
//
//            cin >> nums;      
//        middleAr += nums;
//        
//        if (n == 1)
//        {
//            firstNum += nums;
//            firstNum % 100 == e;
//            firstNum % 1000 == d;
//            firstNum % 10000 == c;
//            firstNum % 100000 == b;
//            firstNum / 10 % 10 == a;
//            firstNum / 10 % 100 == f;
//            firstNum / 10 % 1000 == g;
//            firstNum / 10 % 10000 == h;
//            firstNum / 100 % 10 == i;
//            firstNum / 100 % 100 == j;
//            firstNum / 100 % 1000 == k;
//            firstNum / 1000 % 10 == l;
//            firstNum / 1000 % 100 == m;
//        } 
//        else if (n == 2)
//        {
//            secondNum += nums;
//            secondNum % 100 == e;
//            secondNum % 1000 == d;
//            secondNum % 10000 == c;
//            secondNum % 100000 == b;
//            secondNum / 10 % 10 == a;
//            secondNum / 10 % 100 == f;
//            secondNum / 10 % 1000 == g;
//            secondNum / 10 % 10000 == h;
//            secondNum / 100 % 10 == i;
//            secondNum / 100 % 100 == j;
//            secondNum / 100 % 1000 == k;
//            secondNum / 1000 % 10 == l;
//            secondNum / 1000 % 100 == m;
//        }
//        count++;
//        count2++;
//    }
//    cout << "Arithmetic value: " << middleAr / n;
}

