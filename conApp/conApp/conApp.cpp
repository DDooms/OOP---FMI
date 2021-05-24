#include <iostream>
using namespace std;

int main()
{
	// TASK 1
	char firstName; char fathersName; char lastName;

	cout << "If you type something different(that doesnt match the criteria), you will try again... so dont mess things up!!!\n";

	do
	{				
		cout << "Enter the first letter of your First name:";
		cin >> firstName;
	} while (firstName <= 64 || firstName >= 91);
	do
	 {
		cout << "Enter the first letter of your Fathers name:";
		cin >> fathersName;
	 } while (fathersName <= 64 || fathersName >= 91);
	do
	{
		cout << "Enter the first letter of your Last name:";
		cin >> lastName;
	} while (lastName <= 64 || lastName >= 91);
	cout << endl;

	
	int Bday, Bmonth, Byear;

	do
	{
	     cout << "Enter your birth day: ";
	     cin >> Bday;
	} while (Bday < 1 || Bday > 31);
	do
	{
	     cout << "Enter your birth month: ";
	     cin >> Bmonth;
	} while (Bmonth < 1 || Bmonth > 12);
	do
	{
	     cout << "Enter your birth year:";
	     cin >> Byear;
	} while (Byear > 2020);
	cout << endl;
	int age = 2020 - Byear;

	int flightDay, flightMonth, flightYear, flightHours, flightMinutes;
	
	do
	{
	    cout << "Enter the day you'll travel: ";
	    cin >> flightDay;
	} while (flightDay < 1 || flightDay > 31);
	do
	{
	    cout << "Enter the month you'll travel: ";
	    cin >> flightMonth;
	} while (flightMonth < 1 || flightMonth > 12);
	do
	{
		cout << "You know it's 2020, right?\n";
	    cout << "Enter the year you'll travel: ";
	    cin >> flightYear;
	} while (flightYear < 2019);
	do
	{
	    cout << "What time(hours) is your flight:";
	    cin >> flightHours;
	} while (flightHours < 0 || flightHours> 23);
	do
	{
	    cout << "What time(minutes) is your flight:";
	    cin >> flightMinutes;
	} while (flightMinutes < 0 || flightMinutes > 59);
	cout << endl;
	

	
	int money = 0;
	int discount;
	int destination;
	/*Brazil = 250lv, Turkey = 100lv, Hungary = 200lv;*/
	bool isAm = flightHours <= 12 && flightHours >= 0 && flightMinutes <= 59 && flightMinutes >= 0;
	if (isAm)
	{
		discount = 10;
	}
	else discount = 5;
	cout << "With BerayAir you can go only to 3 destinations - Brazil-250lv, Turkey-100lv, Hungary-200lv" << endl;
	
	do
	{
		cout << "Enter a number for the destination: ";
		cin >> destination;
	} while (destination < 0 || destination > 4);
	
	if (destination == 1)
	{
		money = (250 * age) - discount;
	}
	else if (destination == 2)
	{
		money = (100 * age) - discount;
	}
	else if (destination == 3)
	{
		money = (200 * age) - discount;
	}
	cout << endl;
	cout << "So you have chosen destination " << destination << endl;
	cout << firstName << fathersName << lastName << "|"
		         << Bday << "." << Bmonth << "." << Byear << "|"
		        << flightDay << "." << flightMonth << "." << flightYear << "|"
		        << flightHours << ":" << flightMinutes << "|"
		        << destination << "|"
		        << money << endl;				
	
	return 0;
}

