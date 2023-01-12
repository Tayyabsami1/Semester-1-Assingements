/*
Name    : Tayyab Kamran sami 
Roll No : 22I-2505
*/
#include <iostream>
using namespace std;
// declaring proto types
void validate(int status );
bool validate(char  gearinput);
void  gethandel(int dL,int dR,int cL,int MUS);
void   getgearshift(int dL,int dR,int cL,int MUS,int IHL,int IHR,int OHL,int OHR);
void checkconditions(int dL,int dR,int cL,int MUS,int IHL,int IHR,int OHL,int OHR,char G);
// taking input about switches
void   getswitchstatus( ){
   int dL,dR,cL,MUS;
    cout << "Is Left Handel Dashboard Switch Activated"<< endl;
    cout << "Enter 0 for No and 1 for Yes"<< endl;
    cin>> dL;
 validate(dL) ;  
    cout << "Is Right  Handel Dashboard Switch Activated"<< endl;
    cout << "Enter 0 for No and 1 for Yes"<< endl;
    cin>> dR;
validate(dR);
    cout << "Is child lock switch activated "<< endl;
    cout << "Enter 0 for No and 1 for Yes"<< endl;
    cin>> cL;
validate(cL);
    cout << "Is Master unlock switch activated"<< endl;
    cout << "Enter 0 for No and 1 for Yes"<< endl;
    cin>> MUS;
validate(MUS);
 gethandel(dL,dR,cL,MUS);

}
// geting input about inside and outside door handels
void   gethandel(int dL,int dR,int cL,int MUS)
{
    int IHL,IHR,OHL,OHR;
    cout << "Is Inside Handel for left door activated"<< endl;
    cout << "Enter 0 for No and 1 for Yes"<< endl;
    cin  >> IHL;
validate(IHL);
    cout << "Is Inside Handel for right door activated "<< endl;
    cout << "Enter 0 for No and 1 for Yes"<< endl;
    cin  >> IHR;
validate(IHR);
    cout << "Is Outside handel for left door activated "<< endl;
    cout << "Enter 0 for No and 1 for Yes"<< endl;
   cin  >> OHL;
validate(OHL);
    cout << "Is Outside handel for right door activated"<< endl;
    cout << "Enter 0 for No and 1 for Yes"<< endl;
    cin  >> OHR;
validate(OHR);
 getgearshift(dL,dR,cL,MUS,IHL,IHR,OHL,OHR);
}
// taking input about the gear 
void   getgearshift(int dL,int dR,int cL,int MUS,int IHL,int IHR,int OHL,int OHR){
    char G;
    cout << "Please Enter the state of gear"<< endl;
    cout << "P for  Parking " << endl<< "N for Neutral" << endl << "D for  Drive" << endl<< "1 for gear 1"<< endl<< "2 for gear 2 "<< endl<< "3 for gear 3 "<< endl<< "R for reverse "<< endl;
    cin>> G;
    validate(G);
    checkconditions(dL,dR,cL,MUS,IHL,IHR,OHL,OHR,G);
    
   
    
}
// validating all inputs having anwer in 0 or 1
void validate (int status)
{
    if (status!=1 &&  status!=0){
        cout << "Invalid Input "<< endl;
        exit(0);
    }
}
// validating gear shift
bool validate(char gearinput){
    if (gearinput=='P'){
        return true;
    }
    else if  (gearinput=='N'|| gearinput=='D'|| gearinput=='R'|| gearinput=='1'|| gearinput=='2'|| gearinput=='3')
    {
        return false;
    }
    else {
        cout << "Invalid Input "<< endl;
        exit (0);
    }
}
// applying logic to door according to given conditions 
void checkconditions(int dL,int dR,int cL,int MUS,int IHL,int IHR,int OHL,int OHR,char G){
switch(G){
                   case 'D':
 cout << "Both doors stay closed"<< endl;
 exit(0);
 break;
                 case 'R':
   cout << "Both doors stay closed"<< endl;
   exit(0);
   break;
                   case '1':
   cout << "Both doors stay closed"<< endl;
   exit(0);
   break;
                     case '2':
   cout << "Both doors stay closed"<< endl;
   exit(0);
   break;
                     case '3':
   cout << "Both doors stay closed"<< endl;
   exit(0);
   break;
                       case 'N':
   cout << "Both doors stay closed"<< endl;
   exit(0);
   break;
   case 'P':
   switch(MUS){
    case  0 :
    cout <<"Both doors stay closed"<< endl;
     exit(0);

    break;
    case 1 :
    if (cL==1&& (dL==1|| dL==0) && (dR==1 || dR==0) && (IHL==1|| IHL==0) && (IHR==1 || IHR==0) && OHL==1 && OHR==0){
        cout << "Only left door open"<< endl;
        exit(0);
    }
     if (cL==1&& (dL==1|| dL==0) && (dR==1 || dR==0) && (IHL==1|| IHL==0) && (IHR==1 || IHR==0) && OHL==1 && OHR==1){
        cout << "Both door open"<< endl;
        exit(0);
    }
     if (cL==1&& (dL==1|| dL==0) && (dR==1 || dR==0) && (IHL==1|| IHL==0) && (IHR==1 || IHR==0) && OHL==0 && OHR==0){
        cout << "Both door stay closed"<< endl;
        exit(0);
    }
     if (cL==1&& (dL==1|| dL==0) && (dR==1 || dR==0) && (IHL==1|| IHL==0) && (IHR==1 || IHR==0) && OHL==0 && OHR==1){
        cout << "Only right door open"<< endl;
        exit(0);
            }
    switch(cL){
        case 0:
        switch(dL){
            case 1:
            switch(dR){
                case 1:
                cout<< "Both doors open"<< endl;
                exit(0);
                 break;
                case 0:
                cout<< "Only Left door open"<< endl;
                exit(0);
                 break;
            }
         
break;
case 0:
switch(dR){
    case 1:
    cout << "Only Right door open"<< endl;
    exit(0);
    break;
    case 0:
    cout << "Both door stay closed"<< endl;
    exit(0);
    break;
     exit(0);
}
break;
        }
switch(IHL){
case 1:
switch(IHR){
    case 1:
    cout<< "Both Door open"<< endl;
    exit(0);
    break;
    case 0:
    cout << "Only Right Door open"<< endl;
    exit(0);
    break;
     exit(0);
}
break;
case 0:
switch(IHR){
    case 1:
    cout << "Only right door open"<< endl;
    exit(0);
    break;
    case 0:
    cout << "Both door stay closed"<< endl;
    exit(0);
    break;
     exit(0);
}
break;
}
switch(OHL){
    case 1:
    switch(OHR){
        case 1:
        cout << "Both door open"<< endl;
        exit(0);
        break;
        case 0 :
        cout << "Only right door open "<< endl;
        exit(0);
        break;
         exit(0);
    }
    break;
    case 0:
    switch(OHR){
        case 1:
        cout << "Only right door open"<< endl;
        exit(0);
        break;
        case 0:
        cout << "Both door stay closed "<< endl;
        exit(0);
        break;
         exit(0);
    }
}

break;
case 1:
 switch(dL){
            case 1:
            switch(dR){
                case 1:
                cout<< "Both door stay closed"<< endl;
                exit(0);
                 break;
                case 0:
                cout<< "Both door stay closed"<< endl;
                 break;
                  exit(0);
            }
break;
case 0:
switch(dR){
    case 1:
    cout << "Both door stay closed"<< endl;
    exit(0);
    break;
    case 0:
    cout << "Both door stay closed"<< endl;
    break;
     exit(10);
}
break;
        }
switch(IHL){
case 1:
switch(IHR){
    case 1:
    cout<< "Both door stay closed"<< endl;
    exit(0);
    break;
    case 0:
    cout << "Both door stay closed"<< endl;
    break;
     exit(0);
}
break;
exit(0);
case 0:
switch(IHR){
    case 1:
    cout << "Both door stay closed"<< endl;
    exit(0);
    break;
    case 0:
    cout << "Both door stay closed"<< endl;
    break;
    exit(0);
}
break;
}
switch(OHL){
    case 1:
    switch(OHR){
        case 1:
        cout << "Both door open"<< endl;
        exit(0);
break;
        case 0 :
        cout << "Only left door open"<< endl;
        break;
         exit(0);
    }
    break;
    case 0:
    switch(OHR){
        case 1:
        cout << "Only Right door open "<< endl;
        exit(0);
break;
        case 0:
        cout << "Both door stay closed "<< endl;
        break;
        exit(0);
   break; }
 break;}

    break;  } 

 break;  }

  break; }
  
}

int main(){
    getswitchstatus();

    return 0;
}