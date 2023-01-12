/*
Name    : Tayyab Kamran
Roll no : 22-I-2505
*/
#include <iostream>

using namespace std;

int main()
{
	int hours; // take input from user
	double rate_per_hour;
	cout << "Enter number of hours worked by salesman" << endl;
	cin  >> hours;
	cout << "Please enter the rate per hour" << endl;
	cin  >> rate_per_hour;
	float  gross_pay;   // Calculating gross pay using formula
	gross_pay=(rate_per_hour*40)+1.5*rate_per_hour*(hours-40);
	cout << "Calculating Gross pay of Salesman" << endl;
	// displaying Gross pay
	cout << "The Gross pay of Salesman is " << gross_pay << endl;
	return 0;
}
	
