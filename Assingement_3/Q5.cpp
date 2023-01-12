/*
Name    :   Tayyab Kamran Sami  
Roll no :   22I-2505
*/
#include <iostream>
#include <unistd.h>
#include <iomanip>

using namespace std;


// validating date,month and year
bool validate(int d, char c)
{
    if (c == 'd')
    {
        if (d > 31 || d < 0)
        {
            return false;
        }
    }

    else if (c == 'm')
    {
        if (d < 1 || d > 12)
        {
            return false;
        }
    }

    else if (c == 'y')
    {
        if (d < 0)
        {
            return false;
        }
    }

    else if (c == 'W')
    {
        if (d != 0 && d != 1)
        {
            return false;
        }   
    }

    return true;
}

// validating city
bool validate(char city)
{
    if (city != 'A' && city != 'B')
    {
        return false;
    }

    return true;
}

//validating postal code
bool validate(char city, string pCode)
{
    // checking the length of postal code for cities A and B
    if (city == 'A' && pCode.length() != 4)
    {
        return false;
    }

    else if (city == 'B' && pCode.length() != 5)
    {
        return false;
    }

    // if the length is right, then checking if city the postal codes are valid or not
    if (city == 'A')
    {
        if (pCode.at(0) != '4' && pCode.at(2) != '3')
        {
            return false;
        }
    }

    else if (city == 'B')
    {
        if ((pCode.at(0) != '5') && (pCode.at(2) != '5' || pCode.at(2) != '3'))
        {
            return false;
        }
    }
    
    return true;
}

// validating income
bool validate(double income)
{
    if (income < 0)
    {
        return false;
    }

    return true;
}
// validates the input of postal code according to it's city format

// returns age in years after finding it from Date of Birth
int find_age(int d, int m, int y)
{
    // Let the fix date be entered by the user as well
    int fix_day,
    fix_mn,
    fix_yr,
    // delcaring mn_length variable to take the number of days in the set date's month
    mn_length;

    cout << "Enter current year : ";
    cin >> fix_yr;
    cout << "Enter current month : ";
    cin >> fix_mn;
    cout << "Enter current day : ";
    cin >> fix_day; 
    
    // declaring variables that would hold the user's date of birth
    int dob_yr,
    dob_mn,
    dob_day;

    // calculating user's age in years
    dob_yr = fix_yr - y;
    dob_mn = fix_mn - m;
    dob_day = fix_day - d;

    if (fix_day - d < 1)
    {
        dob_mn--;
    }

    if (fix_mn - m < 1)
    {
        dob_yr--;
    }

    return dob_yr;
}


void showDiscount(int disc, string name)
{
    if (disc >= 100)
    {
        disc = 100;
        cout << endl << endl << "Congratulations " << name << "!" << endl;
        cout << "You got a  " << disc << " percent  discount.";
    }

    else if (disc < 100 && disc >= 0)
    {
        cout << endl << endl << "Congratulations " << name << "!" << endl;
        cout << "You got a  " << disc << " percent discount!";
    }
}


void eval_discount(int yr, char city, int workLoc, double income, string name)
{
    int disc = 0;
    // if young
    if (yr < 22)
    {
        disc = 50;
        
    }

    // if a resident of city
    if ((city == 'A') && workLoc == true)
    {
        disc = 20;
        
    }

    else if (city == 'B' && workLoc == true)
    {
        disc =  20;
        
    }

    // if less income
    if (income < 10000)
    {
        disc = 90;
        
    }

    showDiscount(disc, name);
}


void take_inputs()
{
    string name, pCode;
    double income;
    char city;
    int day, mn, yr, workLoc;

    // input of name
    cout << "Customer's name : ";
    getline(cin, name);

    // taking DOB of user and validating as well. Giving atleast one try to validate the input
    cout << "Customer's date of birth\nEnter DOB day :  ";
    cin >> day;
    if (validate(day, 'd') == false)
    {   
        cout<< "Invalid Input"<< endl;
        exit(0);
    
    }

    cout << "Enter DOB month : ";
    cin >> mn;
    if (validate(mn, 'm') == false)
    {   
        cout<< "Invalid Input "<< endl;
        exit(0);
    }

    cout << "Enter DOB year : ";
    cin >> yr;
    if (validate(yr, 'y') == false)
    {   
        cout<< "Invalid Input "<< endl;
        exit(0);
    }

    // finding user's age
    yr = find_age(day, mn, yr);

    // finding user's city, not validating city since discount is for customers of Specific city only
    cout << "Enter your city : A or B  ";
    cin >> city;

    // taking postal code
    cout << "Insert Postal Code : "<< endl<< "For City A: 4#3#"<< endl<< "For City B: 5#?##"<< endl<< "? is for 5 or 3"<< endl;
    cin.ignore();
    getline(cin, pCode);
    
    // validating the postal code if city is either A or B
    if (city == 'A')
    {
        if (validate('A', pCode) == false)
        {
           cout<< "Invalid Input "<< endl;
        exit(0);
        }
    }

    else if (city == 'B')
    {
        if (validate('B', pCode) == false)
        {
            cout<< "Invalid Input "<< endl;
        exit(0);
        }
    }

    // finding if user works in his city
    cout << "Do you work outside of your city? Input 1 if you do, otherwise 0 : ";
    cin >> workLoc;
    if (validate(workLoc, 'W') == false)
    {
       cout<< "Invalid Input "<< endl;
        exit(0);
    }

    // taking user's income
    cout << "Customer's monthly income : " ;
    cin >> income;

    eval_discount(yr, city, workLoc, income, name);
}

void display_discounts()
{
    cout << "Discounts are given as per the following conditions :" << endl;
    cout << "- 50 percent if age is less than 22" << endl;
    cout << "- 20 percent if you live in City A or City B and don't work in the cities" << endl;
    cout << "- 90 percent if your income is below Rs. 10000 / month" << endl << endl;
}


int main()
{
    display_discounts();
    take_inputs();

    return 0;
}
