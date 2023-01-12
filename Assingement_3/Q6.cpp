/*
Name     : Tayyab Kamran Sami 
Roll no  : 22I-2505
*/
#include <iostream>
#include <unistd.h>
#include <iomanip>

using namespace std;



bool validate(char p)
{
    if (p != 'A' && p != 'B' && p != 'C')
    {
        return false;
    }

    return true;
}


bool validate(double data)
{
    if (data < 0)
    {
        return false;
    }

    return true;
}


double pkgcostA(char p, double data, double ad_data)
{
    double totalam, totaldata;

    // converting data and additional data into MBs
    totaldata = (data * 1024) + (ad_data);
    
    // if data used is under the data limit for package A i.e. 2 GBs = 2048 MBs
    if (totaldata <= 2048)
    {
        totalam = 100;
    }
    
    // else if data limit exceeds 2 GB, convert total data into MBs and apply the cost formulas        
    /// converting data into MBs
    else if (totaldata > 2048)
    {
        totalam = 100 + ((totaldata - 2048) * (30.0 / 100.0));
    }

    return totalam;
}


double pkgcostB(char p, double data, double ad_data)
{
    double tot_am, tot_data;

    // converting total data into MBs
    tot_data = (data * 1024.0) + ad_data;

    // if data usage is under package limit
    if (data + (ad_data / 1024.0) <= 5.5)
    {
        tot_am = 250;
    }
    
    // else if data usage exceeds package limit
    // converting data into MBs 
    else if (data + (ad_data / 1024.0) > 5.5)
    {
        tot_am = 250 + ((tot_data - (5.5 * 1024.0)) * (20.0 / 100.0));
    }
        
    return tot_am;
}


double pkgcostC(char p, double data, double ad_data)
{
    // maza of unlimited data access haha
    double tot = 1000;
    
    return tot;
}


void better_pkg(char p, double costA, double costB, double costC)
{
    // to see if there were better options available in the B and C packages
    if (p == 'A')
    {
        if (costA > costB)
        {
            cout << "Brother you could have saved" << costA - costB << " rupees if you have selected Package B" << endl;
        }

        if (costA > costC)
        {
            cout << "Brother you could have saved" << costA - costC <<  " rupees if you have selected Package C"  << endl;
        }
    }

    // to see if there were better options available in the A and C packages
    else if (p == 'B')
    {
        if (costB > costA)
        {
            cout <<  "Brother you could have saved"<< costB - costA <<  " rupees if you have selected Package A"  << endl;
        }

        if (costB > costC)
        {
            cout <<  "Brother you could have saved" << costB - costC << " rupees if you have selected Package C" << endl;
        }
    }

    // to see if there were better options available in the A and B packages
    else
    {
        if (costC > costA)
        {
            cout <<  "Brother you could have saved" << costC - costA << " rupees if you have selected Package A" << endl;
        }

        if (costC > costB)
        {
            cout << "Brother you could have saved" << costC - costB <<  " rupees if you have selected Package B"  << endl;
        }
    }
}


void show_cost(char p, double data, double ad_data)
{
    double tot_am;
    if (p == 'A')
    {
        // if the data is not more than what the package offers
        tot_am = pkgcostA(p, data, ad_data);
        
        cout << fixed << setprecision(2) << "\nTotal amount due : Rs. " << tot_am << endl;
    }

    else if (p == 'B')
    {
        tot_am = pkgcostB(p, data, ad_data);

        cout << fixed << setprecision(2) << "\nTotal amount due : Rs. " << tot_am << endl;
    }

    else 
    {
        tot_am = pkgcostC(p, data, ad_data);

        cout << fixed << setprecision(2) << "\nTotal amount due : Rs. " << tot_am << endl;
    }

    better_pkg(p, pkgcostA(p, data, ad_data), pkgcostB(p, data, ad_data), pkgcostC(p, data, ad_data));
}


void sel_package()
{
    char package;
    double data, ad_data;
    
    // printing information
    cout << "PLink offers the following packages : " << endl;
    cout << "Package A : 2 GB for Rs. 100 per month. 100 ad_data MBs for Rs. 30" << endl;
    cout << "Package B : 5.5 GB for Rs. 250 per month. 100 ad_data MBs for Rs. 20" << endl;
    cout << "Package C : Unlimited GBs for Rs. 1000" << endl << endl;

    cout << "Which package do you want? (A, B, C) : ";
    cin >> package;

    if (validate(package) == false)
    {
        cout<<"Invalid Input "<< endl;
        exit(0);
    }

    cout << "How much data have you used (GBs)? ";
    cin >> data;

    if (validate (data) == false)
    {
        cout<< "Invalid Input "<< endl;
        exit(0);
    }

    cout << "How much additional data data have you used (MBs)? Input 0 for none : ";
    cin >> ad_data;

    if (validate(ad_data) == false)
    {
        cout<< "Invalid Input"<< endl;
        exit(0);
    }

    show_cost(package, data, ad_data);
}


int main()
{
    sel_package();

    return 0;
}
