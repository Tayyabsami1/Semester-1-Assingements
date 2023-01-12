/* 
Name    : Tayyab Kamran Sami 
Roll no : 22-I-2505
*/
#include<iostream>
#include<unistd.h>


using namespace std;

int main()
{
	int seconds,hr,min,rmin,rsec; //declaring values

	cout << "Enter the number of seconds"<< endl;
	cin  >> seconds;
	hr=seconds/3600;
	min=seconds%3600;  // taking MOD to find minutes
	rmin=min/60;
	rsec=min%60;       // taking MOD to find seconds
	if (rsec>60)
	{
		rsec=rsec-60;
		rmin=rmin+1;
	}
	cout << "Calculating...."<< endl;
	sleep(2);	 // To make it look beautiful
	cout << "After Conversion"<< endl;
	cout << "Time is "<< hr<< " hours " << rmin << " minutes " << rsec << " seconds" <<endl;
	
		
	return 0;
}


