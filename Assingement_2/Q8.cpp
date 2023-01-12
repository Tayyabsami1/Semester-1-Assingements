/* 
Name    : Tayyab Kamran
Roll no : 22-I-2505
*/
#include <iostream>

using namespace std;

int main()
{
	int a,b;
	cout << "Enter first number" << endl;
	cin>> a;
	cout << "Enter second number"<< endl;
	cin>> b;
	cout << "Exchanging Values of given input"<< endl;
	// implementing swap logic
	a=a+b;
	b=a-b;
	a=a-b;
	cout << "Value of first number is  "<<a<< endl;
	cout << "Value of second number is "<<b<< endl;
	return 0;
}
	

