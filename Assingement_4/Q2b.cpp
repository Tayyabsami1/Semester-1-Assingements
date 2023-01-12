#include<iostream>
using namespace std;
void thepatternmaker(int n){
    int rows=n+(n-1), columns=n;   
    int stars=1,tstars=n-1;
    for(int i=1; i<=rows; i++){    // The main Loop to print all the rows
        if(i==n){
            for(int i=1; i<=n; i++){
                cout<< "*";
            }
            cout<< endl;
        }
            if(i<n){
            for(int j=1; j<=stars; j++){
                cout<<"*";
            }
            /*
            The below logic will implement the . and the _ logic in the upper half
            */
         for(int k=1; k<=columns-1; k++){
           if(i%2!=0){
                if(k%2==0){
                    cout<<".";
                }
                else{
                    cout<<"_";
                }
           }
            else{
                if(k%2==0){
                    cout<<"_";
                }
                else{
                    cout<<".";
                }
            }
     }
                columns--;
              stars++;
              cout<< endl;
            }
              if(i>n){
        for(int j=1; j<=tstars; j++){
            cout<<"*";
        }
        columns=n;
        /*
        The below logic will print the . and _ for the below half
        */
          for(int k=1; k<=columns-tstars; k++){
           if(i%2==0){
                if(k%2==0){
                    cout<<".";
                }
               else {
                    cout<<"_";
                }    
           } 
         if (i%2!=0){
                if(k%2==0){
                    cout<<"_";
                }
                else{
                    cout<<".";
                }
            }
        }
        tstars--;
        cout<<endl;
              }
    }
    }
void validator(int n){
    if(n<0){
        cout<<"Number of Lines cannot be negative"<< endl;
        exit(0);
    }
}
void numberoflines(){
    int n;
    cout<< "Enter the number of Lines until center line "<< endl;
    cin>>n;
    thepatternmaker(n);  // Validating the users input 
}
int main(){
    numberoflines();     // To get the number of lines 
}