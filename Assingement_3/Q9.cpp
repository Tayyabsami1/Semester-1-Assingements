/*
Name    : Tayyab Kamran sami 
Roll No : 22I-2505
*/
#include <iostream>
#include <unistd.h>
using namespace std;
// declaring decimal to roman numbers
void converter(int n)
{
    char thou = 'M', fiveH = 'D', cent = 'C', fifty = 'L', ten = 'X', five = 'V', one = 'I';

    if (n / 1000 >= 1 && n / 1000 <= 3)   // applying Roman number logic 
    {
        int i = n / 1000;
        n = n - ((n / 1000) * 1000);
        
        if (i != 0)
        {
            cout << thou;
            i--;

            if (i != 0)
            {
                cout << thou;
                i--;

                if (i != 0)
                {
                    cout << thou;
                    i--;
                }    
            }
        }
    }

    if (n == 500)
    {
        cout << fiveH;
        n = n - 500;
    }

    else if (n > 500 && n < 1000 && n >= 900)
    {
        cout << cent << thou;
        n = n - 900;
    }

    else if (n > 500 && n < 900)
    {
        if (n > 500)
        {
            cout << fiveH;
            n = n - 500;
            
            if (n >= 500)
            {
                cout << cent;
                n = n - 100;

                if (n >= 500)
                {
                    cout << cent;
                    n = n - 100;

                    if (n >= 500)
                    {
                        cout << cent;
                        n = n - 100;
                    }
                }
            }
        }
    }

    if (n == 100)
    {
        cout << cent;
        n = n - 100;
    }

    else if (n < 500 && n > 100)
    {
        if (n >= 400)
        {
            cout << cent << fiveH;
            n = n - 400;
        }
        
        else if (n < 400)
        {
            if (n > 100)
            {
                cout << cent;
                n = n - 100;

                if (n >= 100)
                {
                    cout << cent;
                    n = n - 100;

                    if (n >= 100)
                    {
                        cout << cent;
                        n = n - 100;
                    }
                }
            }
        }
    }

    if (n == 50)
    {
        cout << fifty;
        n = n - 50;
    }
    
    else if (n < 100 && n >= 90)
    {
        cout << ten << cent;
        n = n - 90;
    }

    else if (n < 90 && n > 50)
    {
        cout << fifty;
        n = n - 50;
    }

    if (n < 50 && n >= 40)
    {
        cout << ten << fifty;
        n = n - 40;
    }
    
    else if (n > 10 && n < 40)
    {
        cout << ten;
        n = n - 10;

        if (n >= 10)
        {
            cout << ten;
            n = n - 10;

            if (n >= 10)
            {
                cout << ten;
                n = n - 10;
                    
                if (n >= 10)
                {
                    cout << ten;
                    n = n - 10;
                }
            }
        }
    }

    if (n == 10)
    {
        cout << ten;
        n = n - 10;
    }

    else if (n < 10 && n >= 9)
    {
        cout << one << ten;
        n = n - 9;
    }

    else if (n < 9 && n > 5)
    {
        cout << five;
        n = n - 5;
    }

    if (n >= 4 && n < 5)
    {
        cout << one << five;
        n = n - 4;
    }

    else if (n > 0)
    {
        cout << one;
        n = n - 1;

        if (n > 0)
        {
            cout << one;
            n = n - 1;

            if (n > 0) 
            {
                cout << one;
                n = n - 1;

                if (n > 0)
                {
                    cout << one;
                    n = n - 1;
                }
            }
        }
    }
}
// validating number 
void validate(int n){
    if (n<0 || n>3999){
        cout << "Sorry Number is not in the given range"<< endl;
        exit (0);
    }
}
// taking input 
void takeinput(){
    int n;
    cout << "Enter the Number you want to convert into Roman (1-3999)"<< endl;
    sleep(1);
    cin>> n;
    validate(n);
    converter(n);
    
}
int main(){
    takeinput();
}