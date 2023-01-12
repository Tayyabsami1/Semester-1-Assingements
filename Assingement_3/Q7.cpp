/*
Name    : Tayyab Kamran Sami 
Roll no : 22I-2505
*/
#include <iostream>
#include <unistd.h>

using namespace std;




// validates the input
bool validate(int c)
{
    if (c != 0 && c != 1)
    {
        return false;
    }

    return true;
}

void take_numbers(bool order, bool leniancy)
{
    int n1, n2, n3;

    cout << "Enter first number : ";
    cin >> n1;

    cout << "Enter second number : ";
    cin >> n2;
    
    cout << "Enter third number : ";
    cin >> n3;

    /*
    order : true - increasing ; false - decreasing
    leniancy : true - leniant ; false - strict
    */

    if (order == true && leniancy == true)
    {
        // using ternary to find leniant increasing order
        (n1 == n2 && n1 == n3)? cout << "The numbers are both in increasing and decreasing order." : (n1 <= n2 && n2 <= n3)? cout << "The numbers are in increasing order." : cout << "The numbers aren't in increasing order";
    }

    else if (order == true && leniancy == false)
    {
        // ternary for strictly increasing order
        (n1 < n2 && n2 < n3)? cout << "The numbers are in strictly increasing order" : cout << "The numbers aren't in strictly increasing order.";
    }

    if (order == false && leniancy == true)
    {
        // ternary for leniant decreasing order
        (n1 == n2 && n1 == n3)? cout << "The numbers are both increasing and decreasing." : ((n1 >= n2 && (n2 <= n1 && n2 >= n3)))? cout << "The numbers are in decreasing order." : cout << "The numbers aren't in decreasing order.";
    }
    
    else if (order == false && leniancy == false)
    {
        // ternary for strictly decreasing order
        (n1 > n2 && n2 > n3)? cout << "The numbers are in strictly decreasing order." : cout << "The numbers aren't in strictly decreasing order.";
    }
}


void modes()
{
    int order, type;
    cout << "Input 1 for increasing order, 0 for decreasing order : ";
    cin >> order;

    // validating input
    if (validate(order) == false)
    {
        cout<< "Invalid Input"<< endl;
          exit(0);
    }

    cout << "If you want leniancy in ordering, input 1 otherwise 0 : ";
    cin >> type;

    // validating input
    if (validate(type) == false)
    {
        cout<< "Invalid Input "<< endl;
        exit(0);
    }

    take_numbers(order, type);
} 


int main()
{
    modes();
}