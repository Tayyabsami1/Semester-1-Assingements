/*
Name    : Tayyab Kamran Sami
Roll no : 22i-2505
*/

/*-----THIS PROGRAM FOLLOWS THE DIRECTION FROM BOTTOM TO TOP-----*/

#include<iostream>
#include<unistd.h>
#include<iomanip>
using namespace std;

void thematrixmultiplier(int arr1[][10],int sizeofrow1,int sizeofcol1,int arr2[][10],int sizeofrow2,int sizeofcol2,int r1,int c1,int r2,int c2){
     cout <<"Multiplying both Matrices and Displaying Result\n";
    sleep(2);

     int arr3[r1][c2]; 
     int result[r1*c2];
     int counter=0;

      for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            arr3[i][j]=0;     // Initializing Array
          
        }
        
    }

   for(int i = 0; i < r1; ++i)
        for(int j = 0; j < c2; ++j)
            for(int k = 0; k < c1; ++k)
            {
                 arr3[i][j]=arr3[i][j]+(arr1[i][k] * arr2[k][j]);
            }

     for(int L=0; L<r1; L++){
        for(int M=0; M<c2; M++){
            cout<<arr3[L][M];
            cout<<"\t";   
            counter++; 
        }
        cout<<endl;
    }

}

void thearrayinput(int arr1[][10],int sizeofrow1,int sizeofcol1,int arr2[][10],int sizeofrow2,int sizeofcol2,int r1,int c1,int r2,int c2){
                                              
    for (int i=0; i<r1; i++){                    // taking Values for Matrix 1 
        for(int j=0; j<c1; j++){
           cout<<"Enter the Value for Row "<<i+1<<" and column "<<j+1<<" for Matrix 1"<<endl;
           cin>>arr1[i][j];
        }
    }
    
     for (int i=0; i<r2; i++){                    // taking Values for Matrix 2
        for(int j=0; j<c2; j++){
            cout<<"Enter the Value for Row "<<i+1<<" and column "<<j+1<<" for Matrix 2"<<endl;
           cin>>arr2[i][j];     
        } 
    }
 /*---------------------------------DISPLAYING BOTH MATRICES--------------------------------*/

  cout<<"The Matrices are\n";                 // Printing the Matrices the user entered
  cout<<"Matrix 1:\n";
/* cout<<"__";
  for(int i=1; i<=c1; i++){
    cout<<"    ";               USELESS TRY TO PRINT MATRIX SIGN
  }
  cout<<"__";
  cout<<"\n";
*/
    for (int i=0; i<r1; i++){
        // cout<<"|";
        for(int j=0; j<c1; j++){
            cout<<setw(5)<<arr1[i][j];
            cout<<"\t";
        }
        // cout<<"|";
        cout<<"\n";
    }
/*   cout<<"__";
  for(int i=1; i<=c1; i++){
    cout<<"    ";
  }
  cout<<"__";
*/

    cout<<endl;
    cout<<"Matrix 2:\n";
/*   cout<<"__";
   for(int i=1; i<=c2; i++){                  USELESS TRY TO PRINT MATRIX SIGN
     cout<<"    ";
    }
   cout<<"__";
   cout<<"\n";
*/
     for (int i=0; i<r2; i++){
        // cout<<"|";
        for(int j=0; j<c2; j++){
            cout<<setw(5)<<arr2[i][j];
            cout<<"\t";
        }
        // cout<<"|";
        cout<<"\n";
    }
/*
     cout<<"__";
   for(int i=1; i<=c2; i++){
     cout<<"    ";
   }
     cout<<"__\n";
*/
   

    thematrixmultiplier(arr1,10,10,arr2,10,10,r1,c1,r2,c2);
}

bool verify_order(int r1,int c2){     // A bool function to fulfill program requirements
    if(r1==c2){
        return 1;
    }
    else
        return 0;
}

void validate(int rc){
    if(rc<0 || rc>10){
        cout<<"Invalid Input...Program terminated\n";
        exit(0);
    }
}

void thearraymaker(){
    int arr1[10][10],arr2[10][10];             // Making standard 2 Dimensional Array of Size 10 by 10      
    int r1,c1,r2,c2;

    cout<<"This Program will multiply Matrices of any order"<<endl;
    cout<<"Maximum Row and Column number is 10\n";
    sleep(1);
    cout<<"Enter the Rows for Matrix 1\n";
    cin>>r1;

    validate(r1);                               //Performing side by side validation

    cout<<"Enter the Columns for Matrix 1\n";
    cin>>c1;

    validate(c1);                               //Performing side by side validation

    cout<<"Enter the Rows for Matrix 2\n";
    cin>>r2;

    validate(r2);                               //Performing side by side validation

    cout<<"Enter the Columns for Matrix 2\n";
    cin>>c2;

    validate(c2);                               //Performing side by side validation

    cout<<"Cheking if the matrices can me multiplied or not";
    sleep(1);
    cout<<".";
    sleep(1);
    cout<<".";
    sleep(1);
    cout<<".\n";

     if (verify_order(r1,c2)){                  // Checking if the matrices are conformable for multiplication\
     
     cout<<"They can be multiplied redirecting";
     sleep(1);
     cout<<".";
     sleep(1);
     cout<<".";
     sleep(1);
     cout<<".";
     sleep(1);
     cout<<endl;

     thearrayinput(arr1,10,10,arr2,10,10,r1,c1,r2,c2);

     }
     else{
        cout<<"Sorry their multiplication is not possible\n";
     }
}

int main(){
    thearraymaker();
}