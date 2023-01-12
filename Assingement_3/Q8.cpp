
/*
Name    : Tayyab Kamran sami 
Roll No : 22I-2505
*/
#include<iostream>
#include<unistd.h>
#include<iomanip>
using namespace std;
void pricecalculator(int  budget, int status, int tax, int cartype, int carsys, int carlight, int carseat, int carmats, int cardoor, int cartrunk){
    int totalamount,cartypep,carsysp,carlightp,carmatsp,carseatp,cardoorp,cartrunkp;
cartypep  =cartype  ==1 ? 3899000: 3769000;
carsysp   = carsys  ==1 ? 59500  : 8000   ;
carlightp =carlight ==1 ? 2000   : 5000   ;
carseatp  =carseat  ==1 ? 45000  : 25000  ;
carmatsp  =carmats  ==1 ? 60000  : 0      ;
cardoorp  =cardoor  ==1 ? 60000  : 0      ;
cartrunkp =cartrunk ==1 ? 8500   : 0      ;
sleep(1);
totalamount=cartypep+carsysp+carlightp+carseatp+carmatsp+cardoorp+cartrunkp;
cout<< "The total cost of you  car will be "<< totalamount<< " and the tax will be "<< tax<< endl;
sleep(1);
cout << "Your Budget is "<< budget+tax<< endl;
if (budget-totalamount<0){
    cout<< "Sorry! You donot afford it."<< endl;
    exit(0);
}
else{
    cout<< "You have a good taste,go for it!"<< endl;
}

        
}
void Validate(int  status ){
    if (status<1 || status>2){
        cout << "Invalid Input "<< endl;
        exit(0);
    }
}
void validate (int  budget){
    if (budget<0){
        cout << "Budget cannot be negative "<< endl;
        exit(0);
    }
}
void car_specifications(int  budget, char status, int tax){
    int cartype,carsys,carlight,carseat,carmats,cardoor,cartrunk;
    cout << "Please Select the features you want in your car"<< endl;
    sleep(1);
    cout << "Which car type do you want "<< endl;
    cout << "1. Automatic"<< endl<< "2. Manual"<< endl;
    cin>> cartype;
    Validate(cartype);
    cout << "Enter the information about the Infotainment System of Car"<< endl;
    cout << "1. With Navigation System"<< endl;
    cout << "2. Without Navigation System"<< endl;
    cin>> carsys;
    Validate(carsys);
    cout << "Which type of lights do you want "<< endl;
    cout << "1. Halogen Lights"<<endl<<  "2. LED"<< endl;
    cin>> carlight;
    Validate(carlight);
    cout << "which type of seats you want "<< endl;
    cout << "1. Special Leather seats"<< endl;
    cout << "2. Simple Sofa seats"<< endl;
    cin>> carseat;
    Validate(carseat);
    cout << "Do you want Floor mats"<<  endl;
    cout << "1. yes "<< endl<< "2. No"<< endl;
    cin>> carmats;
    Validate(carmats);
    cout<< "Do you want door visors"<< endl;
    cout<< "1. Yes"<< endl<< "2. No"<< endl;
    cin>> cardoor;
    Validate(cardoor);
    cout<< "Do you want a Trunk"<< endl;
    cout<< "1. Yes"<< endl<< "2. No"<< endl;
    cin>> cartrunk;
    Validate(cartrunk);
    pricecalculator(budget,status,tax,cartype,carsys,carlight,carseat,carmats,cardoor,cartrunk);
}

void filerstatus(int  budget){
    int  status;
    int tax=0;
    cout << "Please select you tax filer status"<< endl;
    cout << "1. Filer"<< endl<< "2. Non-Filer"<< endl;
    cin>> status;
    Validate(status);
    if(status==1){
        budget=budget-25000;
        tax=25000;
    }
    else{
        budget=budget-75000;
        tax=75000;
    }
    if (budget<0){
        cout << "You cannot even pay tax ...please collect more money"<<endl;
        exit(0);
    }
    car_specifications(budget,status,tax);


}
void takebudget(){
    int  budget;
    cout << "Enter your budget for buying a car"<< endl;
    cin>>budget;
    validate(budget);
;    filerstatus(budget);

}
int main(){
    takebudget();
    return 0;

}