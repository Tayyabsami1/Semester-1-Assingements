/*
Name    : Tayyab Kamran Sami 
Roll no : 22I-2505
*/
// This program starts from the main and follows the direction from bottom to top through functions
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void thegraphplotter(int x,int n){
    for(int i=pow(abs(x),n); i>=0; i--){
    cout<<i<<"\t";
    for(int j=-1*abs(x); j<=x;j++){
        if(pow(abs(j),n)-pow(abs(j),n-1)==i){
            cout<<"*"<<"\t";
        }
        else{
            cout<<"\t";
        }
    }
    cout<<endl;

   }
cout<<"\t";
for(int i=-1*abs(x); i<=3; i++){
   
    cout<<i<<"\t";
    
}
}

void Validate (int x){
    if(x<0){
        cout<<"Invalid Input "<<endl;
        exit(0);
    }
}
void getpositiveinteger(int x){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<endl<<endl;
    Validate(n);
    thegraphplotter(x,n);




}
void therange(){
    int x;
    cout<<"Enter the maximum absolute value for x"<< endl;
    cin>>x;
    Validate(x);                // Validating the value for x
    getpositiveinteger(x);      // This function will get the value of n



}
int main(){
    therange();                // This function  will get the value of x
}