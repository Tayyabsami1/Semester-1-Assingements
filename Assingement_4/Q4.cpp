#include <iostream>
#include <ctime>
#include<cstdlib>
#include<unistd.h>
using namespace std;
int thebounty=0,n5=0,prob1=100,prob2=200,prob3=300,prob4=400;
void totalprize(int prize){
  thebounty=thebounty+prize;
}
void  prize1(){
   static int prize=0;
  prize=prize+100;
  cout<<"Congrats You won "<<prize<<endl; 
  totalprize(prize);
}
void prize2(){
   static int prize=0;
  prize=prize+1000;
  cout<< "Congrats you won "<<prize<<endl;
  totalprize(prize);
  }
void prize3(){
   static int prize=0;
  prize=prize+10000;
  cout<<"Congrats You won "<<prize<<endl;
  totalprize(prize);
}
void prize4(){
   static int prize=0;
  prize=prize+15000;
  cout<<"Congrats you won "<< prize<<endl;
  totalprize(prize);
}
void sports(int i){
  int randomspo;
  static int F=1;
  char answer;
  randomspo=rand()%15 +1;
    static int sq4[15];
  sq4[0]=7;
sq4[F]=randomspo;
while(sq4[F]==sq4[F-1]){
  sq4[F]=rand()%15 +1;
   if (sq4[F]!=sq4[F-1]){
    continue;
  }
}
randomspo=sq4[F];
F++;
  switch(randomspo){
    case 1:
    cout<< "How many players are there in a Cricket team "<<endl;
    cout<< "A. 11 "<<endl<<"B. 15 "<<endl<<"C. 9 "<<endl<<"D. 13 "<<endl;
    cin>>answer;
     if(answer=='A' || answer=='a'){
      cout<< "The Answer is correct "<<endl;
      prob3=prob3-10;
      if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
    }

    break;
    case 2:
    cout<< " What does FIFA stand for?"<<endl;
     cout<< "A.Football International football affair "<<endl<<"B. Federation International de Football Association. "<<endl<<"C. Both of them "<<endl<<"D. None of them  "<<endl;
      cin>>answer;
     if(answer=='B' || answer=='b'){
      cout<< "The Answer is correct "<<endl;
      prob3=prob3-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
      n5++;
      if(n5>12){
        cout<<"Sorry your probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 3:
    cout<< " After how many Years FIFA World Cup is held?"<<endl;
      cout<< "A. 1 Years "<<endl<<"B. 2 Years "<<endl<<"C. 3 Years "<<endl<<"D. 4 Years"<<endl;
 cin>>answer;
     if(answer=='D' || answer=='d'){
      cout<< "The Answer is correct "<<endl;
      prob3=prob3-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>11){
        cout<<"Sorry your probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 4:
    cout<< "Who won the first ICC World Cup?"<<endl;
     cout<< "A. Pakistan "<<endl<<"B. India  "<<endl<<"C. West indies  "<<endl<<"D. England  "<<endl;
 cin>>answer;
     if(answer=='C' || answer=='c'){
      cout<< "The Answer is correct "<<endl;
      prob3=prob3-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 5:
    cout<< " What is the 100m World Record of Usain Bolt"<<endl;
      cout<< "A. 9.58 sec "<<endl<<"B. 10 sec "<<endl<<"C. 11 sec "<<endl<<"D. 8 sec "<<endl;
       cin>>answer;
     if(answer=='A' || answer=='a'){
      cout<< "The Answer is correct "<<endl;
      prob3=prob3-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }

    break;
    case 6:
    cout<< " How many FIFA World Cup has been played till 2018?"<<endl;
    cout<< "A. 18 "<<endl<<"B. 21 "<<endl<<"C. 23 "<<endl<<"D. 24 "<<endl;
     cin>>answer;
     if(answer=='B' || answer=='b'){
      cout<< "The Answer is correct "<<endl;
      prob3=prob3-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }

    break;
    case 7:
    cout<< "Which Sport is Performed by the Legend Muhammad Ali?"<<endl;
      cout<< "A. Swiming  "<<endl<<"B. Cricket  "<<endl<<"C. Boxing  "<<endl<<"D. Football "<<endl;
       cin>>answer;
     if(answer=='C' || answer=='c'){
      cout<< "The Answer is correct "<<endl;
      prob3=prob3-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else
    {
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }

    break;
    case 8:
    cout<< "When did Cristiano Ronaldo join Juventus Football Club?"<<endl;
      cout<< "A. 2022 "<<endl<<"B. 2015 "<<endl<<"C. 2013 "<<endl<<"D. 2018 "<<endl;
       cin>>answer;
     if(answer=='D' || answer=='d'){
      cout<< "The Answer is correct "<<endl;
      prob3=prob3-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }

    break;
    case 9:
    cout<< "Who won the FIFA World Cup in 2018?"<<endl;
     cout<< "A. France  "<<endl<<"B. England  "<<endl<<"C. Pakistan "<<endl<<"D. India  "<<endl;
     cin>>answer;
     if(answer=='A' || answer=='a'){
      cout<< "The Answer is correct "<<endl;
      prob3=prob3-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
     


    break;
    case 10:
    cout<< "What is the National Sports of China?"<<endl;
      cout<< "A. Cricket "<<endl<<"B. Table Tenis "<<endl<<"C. Football "<<endl<<"D. Volley ball "<<endl;
      cin>>answer;
     if(answer=='B' || answer=='b'){
      cout<< "The Answer is correct "<<endl;
      prob3=prob3-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
     


    break;
    case 11:
    cout<< " Which Country Won the most FIFA World Cup?"<<endl;
     cout<< "A. France "<<endl<<"B. England  "<<endl<<"C. Brazil "<<endl<<"D. China "<<endl;
     cin>>answer;
     if(answer=='C' || answer=='c'){
      cout<< "The Answer is correct "<<endl;
      prob3=prob3-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
     

    break;
    case 12:
    cout<< " What is the National Game of Japan?"<<endl;
      cout<< "A. Tennis "<<endl<<"B. Cricket "<<endl<<"C. Football "<<endl<<"D. Sumo "<<endl;
      cin>>answer;
     if(answer=='D' || answer=='d'){
      cout<< "The Answer is correct "<<endl;
      prob3=prob3-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
     

    break;
    case 13:
    cout<< "What is the Distance of the Marathon Race?"<<endl;
      cout<< "A. 42.195 km "<<endl<<"B. 50 Km "<<endl<<"C. 100 Km "<<endl<<"D. 150 Km "<<endl;
cin>>answer;
     if(answer=='A' || answer=='a'){
      cout<< "The Answer is correct "<<endl;
      prob3=prob3-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
     
    break;
    case 14:
    cout<< "What is the Number of Players in Hockey?"<<endl;
      cout<< "A. 9 "<<endl<<"B. 11 "<<endl<<"C. 13 "<<endl<<"D. 15 "<<endl;
      cin>>answer;
     if(answer=='B' || answer=='b'){
      cout<< "The Answer is correct "<<endl;
      prob3=prob3-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
     

    break;
    case 15:
    cout<< "How many overs are in a T20"<<endl;
     cout<< "A. 10 "<<endl<<"B. 50 "<<endl<<"C. 20 "<<endl<<"D. 22 "<<endl;
     cin>>answer;
     if(answer=='C' || answer=='c'){
      cout<< "The Answer is correct "<<endl;
      prob3=prob3-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
     

    break; 

  }
}
void popculture(int i){
   int randompop;
   static int M=1;
  char answer;
  randompop=rand()%15 +1;
  static  int sq3[15];
  sq3[0]=7;
sq3[M]=randompop;
while(sq3[M]==sq3[M-1]){
  sq3[M]=rand()%15 +1;
   if (sq3[M]!=sq3[M-1]){
    continue;
  }
}
randompop=sq3[M];
M++;
  switch(randompop){
    case 1:
    cout<< "Which is the famous food of Pakistan"<<endl;
     cout<< "A. Biryani "<<endl<<"B. Steak "<<endl<<"C. Sushi "<<endl<<"D. Soup "<<endl;
 cin>>answer;
     if(answer=='A' || answer=='a'){
      cout<< "The Answer is correct "<<endl;
      prob4=prob4-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 2:
    cout<< "How many kids does Angelina Jolie have?"<<endl;
     cout<< "A. 5 "<<endl<<"B. 6 "<<endl<<"C. 7 "<<endl<<"D. 8 "<<endl;
 cin>>answer;
     if(answer=='B' || answer=='b'){
      cout<< "The Answer is correct "<<endl;
      prob4=prob4-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 3:
    cout<< "How many times did Ross Geller get divorced on Friends?"<<endl;
     cout<< "A. 1 "<<endl<<"B. 2 "<<endl<<"C. 3 "<<endl<<"D. 4 "<<endl;
 cin>>answer;
     if(answer=='C' || answer=='c'){
      cout<< "The Answer is correct "<<endl;
      prob4=prob4-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 4:
    cout<< " Which movie won the first official Best Picture Academy Award?"<<endl;
      cout<< "A. Spiderman "<<endl<<"B. Hulk "<<endl<<"C. Thor "<<endl<<"D. Wings "<<endl;
 cin>>answer;
     if(answer=='D' || answer=='d'){
      cout<< "The Answer is correct "<<endl;
      prob4=prob4-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 5:
    cout<< "How many Harry Potter books and movies are there?"<<endl;
    cout<< "A. 7 books and 8 movies "<<endl<<"B. 1 Book and 1 movies "<<endl<<"C. 2 Books and 2 Movies "<<endl<<"D. 3 Books and 3 Movies "<<endl;
 cin>>answer;
     if(answer=='A' || answer=='a'){
      cout<< "The Answer is correct "<<endl;
      prob4=prob4-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 6:
    cout<< " Which Avenger other than Captain America was able to pick up Thor's Mjolnir in the Marvel movies?"<<endl;
     cout<< "A. Ironman "<<endl<<"B. Vision "<<endl<<"C. Spiderman "<<endl<<"D. Wanda "<<endl;
 cin>>answer;
     if(answer=='B' || answer=='b'){
      cout<< "The Answer is correct "<<endl;
      prob4=prob4-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 7:
    cout<< "Who was the highest-paid actress of 2019, according to Forbes?"<<endl;
    cout<< "A. Mira Khan "<<endl<<"B. Junaid Safdar "<<endl<<"C. Scarlet Johnhasson "<<endl<<"D. Amna Malik "<<endl;
     cin>>answer;
     if(answer=='C' || answer=='c'){
      cout<< "The Answer is correct "<<endl;
      prob4=prob4-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }

    break;
    case 8:
    cout<< "Who is the half-blood prince in Harry Potter?"<<endl;
      cout<< "A. Scarlet  "<<endl<<"B. Jane "<<endl<<"C. Tayyab "<<endl<<"D. Severus Snape "<<endl;
       cin>>answer;
     if(answer=='D' || answer=='d'){
      cout<< "The Answer is correct "<<endl;
      prob4=prob4-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }

    break;
    case 9:
    cout<< "What was the age difference between Jessica and Mark on Love Is Blind?"<<endl;
     cout<< "A. 10 Years "<<endl<<"B. 15 Years "<<endl<<"C. 20 Years "<<endl<<"D. 25 Years "<<endl;
      cin>>answer;
     if(answer=='A' || answer=='a'){
      cout<< "The Answer is correct "<<endl;
      prob4=prob4-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 10:
    cout<< "In 2020, Netflix aired a reality show that required participants to remain celibate. What was it called?"<<endl;
     cout<< "A. Big Boss "<<endl<<"B. To hot to handle "<<endl<<"C. Need for Speed "<<endl<<"D. Fast and Furious "<<endl;
 cin>>answer;
     if(answer=='B' || answer=='b'){
      cout<< "The Answer is correct "<<endl;
      prob4=prob4-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 11:
    cout<< " Which tech entrepreneur named his son X Æ A-12?"<<endl;
     cout<< "A. Haroon  "<<endl<<"B. Arham "<<endl<<"C. Elon Musk "<<endl<<"D. Tayyab "<<endl;
 cin>>answer;
     if(answer=='C' || answer=='c'){
      cout<< "The Answer is correct "<<endl;
      prob4=prob4-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 12:
    cout<< "Which pop star accidentally set fire to her home gym with candles?"<<endl;
     cout<< "A. Tayyab "<<endl<<"B. Wajeeha  "<<endl<<"C. Sami "<<endl<<"D. Britney Spears "<<endl;
 cin>>answer;
     if(answer=='D' || answer=='d'){
      cout<< "The Answer is correct "<<endl;
      prob4=prob4-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 13:
    cout<< " What movie in 2019 topped Avatar as the highest-grossing film of all time?"<<endl;
     cout<< "A. Avengers endgame "<<endl<<"B. Ironman 1 "<<endl<<"C. Hulk "<<endl<<"D. Blackwidow "<<endl;
 cin>>answer;
     if(answer=='A' || answer=='a'){
      cout<< "The Answer is correct "<<endl;
      prob4=prob4-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 14:
    cout<< "Which artist made history in 2020 as the youngest winner of the Grammys' four main categories?"<<endl;
     cout<< "A. Janes Froster "<<endl<<"B. Billie Ellish "<<endl<<"C. Sarah "<<endl<<"D. Brock Lesnar "<<endl;
 cin>>answer;
     if(answer=='B' || answer=='b'){
      cout<< "The Answer is correct "<<endl;
      prob4=prob4-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 15:
    cout<< " Which pop star was Judge Judy's neighbor?"<<endl;
     cout<< "A. Thomson "<<endl<<"B. Michail jackson "<<endl<<"C. Justin Beber "<<endl<<"D. Atif Aslam "<<endl;
 cin>>answer;
     if(answer=='C' || answer=='c'){
      cout<< "The Answer is correct "<<endl;
      prob4=prob4-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;

  }

}
void history(int i){
   int randomhis;
   static int L=1;
  char answer;
  randomhis=rand()%15 +1;
  static  int sq2[15];
  sq2[0]=7;
sq2[L]=randomhis;
while(sq2[L]==sq2[L-1]){
  sq2[L]=rand()%15 +1;
   if (sq2[L]!=sq2[L-1]){
    continue;
  }
}
randomhis=sq2[L];
L++;
  switch(randomhis){
    case 1:
    cout<< "When was Pakistan created"<<endl;
      cout<< "A. 1947 "<<endl<<"B. 1930 "<<endl<<"C. 1948 "<<endl<<"D. 1935 "<<endl;
      cin>>answer;
     if(answer=='A' || answer=='a'){
      cout<< "The Answer is correct "<<endl;
      prob2=prob2-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }

    break;
    case 2:
    cout<< "When Quaid-e-Azam died"<<endl;
     cout<< "A. 1900 "<<endl<<"B. 1948 "<<endl<<"C. 1956 "<<endl<<"D. 1971 "<<endl;
     cin>>answer;
     if(answer=='B' || answer=='b'){
      cout<< "The Answer is correct "<<endl;
       prob2=prob2-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 3:
    cout<< "When Pakistan lost East Pakistan "<<endl;
      cout<< "A. 1920 "<<endl<<"B. 1890 "<<endl<<"C. 1971 "<<endl<<"D. 1943 "<<endl;
      cin>>answer;
     if(answer=='C' || answer=='c'){
      cout<< "The Answer is correct "<<endl;
       prob2=prob2-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }

    break;
    case 4:
    cout<< "Who is our National Poet "<<endl;
     cout<< "A. Sir Syed Ahmed Khan "<<endl<<"B. Mir Taqi Mir "<<endl<<"C. Mirza galid "<<endl<<"D. Allama Muhammad Iqbal "<<endl;
     cin>>answer;
     if(answer=='D' || answer=='d'){
      cout<< "The Answer is correct "<<endl;
       prob2=prob2-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 5:
    cout<< "Who is the Capital of Punjab "<<endl;
      cout<< "A. Lahore  "<<endl<<"B. Kashmir "<<endl<<"C. Sindh "<<endl<<"D. Karachi "<<endl;
      cin>>answer;
     if(answer=='A' || answer=='a'){
      cout<< "The Answer is correct "<<endl;
       prob2=prob2-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 6:
    cout<< "Our national language is "<<endl;
     cout<< "A. English "<<endl<<"B. Urdu "<<endl<<"C. Sindhi "<<endl<<"D. Punjabi "<<endl;
     cin>>answer;
     if(answer=='B' || answer=='b'){
      cout<< "The Answer is correct "<<endl;
       prob2=prob2-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }

    break;
    case 7:
    cout<< "Our National dress is "<<endl;
     cout<< "A. Pent Coat  "<<endl<<"B. Dhoti "<<endl<<"C. Shalwar Kamiz "<<endl<<"D. Jeans "<<endl;
     cin>>answer;
     if(answer=='C' || answer=='c'){
      cout<< "The Answer is correct "<<endl;
       prob2=prob2-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }

    break;
    case 8:
    cout<< "Our National Flower is "<<endl;
    cout<< "A. Sunflower "<<endl<<"B. Rose  "<<endl<<"C. Tulip "<<endl<<"D. Jasmine  "<<endl;
    cin>>answer;
     if(answer=='D' || answer=='d'){
      cout<< "The Answer is correct "<<endl;
       prob2=prob2-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }

    break;
    case 9:
    cout<< "When Allama Iqbal died "<<endl;
     cout<< "A. 1938 "<<endl<<"B. 1940 "<<endl<<"C. 1948 "<<endl<<"D. 1956 "<<endl;
     cin>>answer;
     if(answer=='A' || answer=='a'){
      cout<< "The Answer is correct "<<endl;
       prob2=prob2-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }

    break;
    case 10:
    cout<< "When Pakistan resolution was passed"<<endl;
    cout<< "A. 1935  "<<endl<<"B. 1940 "<<endl<<"C. 1956 "<<endl<<"D. 1933 "<<endl;
    cin>>answer;
     if(answer=='B' || answer=='b'){
      cout<< "The Answer is correct "<<endl;
       prob2=prob2-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }

    break;
    case 11:
    cout<< "Which country lies in the north of Pakistan"<<endl;
   cout<< "A. India  "<<endl<<"B. Afghanistan "<<endl<<"C. China  "<<endl<<"D. Arabian Sea "<<endl;
   cin>>answer;
     if(answer=='C' || answer=='c'){
      cout<< "The Answer is correct "<<endl;
       prob2=prob2-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }

    break;
    case 12:
    cout<< "Which country lies in the east of Pakistan "<<endl;
     cout<< "A. Iran  "<<endl<<"B. China "<<endl<<"C. Afghanistan "<<endl<<"D. India "<<endl;
     cin>>answer;
     if(answer=='D' || answer=='d'){
      cout<< "The Answer is correct "<<endl;
       prob2=prob2-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }

    break;
    case 13:
    cout<< "Which Sea which  lies in the south of Pakistan"<<endl;
      cout<< "A. Arabian Sea  "<<endl<<"B. Indian Ocean "<<endl<<"C. Arctic  "<<endl<<"D. North Atlantic "<<endl;
      cin>>answer;
     if(answer=='A' || answer=='a'){
      cout<< "The Answer is correct "<<endl;
       prob2=prob2-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }

    break;
    case 14:
    cout<< "When was Now or Never published"<<endl;
    cout<< "A. 1947 "<<endl<<"B. 1933 "<<endl<<"C. 1948 "<<endl<<"D. 1956 "<<endl;
    cin>>answer;
     if(answer=='B' || answer=='b'){
      cout<< "The Answer is correct "<<endl;
       prob2=prob2-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }

    break;
    case 15:
    cout<< "How many wars are fought between Pakistan and India"<<endl;
     cout<< "A. 1 "<<endl<<"B. 2 "<<endl<<"C. 3 "<<endl<<"D. 4 "<<endl;
      cin>>answer;
     if(answer=='C' || answer=='c'){
      cout<< "The Answer is correct "<<endl;
       prob2=prob2-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
     

    break;

  }

}
void science (int i){
  static int k=1;
  int randomsci;
  char answer;
   static int sq1[15];
  sq1[0]=7;
  randomsci=rand()%15 +1;
  sq1[k]=randomsci;
while(sq1[k]==sq1[k-1]){
  sq1[k]=rand()%15 +1;
  if (sq1[k]!=sq1[k-1]){
    continue;
  }
}
randomsci=sq1[k];
k++;
  switch(randomsci){
    case 1:
    cout << "What is the outermost planet in the solar system"<< endl;
    cout << "A. Mercury"<< endl<< "B. Pluto"<< endl<< "C. Neptune "<< endl<< "D. Uranus "<< endl;
    cin>> answer;
    if(answer=='C' || answer=='c'){
      cout<< "The Answer is correct "<<endl;
      prob1=prob1-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 2: 
    cout << "Severe deficiency of Vitamin C causes in "<< endl;
    cout << "A. Scurvy "<<"B. Rickets "<< "C. Nightblindness "<< "D. None of these "<< endl;
     cin>> answer;
    if(answer=='B' || answer=='b'){
      cout<< "The Answer is correct "<<endl;prob1=prob1-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 3:
    cout << "The SI unit of Charge is "<< endl;
    cout << "A. Coulumb"<< endl<< "B. Ampere "<< endl<< "C. Ohm "<< endl<< "D. Volt "<< endl;
     cin>> answer;
    if(answer=='A' || answer=='a'){
      cout<< "The Answer is correct "<<endl;prob1=prob1-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 4:
    cout << "The lifespan of Red Blood cells is "<< endl;
    cout << "A. 10 Days"<< endl << "B. 120 Days "<< endl<< "C. 30 Days "<< endl<< "D. 240 Days"<< endl;
     cin>> answer;
    if(answer=='B' || answer=='b'){
      cout<< "The Answer is correct "<<endl;prob1=prob1-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 5:
    cout << "Who is the father of the Computer"<< endl;
    cout << "A. Charles Babage "<< endl<<"B. Michael Faraday "<<endl<<"C. Tayyab Sami"<<endl<<"D. Jane Froster "<<endl;
     cin>> answer;
    if(answer=='A' || answer=='a'){
      cout<< "The Answer is correct "<<endl;prob1=prob1-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
     case 6:
     cout<< "Electric Current is measured by "<< endl;
     cout<< "A. Barometer "<<endl<<"B. Galvanometer "<<endl<<"C. Ammeter "<<endl<<"D. Thermometer "<<endl;
      cin>> answer;
    if(answer=='C' || answer=='c'){
      cout<< "The Answer is correct "<<endl;prob1=prob1-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
     case 7:
     cout<< "Which planet has the most number of Satellites"<<endl;
     cout<<"A. Jupiter "<<endl<<"B. Earth"<<endl<<"C. Mars "<<endl<<"D. Saturn "<<endl;
      cin>> answer;
    if(answer=='A' || answer=='a'){
      cout<< "The Answer is correct "<<endl;
      prob1=prob1-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
     case 8:
     cout<< "Universal Donor group is "<<endl;
     cout<<"A. AB+"<<endl<<"B. B-"<<endl<<"C. A+"<<endl<<"D. 0-"<<endl;
      cin>> answer;
    if(answer=='D' || answer=='d'){
      cout<< "The Answer is correct "<<endl;
      prob1=prob1-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
     case 9:
     cout<< "The total bones in an adult human are "<<endl;
     cout<<"A. 206"<<endl<<"B. 129"<<endl<<"C. 252"<<endl<<"D. 365"<<endl;
      cin>> answer;
    if(answer=='A' || answer=='a'){
      cout<< "The Answer is correct "<<endl;
      prob1=prob1-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
     case 10:
     cout<< "The number of oscillations per second is called"<<endl;
     cout<<"A. Time period "<<endl<<"B. Wavelength"<<endl<<"C. Frequency "<<endl<<"D. Wavenumber "<<endl;
      cin>> answer;
    if(answer=='C' || answer=='c'){
      cout<< "The Answer is correct "<<endl;
      prob1=prob1-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
    case 11:
    cout<< "The fourth state of matter is"<<endl;
     cout<<"A. Solid "<<endl<<"B. Liquid "<<endl<<"C. Gas "<<endl<<"D. Plasma "<<endl;
      cin>> answer;
    if(answer=='D' || answer=='d'){
      cout<< "The Answer is correct "<<endl;
      prob1=prob1-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
     case 12:
     cout<< "The speed of light is"<<endl;
     cout<<"A. 1000000"<<endl<<"B. 300000000"<<endl<<"C. 50000000"<<endl<<"D. 25000000"<<endl;
      cin>> answer;
    if(answer=='B' || answer=='b'){
      cout<< "The Answer is correct "<<endl;
      prob1=prob1-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
     case 13:
     cout<< "The most abundant element in the universe is "<<endl;
     cout<<"A. Carbom"<<endl<<"B. Oxygen"<<endl<<"C. Silicon"<<endl<<"D. Hydrogen"<<endl;
      cin>> answer;
    if(answer=='D' || answer=='d'){
      cout<< "The Answer is correct "<<endl;
      prob1=prob1-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
     case 14:
     cout<< "Device which converts chemical  energy into electrical energy "<<endl;
     cout<<"A. Capacitor "<<endl<<"B. Battery "<<endl<<"C. Generator"<<endl<<"D. Solarcell"<<endl;
      cin>> answer;
    if(answer=='B' || answer=='b'){
      cout<< "The Answer is correct "<<endl;
      prob1=prob1-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
     case 15:
     cout<< "Radioactivity was discovered by "<<endl;
     cout<<"A. Bacquerel"<<endl<<"B. Thomson"<<endl<<"C. Rutherford "<<endl<<"D. Kelvin "<<endl;
      cin>> answer;
    if(answer=='A' || answer=='a'){
      cout<< "The Answer is correct "<<endl;
      prob1=prob1-10;
       if(i==1){
        prize1();

      }
      if(i==2){
        prize2();
        
      }
      if(i==3){
        prize3();
        
      }
      if(i==4){
        prize4();
        
      }
    }
    else{
      cout<<"Wrong Answer"<< endl;
       n5++;
      if(n5>12){
        cout<<"Sorry you probability of answering a question is below 20%"<<endl;
        exit(0);
      }
    }
    break;
  }
  
}
void subjectacess(int randomS,int i){
  switch(randomS){
    case 1:
    science(i);
    break;
    case 2:
    history(i);
    break;
    case 3:
    sports(i);
    break;
    case 4:
    popculture(i);
    break;
  }


}
 void thesubject(int i){
  int randomS=(rand()%4+1);
  subjectacess(randomS,i);

}

void therounddisplayer(int i){
  int n=3,cash=0;
  if(i==4){
    n=5;
  }
  cout<< "Round ";
  sleep(1);
  cout<< i<< endl;
  cout<< "There will be " << n << " "<< " Questions"<<endl;
  if(i==1){
    cash=100;
  }
  if(i==2){
    cash=1000;
  }
  if(i==3){
    cash=10000;
  }
  if(i==4){
    cash=15000;
  }
  cout<<"Answering a Question correct will give you "<< cash<< "$" <<endl;
  cout<< "Good Luck"<< endl;
}
 void thegameintro(){
    cout <<"      W";
    sleep(1);
    cout<<"      E";
    sleep(1);
    cout<<"      L";
    sleep(1);
    cout<<"      C";
    sleep(1);
    cout<<"      O";
    sleep(1);
    cout<<"      M";
    sleep(1);
    cout<<"      E";
    cout<<endl;
     
 }
int main()
{
  int i=1;
  srand(time(0));
  thegameintro();
  therounddisplayer(i);
  thesubject(i);
  sleep(1);
  thesubject(i);
  sleep(1);
  thesubject(i);
  sleep(1);
  i++;
  system("CLS");
  therounddisplayer(i);
  thesubject(i);
   sleep(1);
  thesubject(i);
   sleep(1);
  thesubject(i);
   sleep(1);
  i++;
  system("CLS");
  therounddisplayer(i);
  thesubject(i);
  sleep(1);
  thesubject(i);
  sleep(1);
  thesubject(i);
  sleep(1);
  i++;
  system("CLS");
  therounddisplayer(i);
  thesubject(i);
  sleep(1);
  thesubject(i);
  sleep(1);
  thesubject(i);
  sleep(1);
  thesubject(i);
  sleep(1);
  thesubject(i);
cout<<"Congrats you won a total of "<<thebounty<<endl;
	return 0;
}