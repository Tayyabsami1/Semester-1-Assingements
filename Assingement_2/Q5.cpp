/*
Name    : Tayyab Kamran
Roll no : 22-I-2505
*/
#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
	int year,month,day; // declaring date of birth
	int pyear,pmonth,pday; // declaring present date
	cout << "This program will tell you your Date of Birth"<< endl;
	sleep(1);
	// Asking todays date
	cout << "What is the present year"<< endl;
	cin  >> pyear;
	cout << "What is the present month(Enter the no. of month" << endl;
	cin  >> pmonth;
	cout << "What is todays date" << endl;
	cin  >> pday;
	sleep(1);
	// Displaying todays date
	cout << "Todays date is  "<< pday<<"-"<< pmonth<<"-"<< pyear<< endl;
	// Asking user age
	cout << "Now you have to enter your age" << endl;
	sleep(2);
	cout << "How many years old are u" << endl;
	cin  >> year;
	cout << " and how many months old are u"<< endl;
	cin  >> month;
	cout <<  "Also enter the number of days" << endl;
	cin  >> day;
	int dyear,dmonth,dday;  // declaring date of birth variables
	sleep(1);
	cout << "Calculating Your Date of birth" << endl;
	dyear=pyear-year;
	dmonth=pmonth-month;
	if (pmonth<month)
	{
		dmonth=12-pmonth;
		dyear=dyear-1;
	}
	if (dmonth==0)
	{
		dmonth=pmonth;
	}
	dday=pday-day;
	if (pday<day)
	{
		dday=30-dday;
		dmonth=dmonth-1;
	}
	if (dday==0)
	{
		dday=day;
	}
	cout << "Your Date of Birth is  " << dyear << "-"<< dmonth<< "-"<< dday<< endl;
	
	
	return 0;
}


