/*
Name    : Tayyab Kamran Sami
Roll no : 22I-2505
*/
#include<iostream>
#include<unistd.h>
using namespace std;
void theanswer(int final,int n1,int n2,char t){
    cout<<"The answer of "<<n1<< " "<<  t<< " " <<n2<<" is "<<final<<endl;
    exit(1);
}
void themathematicalop(int n1, int n2,char t){
    int add=0,sub=n1,mul=0,counter=-1,reme=0;
   
    switch (t){
    case '+':
    for(int i=1; i<=n2; i++){
        add++;}
        for(int j=1; j<=n1; j++){
            add++;   
    }
    theanswer(add,n1,n2,t);
    break;
    case '-':
    for(int i=1; i<=n2; i++){
        sub--;
    }
    theanswer(sub,n1,n2,t);
    break;
    case '*':
   for(int i=1; i<=n2; i++){
    for(int j=1; j<=n1; j++){
        mul++;
  }
   } 
   theanswer(mul,n1,n2,t);
   break;
    case '/':
   for (int i=n1; i>=0; ){
       for(int j=1; j<=n2; j++){
            i--;
       }
       counter++;
    }
   theanswer(counter,n1,n2,t);
   break;
   case '%':
   for(int i=n1; i>=0;){
    for(int j=1; j<=n2; j++){
        i--;
    }
        if(i<n2){
            reme=i;
            theanswer(reme,n1,n2,t);
            exit(0);    
        }  
   }
   theanswer(reme,n1,n2,t);
   break;
    }
}
void Validator(char t,int n1,int n2){
    int s=t;    
    if(s==43 || t==45 || t==42|| t==47|| t==37){
        cout<<"Operator Valid"<<endl;
         themathematicalop(n1,n2,t);       
    }
    else{
        cout<<"Invalid Operator"<<endl;
        exit(0);
    }
}
void Validator(int n1){
    if(n1<0){
        cout<<"Only Positive value accepted"<< endl;
        exit(0);
    }
}
void getoperator(int n1,int n2){
    char t;
    cout<<"Enter the operator"<<endl;
    cout<<"+ for Addition"<<endl<<"- for Substraction"<<endl<<"* for Multiplication"<<endl<<"/ for Division"<<endl<<"% for Remainder"<<endl;
    cin>>t;
    cout<<"Validating Operator"<<endl;
    sleep(1);
    Validator(t,n1,n2); 
}
 void getnumbers(){
    int n1,n2;
    cout<<"Enter Number 1"<<endl;
    cin>>n1;
    Validator(n1);
    cout<<"Enter Number 2"<<endl;
    cin>>n2;
    Validator(n2);
    getoperator(n1,n2);
 }
int main(){
    getnumbers();
}