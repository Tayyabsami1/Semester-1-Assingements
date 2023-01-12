/*
Name    : Tayyab Kamran Sami
Roll no : 22i-2505
*/

#include<iostream>
#include<iomanip>
#include<unistd.h>
using namespace std;

/*
The program running direction is from bottom to top 
On the start of the Program are the Validators and a
standard number displayer that helps in printing grids
*/

void Validator(int n){
    if(n<0){
        cout<<" You can enter a positive number only"<<endl;
        exit(0);
    }
}

void thepremiumvalidator(int n){
    if(n<1){
        cout<<"This input should be atleast one \n";
        exit(0);
    }
}

void thenumbermaker(){
    cout<<"\t";

    for(int i=0; i<20; i++){
        if(i==19){
        cout<<i;
        }
        else{
            cout<<i<<"\t";
        }
    }
    cout<<endl;
}

void thetransfermaker(string thegrid[][20],int sizeofrows,int nofb ){

    int rockets=5,row2,column2,checkr2[100],checkc2[100];
    checkr2[2]=100,checkc2[2]=100;       // To check for overlapping hits
    int score=0,counter3=0;

    cout<<"You are given "<<rockets<< " Missiles \n";
    cout<<"If you hit the right coordinate your score will increase by 10\n";
    cout<<"if you miss your score will not be deducted\n";
    cout<<"Get ready\n";
    system("pause");

    string thegrid2[20][20];      // Another grid for the purposes to hide the spaceship

      for(int i=0; i<20; i++){                   
        for(int j=0; j<20; j++){
            thegrid2[i][j]=".";
        }  
    }

      thenumbermaker();                           

     for(int i=0; i<20; i++){                 

     cout<<setw(3)<<i<<"\t";                 

        for(int j=0; j<20; j++){
            cout<<thegrid2[i][j];
            cout<<"\t";
        }
         cout<<endl;
    }

    for(int i=1; i<=rockets; i++){       // This Loop will run five time for five missiels(A step toward generic coding)
        cout<<"\n\n\n";
        cout<<"Enter the Row  for Missiel "<<i<<endl;
        cin>>row2;
        Validator(row2);
        checkr2[i]=row2;

        cout<<"Enter the Column for Missiel "<<i<<endl;
        cin>>column2;
        Validator(column2);
        checkc2[i]=column2;

         if(checkr2[i]==checkr2[i+1] && checkc2[i]==checkc2[i+1] ){
            cout<<"You have already hit a missiel at this coordinate "<<endl;
            exit(0);
         }

         if(thegrid[row2][column2]=="&"){
            cout<<endl<<"Congrats you hit a spaceship and earned 10 points"<<endl<<"\n\n";
            score+=10;
            counter3++;
            thegrid2[row2][column2]="H";
            thegrid[row2][column2]="H";

              thenumbermaker();                           

     for(int i=0; i<20; i++){                 

     cout<<setw(3)<<i<<"\t";                 

        for(int j=0; j<20; j++){
            cout<<thegrid2[i][j];
            cout<<"\t";
        }
         cout<<endl;
    }
 }

     else {
            cout<<endl<<"Opps you missed "<<endl<<"\n\n";
            thegrid2[row2][column2]="M";
             thenumbermaker();                           

     for(int i=0; i<20; i++){                 

     cout<<setw(3)<<i<<"\t";                 

        for(int j=0; j<20; j++){
            cout<<thegrid2[i][j];
            cout<<"\t";
        }
         cout<<endl;
    }
  }
}
    sleep(3);
    system("CLS");
    sleep(2);

    cout<<"The Game is over "<<endl;
    cout<<"You hit a total of "<<counter3<<" missiels out of "<<rockets<<endl;
    cout<<"You made a total score of "<<score<<" points"<<endl;
    cout<<"\n\n";

     thenumbermaker();                           

     for(int i=0; i<20; i++){                 

     cout<<setw(3)<<i<<"\t";                 

        for(int j=0; j<20; j++){
            cout<<thegrid[i][j];
            cout<<"\t";
        }
         cout<<endl;
    }
    system("pause");
}


void Validator(string m){
    if(m[0]!='h'&& m[0]!='v' ){
        cout<<"Invalid input\n";
        exit(0);
    }
  
}

void thebattleshipinfo(string thegrid[][20],int sizeofrows){
    int nofb,lofb,location[20][20],row,column,checkr[20],checkc[20];
    string orientation="";
    orientation.resize(100);
    checkr[0]=100,checkc[0]=100;

    cout<<"\n\n"<<"Enter the Number of Battle ships you want to place\n";
    cin>>nofb;

    thepremiumvalidator(nofb);
    Validator(nofb);

    for(int i=1; i<=nofb; i++){ 
                                         // This loop will take the input about the info of all Battle ships
        cout<<"Enter the Length of Battle ship "<<i<<"."<<endl;
        cin>>lofb;
         Validator(lofb);
         thepremiumvalidator(lofb);

        cout<<"Enter the Location of row of  Battle ship "<<i<<"."<<endl;
        cin>>row;
         Validator(row);
         checkr[i]=row;

        cout<<"Enter the location of column of Battle ship "<<i<<"."<<endl;
        cin>>column;
         Validator(column);
         checkc[i]=column;

         if(checkr[i]==checkr[i-1] && checkc[i]==checkc[i-1] ){
            cout<<"You cannot place the  Battle ships at the same Location "<<endl;
            exit(0);
         }

        cout<<"Enter the Orientation of Battle ship "<<i<<"."<<endl;
        cout<<"Answer in 'h' or 'v' "<<endl;
        cin>>orientation;
        Validator(orientation);

        /*
        After doing all the Validations we use if and for loops to place the ships on the orignal grid
        */

           if(orientation=="h"){
            for(int j=1; j<=lofb; j++){  
                thegrid[row][column]="&";
                column++;   
            }
           }

           if(orientation=="v"){
             for(int j=1; j<=lofb; j++){  
                thegrid[row][column]="&";
                row++;   
            }
           }

/*  ----Printing the updated Grid after every Iteration----  */

            thenumbermaker();     

           
         for(int i=0; i<20; i++){ 

      cout<<setw(3)<<i<<"\t"; 

        for(int j=0; j<20; j++){
            
            cout<<thegrid[i][j];
            cout<<"\t";
        }
         cout<<endl;
    }
    
 }

 sleep(3);
 system("CLS");
 thetransfermaker(thegrid,20,nofb);

}


void thegridmaker(){
    string thegrid[20][20];
    
    for(int i=0; i<20; i++){                   /*Here i made an array and gave it the initial value of dot*/
        for(int j=0; j<20; j++){
            thegrid[i][j]=".";
        }  
    }

   thenumbermaker();                           // I use this function to print numbers from 0 to 19

     for(int i=0; i<20; i++){                  // Showing the initial grid to the user

     cout<<setw(3)<<i<<"\t";                   // This will print the vertical line of number

        for(int j=0; j<20; j++){
            cout<<thegrid[i][j];
            cout<<"\t";
        }
         cout<<endl;
    }

    thebattleshipinfo(thegrid,20);
}

int main(){
    cout<<"                                  Welcome to the battle ship game "<<endl<<endl;
    system("pause");
    cout<<endl<<endl;

    thegridmaker();  

}