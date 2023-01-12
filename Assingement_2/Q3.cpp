/*
Name    : Tayyab Kamran
Roll no : 22-I-2505
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int c,v;  // Declaring Unknowns
	const int y=10,d=20; // Declaring constants
	cout << "Please Enter the value of C ie Number1 " << endl;
	cin>> c;   //input unknown from user
	cout << "Please Enter the value of V ie Number2" << endl;
	cin>> v;   //input unknown from user
	float  Ans;
	cout << "Applying Formula and calculating answer" << endl;
	Ans= (y-c)/ (float)(d+v); // using float to get answer in points
	cout << setprecision(2) << "Answer will be " << Ans; //2 digits after decimal
	
	return 0;
}

