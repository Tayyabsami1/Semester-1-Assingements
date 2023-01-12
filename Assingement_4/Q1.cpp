 /*
Name    : Tayyab Kamran Sami 
Roll no : 22I-2505
*/
 #include <iostream>
 #include<unistd.h>
using namespace std;
void Validate(int hr){
    if(hr>23){
        cout<< "Invalid Input"<< endl;
        exit(0);
    }
}
void Validate(int min,int sec){
    if(min>59 || sec>59){
        cout<< "Invalid Input"<< endl;
        exit(0);
    }
}
 void theloops(){
    cout<< "This is an accurate time displayer"<< endl;
    cout<<"Set your current time"<< endl;
    int hr,min,sec,L=0,b=0,m=0;
    cout<< "Please Enter the current Hours according to 24 hour clock"<< endl;
    cin>>hr;
    Validate(hr);                    // Validating the hour input 
    cout<< "Enter the current minutes "<< endl;
    cin>>min;
    cout<<"Enter the current seconds"<< endl;
    cin>>sec;
    Validate(min,sec);                     // Validating the minutes and the seconds
    system("pause");                       // To ask user to press a button to start the clock
   
while(true){
    for(int i=hr; i<24; i++){              // The main loop to update the hours
        for(int j=min; j<60; j++){         // A Nested loop for minutes
            for(int k=sec; k<60; k=k+10-b){// A second nested loop for seconds 
                 system("CLS");            // This will refresh screen after every 10 seconds
                 b=0;
                cout<<i<<" hours "<<": "<< j<<"minutes"<<":"<<k<<"seconds";
                sleep(10);
                /*
                The below logic is to reset the clock when the time reaches 23hr 59 min 
                */
                 if(k==59 ||k==58 ||k==57 ||k==56 ||k==55 ||k==54 ||k==53 ||k==52 ||k==51 ||k==50 ){
                    L=k;
                    b=60-L;
                    
          if(i==23 && j==59 ){
             if(i==23 && j==59 &&  k==50){
              m=10;  
 system("CLS");

    }
   i=0,j=0,k=0+m;
    }
    }        // THE END OF RESET LOGIC 
            }
        }    // Closing Braces for 2nd Nested Loop
    }        // Closing Braces for 1st Nested Loop
}            // Closing Braces for the main   Loop
 }           // Closing Braces for function
int main()
{
  theloops();  // The function that contains the loops
  return 0;
}