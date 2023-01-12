/*
Name    : Tayyab Kamran
Roll no : 22-I-2505
*/
#include<iostream>

using namespace std;

int main()
{
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;  // Alloting space in memory 
	cout << "You have to input 10 numbers in sorted order"<< endl;
	
		
	cout << "Input Number 1"<< endl;    // Taking Inputs from user
	cin>> n1;
	cout << "Input Number 2"<< endl;
	cin>> n2;
	cout << "Input Number 3"<< endl;
	cin>> n3;
	cout << "Input Number 4"<< endl;
	cin>> n4;
	cout << "Input Number 5"<< endl;
	cin>> n5;
	cout << "Input Number 6"<< endl;
	cin>> n6;
	cout << "Input Number 7"<< endl;
	cin>> n7;
	cout << "Input Number 8"<< endl;
	cin>> n8;
	cout << "Input Number 9"<< endl;
	cin>> n9;
	cout << "Input Number 10"<< endl;
	cin>> n10;

	float mean;                         
	float sum=0;
	sum=n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;	  
	mean=sum/10;                       // finding mod using formula
	cout << "Calculating Mean"<<endl;

	cout << mean<< endl;
	
	float median;   
	median= (n5+n6)/2.00;     // finding median using formula
	cout << "Calculating Median"<< endl;
	
	cout << median;
	return 0;	
}

