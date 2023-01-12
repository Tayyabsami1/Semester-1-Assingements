
#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;
/*
Everytime this function is called 
 with a specific value it will print 
 the required spaces 
 */
   
void giveSpaces(int num)  
{
    cout << setw(num);
}

// This function will print a symbol against a specific ascii value 
void printsymbols(int itoc)
{
    cout << (char) itoc;
}


void printPatterns(int c, int width)
{
    cout << setw(width) << (char) c; 
}


void printStep(int startSpaces, int startShape, int height, int width, int steps, int maxSpace, int endWidth)
{
    // to print the specific number of steps
    for(int m = 0; m <= height; m++)
    {
        if (m == 0)
        {
            giveSpaces(startSpaces);
            
            // prints the top part of each step
            for (int j = 0; j < width; j++)
            {
                printsymbols(startShape);
            }
            
            for (int j = 0; j < 1; j++)
            {
                printPatterns(startShape, endWidth - width + 1);
            }
        }   

        else
        {
            for (int j = 0; j < 1; j++)
            {
                // prints the sides and spaces between
                cout << endl;
                giveSpaces(startSpaces);
                printsymbols(startShape);
            }
        }

        if (m != 0)
        {
            // for side wall on left
            for (int j = 0; j < 1; j++)
            {
                printPatterns(startShape, endWidth);
            }
        }
    }
}


void escalator(int steps, int height, int width)
{
    // using ascii values for the symbols
    int startShape = 42, startSpaces = (width * steps) + 1, maxSpace = width, tot_spaces = startSpaces;
     int endWidth = width;
    int orgShape = startShape, orgSpace = startSpaces, orgMaxSpace = maxSpace, orgEndWidth = endWidth;

    for (int escalate = 0; escalate >= 0; escalate++)
    {
        if (orgShape > 42 + steps - 1) orgShape -= steps;
        startShape = orgShape;
        startSpaces= orgSpace;
         endWidth  = orgEndWidth;
         maxSpace  = orgMaxSpace;
        
        cout << endl << endl << endl;
        for (int i = 0; i < steps; i++)
        {
            // if first step is printed, the for making it clean giving one additional width space
            if (i != 0){
                startSpaces++;
            }
            if (startShape > 42 + steps - 1) startShape -= steps;
            printStep(startSpaces, startShape, height, width, steps, maxSpace, endWidth);
            cout << endl;
            startSpaces -= width + 1;
            maxSpace += width + 1;
            startShape += 1;
            endWidth = endWidth + width;
        }

        // printing floor symbol
        for (int L = 0; L < tot_spaces + 5; L++)
        {
            cout << (char) orgShape;     // converting int values intp symbols
        }

        // to increase steps pattern
        orgShape++;
        sleep(1);
        system("cls");
    }
}

void theinputtaker(){
     int esteps, eheight, ewidth;

    cout << "Enter the number of steps of the Escalator "<<endl;
    cin >> esteps;
    
    cout << "Enter the height of each step"<<endl;
    cin >> eheight;
    
    cout << "Enter the width of each step "<<endl;
    cin >> ewidth;
/*
Refreshing the screen and calling the function to implement the main logic of the Escalator
*/
    system("cls");             
    cout << endl;
    escalator(esteps, eheight, ewidth);
    cout << endl << endl;

}
int main()
{
    theinputtaker();            // To get the measures to make the Escalator

    return 0;
}
