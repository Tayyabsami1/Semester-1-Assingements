/*
Name    : Tayyab Kamran Sami
Roll no : 22i-2505
*/

/* The function is initiated from main and a function is called according to the option the user have selected */

#include<iostream>
#include<unistd.h>
using namespace std;

/* ---- THE VALIDATE FUNCTION TO CHECK IF THE STRING IS EYMPTY ---- */

void error_checking(string sentence){
    if(sentence.length()==0){
        cout<<"This field cannot be eympty\n";
        exit(0);
    }
}

/* ---- THE VALIDATE FUNCTION TO VALIDATE START AND END -*/

void error_checking(int start,int end){
    if(start<0 || end<0){
        cout<<"The Values of Starting Index and ending index cannot be negative\n";
        exit(0);
    }
}

/* ---- THE VALIDATE FUNCTION TO VALIDATE OPTIONS -*/

 void error_checking(int answer){
    if(answer<1 || answer>4){
        cout<<"Please Enter the Input between 1 and 4\n";
        exit(0);
    }
 }

 /* ----FUNCTION 4 : Invert  Function---- */

 string  invert(string sentence){
    string modified3="";
    modified3.resize(100);                                   //Giving size to string 
    int counter5=sentence.length()-1;
    /*-Applying Logic of Invert-*/
    for (int i=0; i<sentence.length(); i++){
        modified3[i]=sentence[counter5];
        counter5--;
    }
    return modified3;

 }

/* ----FUNCTION 3 : Replace Function---- */

string replace (string pattern,int start2,int end2,string sentence ){
    int counter3=0,counter4=0;
    int a,b,c;                                   //To determine the increased length of Sentence 
    char restore[100];
    string final="";                             //The string containing the remaining sentence
    string mid="";                               //The string containing the start and edited sentence 
    mid.resize((100)); 
    final.resize(100);

/*--Storing the sentence written after the index of replace--*/
    for(int i=end2+1; i<sentence.length(); i++){ 
        final[counter4]=sentence[i];
        counter4++;
    }
     /*--Storing the sentence written before the index of end of replace--*/
    for(int i=0; i<=end2; i++){

        mid[i]=sentence[i];
    }
     /*--The logic i was previously using--*/
    if((end2-start2)<pattern.length()-1){
        b=sentence.length();
        sentence.resize((sentence.length())+(pattern.length()-1-(end2-start2))); // Incresing the length of string 
        a=(sentence.length());
        c=a-b;     
                  
    /*--Replacing the sentence with the required pattern--*/
         for(int i=0; i<=pattern.length(); i++){
         restore[i]=sentence[end2+i];
         mid[start2+counter3]=pattern[i];
         counter3++;
         }
    sentence=mid+final;                      //Concatinating the both strings to return them to main         

    }
    else{
    for(int i=0; i<pattern.length(); i++){
        sentence[start2+counter3]=pattern[i];
        counter3++;
    }
    }
    return sentence;

}

/* ----FUNCTION 2 : Find---- */

int  find(string pattern,string sentence){
    int counter=0;
    int thesecretloc=0; 
    int counter2=0;

    for(int i=0; i<pattern.length(); i++){      

        for (int j=0; j<sentence.length(); j++){

            if(pattern[i]==sentence[j]){         // The first if to check similarity 
               
                thesecretloc=j;

                for(int k=0; k<pattern.length(); k++){

                    if(sentence[j+k]==pattern[k]){      // The second if to check the sentence 
                        counter++;
                        
                       
                            if(counter==pattern.length()){
                                
                                return thesecretloc;
                         }
                    }
                } 
            }  
         }
    }

    if(counter!=pattern.length()){
      
   return -1;
  }
}

/* ----FUNCTION 1 : substring---- */

string substring(int start,int end,string text){
    string newsentence="";  
    for(int i=start;  i<=end; i++){
        newsentence=newsentence+text[i];
    }
    return newsentence;

}

/* ------ THE MENUE DISPLAYER FUNCTION ------ */

int themenuedisplayer(){
    int answer;
    cout<<"Please Select the option you would like to use\n";
    cout<<"1. Find a Sub String \n";
    cout<<"2. Find occurence of Patterns\n";
    cout<<"3. Replace some text with a specific pattern\n";
    cout<<"4. Invert the sentence\n";
    cin>>answer;
    error_checking(answer);
    return answer;
}

/*
The main calls the required functions according to the user input and make the program run
*/


int main(){

    string sentence;
    int option=1;
    cout<<"Enter a Sentence "<<endl;
    getline(cin,sentence);

    error_checking(sentence);

    option=themenuedisplayer();

        int start,end;
        string modifiedstring;

    if(option==1){
        cout<<"Enter the staring Index of substring\n";
        cin>>start;
        error_checking(start,0);
        cout<<"Enter the ending Index of substring\n";
        cin>>end;
        error_checking(0,end);
        modifiedstring=substring(start,end,sentence);
        cout<<"The Substring is "<<modifiedstring<<endl;
    }

    string pattern="";
    int thenumber=0;

    if(option==2){
        cout<<"Enter the text you want to search for\n";
        cin.ignore();
         getline(cin,pattern);
         error_checking(pattern);

        thenumber=find(pattern,sentence);

        if(thenumber!=-1){
            cout<<"The starting location of "<<"\""<<pattern<<"\""<<" is "<<thenumber<<endl;
        }
        else if (thenumber==-1){
            cout<<"Sorry the entered pattern don't exist in the following string\n";
        }
    }

    string pattern2="",modifiedstring2="";
    int start2,end2;

    if (option==3){
        cout<<"Enter the text you want to replace "<<endl;
        cin.ignore();
        getline(cin,pattern2);

        error_checking(pattern2);

        cout<<"Enter the starting Index of Sentence where you want to replace "<<endl;
        cin>>start2;
         error_checking(start2,0);
        cout<<"Enter the ending Index of Sentence where you want to end replace "<<endl;
        cin>>end2;
         error_checking(0,end2);

        modifiedstring2=replace(pattern2,start2,end2,sentence);

        cout<<"The string after getting replaced by the pattern is "<<endl;
        sleep(1);
        cout<<"\""<<modifiedstring2<<"\""<<endl;
    }

    string modifiedstringsigmaversion="";

    if(option==4){
        modifiedstringsigmaversion=invert(sentence);
        cout << "The String after getting inverted is "<<"\""<< modifiedstringsigmaversion<<"\""<<endl;
    }
}
