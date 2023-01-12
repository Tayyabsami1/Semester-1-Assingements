/*
Name    : Tayyab Kamran Sami
Roll no : 22I-2505
*/
#include <iostream>
#include <unistd.h>

using namespace std;



string reverseingString(string t)
{
    int index = 0, rev = t.length() - 1;
    while (index < t.length()/2 && rev >= t.length()/2)
    {
        char temp = t[index];
        t[index] = t[rev];
        t[rev] = temp;
        rev--;
        index++;
    }

    return t;
}


// converts a value into a string but in reverse order
string value2string(int val)
{
    string term;
    
    while (val != 0)
    {
        term = term + (char)(48 + val % 10);
        val = val / 10;
    }

    return term;
}


string gen_term(string term)
{
    int cString = 0; 
    string nextTerm;
    
    while (cString < term.length())
    {
        int cLoop = cString + 1, count = 1;
        while (cLoop < term.length() && (term[cString] == term[cLoop]))
        {
            count++;
            cString++;
            cLoop++;
        }

        nextTerm = nextTerm + (char)(count + 48);
        nextTerm = nextTerm + term[cString]; 

        cString++;
    }

    return nextTerm;
}


void taking_seq()
{
    int sequenceno;

    cout << "Input the  first value to generate next 7 terms : ";
    cin >> sequenceno;

    string sequence, term;
    
    // converting value given into string
    term = value2string(sequenceno);
    // now reversing the  string
    term = reverseingString(term);
    
    for (int i = 0; i <= 7; i++)   // The Loop to print the 7 terms
    {
        cout << term << " ";
        term = gen_term(term);
    }
    
}


int main()
{
    taking_seq();    

    return 0;
}
