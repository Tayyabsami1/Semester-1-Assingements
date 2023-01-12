/*
Name   : Tayyab kamran 
Rollno : 22-I-2505
*/
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double P,r,t,A; // Declaring inputs 
	const int n=12;
	cout << "Enter the Principal amount you want to be depsited in your account "; // Taking input from user
	cout << endl;
	cin>> P;
	cout << "Enter the Anual Interest rate in Percentage"<< endl;
	cin>> r;
	cout<< "Please enter the Investment tenure in the years"<< endl;
	cin>> t;
	A=P*pow(1+((r/100)/n),n*t);  // Apllying formula of compound interest 
	cout << "Calculating Compound Interest"<< endl;
	cout << "Compound interest is as follows  "<< A << endl;
	return 0;
	
	
}

