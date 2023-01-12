/* 
Name    : Tayyab kamran Sami 
Roll no : 22-I-2505
*/
#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	double  u,t,a; // declaring input values 
	double s;      // declaring values to find
	cout << "Input Initial Velocity"<< endl;
	cin  >> u;
	cout << "Input time taken"<< endl;
	cin  >> t;
	
	cout << "Input Acceleration"<< endl;
	cin  >> a;
	cout << "Implementing second equation of motion"<< endl;
	s=(u*t)+(1/2.00)*a*(pow(t,2));
	cout << "Distance is equal to "<< s << ".";
	return 0;
}
