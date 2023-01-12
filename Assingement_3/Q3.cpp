/*
Name    : Tayyab Kamran sami 
Roll No : 22I-2505
*/

#include <iostream>
#include <unistd.h>
using namespace std;
// applying conversion formula 
void converter(int ifrom,int ito,double value){
    double fa;
    if (ifrom==1 && ito==8){
        fa=value*29.5735296;
        cout << "Hence "<< value<< " Fluid ounces are equal to "<< fa << " mili liters"<< endl;
    }
    if (ifrom==1 && ito==9){
        fa=value*0.0295735;
        cout << "Hence "<< value<< " Fluid ounces  are equal to "<< fa << " liters"<< endl;
    }
    if (ifrom==2 && ito==8){
        fa=value*3785.41;
        cout << "Hence "<< value<< "  Gallons are equal to "<< fa << " mili liters"<< endl;
    }
    if (ifrom==2 && ito==9){
        fa=value*3.78541;
        cout << "Hence "<< value<< " Gallons  are equal to "<< fa << " liters"<< endl;
    }
    if (ifrom==3 && ito==8){
        fa=value*28.413;
        cout << "Hence "<< value<< " Ounces  are equal to "<< fa << " mili liters"<< endl;
    }
    if (ifrom==3 && ito==9){
        fa=value*0.028413;
        cout << "Hence "<< value<< " Ounces  are equal to "<< fa << " liters"<< endl;
    }
    if (ifrom==4 && ito==10){
        fa=value*453.59237;
        cout << "Hence "<< value<< " Pounds are equal to "<< fa << " grams"<< endl;
    }
    if (ifrom==4 && ito==11){
        fa=value*0.45359237;
        cout << "Hence "<< value<< " Pounds are equal to "<< fa << " kilograms"<< endl;
    }
    if (ifrom==5 && ito==12){
        fa=value*25.4;
        cout << "Hence "<< value<< " Inches are equal to "<< fa << " milimeters"<< endl;
    }
     if (ifrom==5 && ito==13){
        fa=value*2.54;
        cout << "Hence "<< value<< " Inches are equal to "<< fa << " centimeters"<< endl;
    }
     if (ifrom==5 && ito==14){
        fa=value*0.0254;
        cout << "Hence "<< value<< " Inches are equal to "<< fa << " meters"<< endl;
    }
     if (ifrom==5 && ito==15){
        fa=value*0.00002539;
        cout << "Hence "<< value<< " Inches are equal to "<< fa << " Kilometers"<< endl;
    }
     if (ifrom==6 && ito==12){
        fa=value*304.8;
        cout << "Hence "<< value<< " Feets are equal to "<< fa << " milimeters"<< endl;
    }
     if (ifrom==6 && ito==13){
        fa=value*30.48;
        cout << "Hence "<< value<< " feet are equal to "<< fa << " centimeters"<< endl;
    }
     if (ifrom==6 && ito==14){
        fa=value*0.3048;
        cout << "Hence "<< value<< " feet are equal to "<< fa << " meters"<< endl;
    }
     if (ifrom==6 && ito==15){
        fa=value*0.0003048;
        cout << "Hence "<< value<< " feet are equal to "<< fa << " Kilometers"<< endl;
    }
     if (ifrom==7 && ito==12){
        fa=value*1609344;
        cout << "Hence "<< value<< " miles are equal to "<< fa << " milimeters"<< endl;
    }
     if (ifrom==7 && ito==13){
        fa=value*160934.4;
        cout << "Hence "<< value<< " miles are equal to "<< fa << " centimeters"<< endl;
    }
    if (ifrom==7 && ito==14){
        fa=value*1609.34;
        cout << "Hence "<< value<< " miles are equal to "<< fa << " meters"<< endl;
    }
    if (ifrom==7 && ito==15){
        fa=value*1.60934;
        cout << "Hence "<< value<< " miles are equal to "<< fa << " kilometers"<< endl;
    }
}
// to check if any input is not less than 0
void Validate (double Anynumber){
    if (Anynumber<0.00){
        cout<<"Invalid Input "<< endl;
        exit(0);
    }
}
void takevalue(int ifrom, int ito){
    double value ;
    cout << "Please Enter a positive  value you want to convert"<< endl; 
    cin>>value;
    sleep(1);
    Validate(value);
    converter(ifrom,ito,value); 
}
// checking if the conversion from given inputs is possible or not 
void compatibilitycheck(int ifrom,int ito){
    cout << "Checking if the conversion is possible "<< endl;
    sleep(1);
    if((ifrom==1 && ito==8)  ||(ifrom==1 && ito==9)   ||(ifrom==2 && ito==8) ||(ifrom==2 && ito==9) ||       (ifrom==3 && ito==8)     ||(ifrom==3 && ito==9)   ||(ifrom==4 && ito==10)||(ifrom==4 && ito==11)|| (ifrom==5 && ito==12)    ||(ifrom==5 && ito==13)  ||(ifrom==5 && ito==14)||(ifrom==5 && ito==15)|| (ifrom==6 && ito==12)    ||(ifrom==6 && ito==13)  ||(ifrom==6 && ito==14)||(ifrom==6 && ito==15)|| (ifrom==7 && ito==12)    ||(ifrom==7 && ito==13)  ||(ifrom==7 && ito==14)||(ifrom==7 && ito==15) ) {
        cout << "The conversion is possible "<< endl;
    }
    else {
        cout << "No the conversion is not possible "<< endl;
        exit(0);
    }
    
    takevalue(ifrom,ito);

}
void validate(int num){
    if (num<1 || num>7){
        cout << "Invalid Input  "<< endl;
        exit(0);
    }
}
void  Validate(int num2){
    if (num2<7 || num2>15){
        cout << "Invalid Input"<< endl;
        exit(0);
    }

}
 void takeinput(){
    int ifrom,ito;
    cout << "This is a conversion program  "<< endl;
    sleep(1);
    cout << "Please select the unit you want to convert from "<< endl;
    sleep(1);
    cout << "1 - fluid oz (fl.oz)"<< endl
    <<"2 - gallons (gal)"<<endl
    <<"3 - Ounces  (oz)"<<endl
    <<"4 - pounds  (lb)"<<endl
    <<"5 - inches  (in)"<<endl
    <<"6 - feets   (ft)"<<endl
    <<"7 - miles   (mi)"<<endl;
    sleep(1);
    cout << "Please select from 1 to 7"<<endl;
    cin>> ifrom;
validate(ifrom);
    cout << endl << "Available units for covnersion are : "<< endl;
    cout << "8 - mililitres (ml)"<< endl
    <<"9 - litres (l)"<< endl
    <<"10 - grams (g)"<< endl
    <<"11 - kilograms (kg)"<< endl
    <<"12 - milimetres (mm)"<< endl
    <<"13 - centimetres (cm)"<< endl
    <<"14 - metres (mi)"<< endl
    <<"15 - kilometres (km)"<< endl;

    cout << "The unit to be converted in? Select from 8 to 15 : "<< endl;
    cin>> ito;
Validate(ito);
compatibilitycheck(ifrom,ito);


}

int main(){
    takeinput();
    return 0;
}