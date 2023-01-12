#include<iostream>
#include<cmath>
#include<unistd.h>
#include<iomanip>
using namespace std;
void thedesignmaker(){
    cout<< "Side a  side b  Hypotenuse"<<endl;
    cout<<"............................."<<endl;
}
void thecomboprinter(int i,int j, int k,int counter){
    if(counter==1){
        thedesignmaker();
    }
    cout << i << setw(5)<<j<<setw(5)<<k;
    cout<< endl;
}
void Validator(int n){
    if (n<0){
        cout<< "Range cannot be negative"<< endl;
        exit(0);
    }
}
void thecombochecker(int n){
    int counter=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            for(int k=1; k<=n; k++){
               if( pow(i,2)+pow(j,2)==pow(k,2)){
                thecomboprinter(i,j,k,counter);
                counter++;
                } 
            }
        }
    }
                          
if(counter==1){
    cout<<"Sorry No possible combinations"<<endl;
    exit(0);
}
cout<< "A total of "<<counter-1<<" Pythagorean Triples were found in the the range of "<<n<<" numbers"<<endl;
}
 void getrange(){
    int n;
    cout<<"Enter the range for  all sides "<< endl;
    cin>>n;
    sleep(1);
    cout<<"Checking  the Validity of Range"<<endl;
    Validator(n);
    sleep(1);
    cout<<"Range Valid...checking combinations"<<endl;
    cout<<"Loading";
    sleep(1);
    cout<<".";
    sleep(1);
    cout<<".";
    sleep(1);
    cout<<".";
    cout<<endl;
    thecombochecker(n);
}
int main(){
    getrange();
}