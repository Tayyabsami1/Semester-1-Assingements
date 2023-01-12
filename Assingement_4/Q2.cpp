 #include <iostream>
 #include<unistd.h>

using namespace std;
void  validator(int n){
  if(n<0){
    cout<< "Diameter cannot be negative"<< endl;
    exit(0);
  }
}
void thepatternmaker(int n){
  
    int rows=n,columns=n,hro,halfrow;
    int dots=n,stars=3,totalstars=0;
    dots=dots/3;
 if(n%3!=0){                          // To get the number of dots
        dots=dots+1;
     }    
           hro=rows-dots;
           halfrow=rows-hro;
      for(int i=1; i<=halfrow; i++){  // This Loop will print the upper Half of the pattern
        for(int j=1; j<=dots; j++){   // This Loop will print the upper left dots
            cout<<".";
        }

        for(int k=1; k<=stars; k++){  // This Loop will print the upper stars 
            cout<<"*";
        }
        for(int l=1; l<=dots; l++){   // This Loop will print the upper right dots
            cout<<".";
        }
        dots--;
        stars=stars+2;
        cout<<endl;
        totalstars=stars;

      }
      // The Below seperate loop will print the 3 lines in the middle
       for(int i=halfrow; i<=halfrow+1; i++){ 
         for(int j=1; j<=totalstars; j++){
            cout<<"*";
         }
 cout<< endl;
     }
     /*
     The Below Loops will follow the same logic as in the above loops just the positive 
     and the negative signs are replaced
     */
     for(int i=halfrow+3; i<=halfrow+halfrow+3; i++){
      for( int j=1; j<=dots; j++){
        cout<<".";
      }
      
      for(int k=1; k<=totalstars; k++){
        cout<<"*";
      }
      for(int l=1; l<=dots; l++){
        cout<<".";
      }
      dots++;
      totalstars=totalstars-2;
      cout<< endl;

     }
     
}
void diameterinput(){
    int n;
    cout<< "Enter the Diameter of pattern"<< endl;
    cin>>n;
    validator(n);           // To Validate the diameter  
    thepatternmaker(n);     // This Function will implement the main logic to print the pattern
 }
int main()
{
  diameterinput();           // This function will take the diameter and make further proceedings in the program
  return 0;
}