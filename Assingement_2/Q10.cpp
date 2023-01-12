/* 
Name    : Tayyab Kamran Sami
Roll no : 22-I-2505
*/
#include<iostream>
#include<cmath>
#include<unistd.h>
#include<iomanip>

using namespace std;

int main()
{
	float degree,radian,x,Sinx,Cosx;  // Declaring Variables 
	const double  Pi=3.1415926535897932384626433832795; // Declaring Pi as constant
	cout << "Enter the value in degrees"<< endl;
	cin>> degree;
	radian=(degree)*Pi/180;  // converting degree into radian
	x=radian;
	// Applying given formulas for Sin and Cos 
	Sinx=x-((pow(x,3))/(3*2*1))+((pow(x,5))/(5*4*3*2*1))-((pow(x,7))/(7*6*5*4*3*2*1))+((pow(x,9))/(9*8*7*6*5*4*3*2*1));
	Cosx=1-((pow(x,2))/(2*1))+((pow(x,4))/(4*3*2*1))-((pow(x,6))/(6*5*4*3*2*1))+((pow(x,8))/(8*7*6*5*4*3*2*1));
	cout << "Calculating value of SIn(x) and Cos(x)"<< endl;
	sleep(2);
    // seting output to 1 decimal pllace only
	cout << fixed << setprecision(1)<<"Value of Sin(x) is "<< Sinx << endl;
	cout << fixed << setprecision(1)<<"Value of Cos(x) is "<< Cosx << endl;	

    
	return 0;
}
