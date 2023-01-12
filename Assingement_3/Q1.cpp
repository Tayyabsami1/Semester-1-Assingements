/*
Name    : Tayyab Kamran Sami
Roll no : 22i-2505
*/
#include <iostream>

using namespace std;


// applying overlapping logic 
bool isOverlapping(int D1, int M1, int Y1, int D2, int M2, int Y2, int startt1, int endt1, int startt2, int endt2)
{           
    if (D1 == D2 && M1 == M2 && Y1 == Y2)
    {
        if (startt1 == startt2 || endt1 == endt2)
        {
            cout << "The appointments are overlapping";
            
            exit(0);
        }

        else if (startt1 < startt2)
        {
            if (endt1 > startt2)
            {
                cout << "The appointments are overlapping";
                exit(0);
            }
        }

        else if (startt2 < startt1)
        {
            if (endt2 > startt1)
            {
                cout <<  "Thea appointments are overlapping";
                exit(0);
            }
        }
    }

    return true;
}


// validating the time for appointement 1 and 2 
bool validate(int time)
{  
    if (time <= 0 && time < 23)
    {
        cout << "Invalid time input"; 
        exit(0);
    }
    
    return true;
}


// validating month day and year 
void validate(int day, int month, int year)
{
    if (day <= 0 || day > 31)
    {
        cout << "Invalid date input";
        exit(0);
    }

 else if  (month <= 0 || month > 12)
    {
        cout << ("Invalid date input");
        exit(0);
    }

     else if (year < 0)
    {
        cout << ("Invalid date input");
        exit(0);
    }
}


void gettime(int D1, int M1, int Y1, int D2, int M2, int Y2)
{
    int startt1, endt1, startt2, endt2;
    
    cout << "Enters starting time in hours for Appointement 1"<< endl;
    cin >> startt1;
    
    
    validate(startt1);

    cout << "Enter ending time in hours for Appointement 1"<< endl;
    cin >> endt1;    
    
    
    validate(endt1);

    cout << "Enter starting time in hours for appointement 2"<< endl;
    cin >> startt2;

    validate(startt2);

    cout << "Enter ending time in hours for appointement 2"<< endl;
    cin >> endt2;


    validate(endt2);

    if (isOverlapping(D1, M1, Y1, D2, M2, Y2, startt1, endt1, startt2, endt2) == true)
    {
        cout << "The appointments are perfectly valid"<< endl;
           
    }
}

// taking input of date for appointement 1 and appointement 2
void getdate()
{
    int D1,M1,Y1,D2,M2,Y2;

    cout << "Enter the day of appointment 1"<< endl;
    cin >> D1;
    validate(D1,M1=1,Y1=1);
    cout << "Enter the month of appointment 1"<< endl;
    cin >> M1;
validate(D1,M1,Y1=1);
    cout << "Enter the year of appointment 1"<< endl;
    cin >> Y1;
 validate(D1,M1,Y1);

    cout << "Enter the day of appointment 2"<< endl;
    cin >> D2;

    cout << "Enter the month of appointment 2"<< endl;
    cin >> M2;

    cout << "Enter the year of appointment 2"<< endl;
    cin >> Y2;

    
    validate(D2,M2,Y2);

    cout << "Appointment 1 is sheduled on :" << D1 << "/" << M1 << "/" << Y1 << endl;
    
    cout << "Appointment 2 is sheduled on :" << D2 << "/" << M2 << "/" << Y2 << endl;


    gettime(D1, M1, Y1, D2, M2, Y2);
}


int main()
{
    getdate();

    return 0;
}
