/*
Name    : Tayyab Kamran Sami
Roll no : 22I-2505
*/
//My Program starts from the main and follows the direction from bottom  to top through functions
#include<iostream>
#include<unistd.h>
#include<iomanip>
using namespace std;
void thegraphmaker(int n1,int n2,int n3,int n4,int n5,int max){
    int counter=0;
    for(int i=max; i>=1; i--){            // Now the loop will print numbers from maximum to 1
        cout<<setw(3)<<i;
        if(n1>=max-counter){              // This if will make the graph of n1 as the loop proceeds 
            cout<<setw(2)<<"*";
        }
        else{
            cout<<"  ";
        }
        if(n2>=max-counter){              // This if will make the graph of n2 as the loop proceeds
            cout<<setw(2)<<"*";
        }
        else{
            cout<<"  ";
        }
        if(n3>=max-counter){              // This if will make the graph of n3 as the loop proceeds
            cout<<setw(2)<<"*";
        }
        else{
            cout<<"  ";
        }
        if(n4>=max-counter){              // This if will make the graph of n4 as the loop proceeds
            cout<<setw(2)<<"*";
        }
        else{
            cout<<"  ";
        }
        if(n5>=max-counter){              // This if will make the graph of n5 as the loop proceeds
            cout<<setw(2)<<"*";
        }
        else{
            cout<<"  ";
        }
        counter++;
        cout<<endl;
    
    }
    for(int i=1; i<=5; i++){        // This loop will print the y axis 
       if(i==1){
        cout<<setw(5)<<i;
       }
       else{
        cout<<setw(2)<<i;
       }
    }
}
void themaxfinder(int n1,int n2,int n3,int n4,int n5) {
   int  arr[4];
   arr[0]=n1,arr[1]=n2,arr[2]=n3,arr[3]=n4,arr[4]=n5;
   int max=arr[0];
   for(int i=1; i<=4; i++){
    if(max<arr[i]){
        max=arr[i];
    }
   }
   thegraphmaker(n1,n2,n3,n4,n5,max);
   
}
void Validate(int num){
    if(num<0){
        cout<<"Invalid Input "<<endl;
        exit(0);
    }
}
 void theinputtaker(){
    cout<<"You have to Enter 5 Positive Numbers "<<endl;
    int n1,n2,n3,n4,n5;
    cout<<"Enter Number 1"<<endl;
    cin>>n1;
    Validate(n1);                               // Validating the 5 Inputs 
     cout<<"Enter Number 2"<<endl;
    cin>>n2;
    Validate(n2);
     cout<<"Enter Number 3"<<endl;
    cin>>n3;
    Validate(n3);
     cout<<"Enter Number 4"<<endl;
    cin>>n4;
    Validate(n4);
     cout<<"Enter Number 5"<<endl;
    cin>>n5;
    cout<<endl<<endl;
    Validate(n5);
    themaxfinder(n1,n2,n3,n4,n5);               // to implement the logic to find Maximum Number 

}
int main(){
    theinputtaker();                            // to get the 5 inputs
}