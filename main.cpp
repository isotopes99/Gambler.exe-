#include<iostream>
#include<string>
#include<ctime>
#include<stdlib.h>
void rules();
using namespace std;
int main()
{
    int balance;//balance of the player//

      int betting_ammount;//betting ammount by the player//

 string gamblers_name;//name for the gambler//

    int choice;

    int guess;

    int dice;



  srand(time(0));

  //........starting the game ........//
  cout<< ".......................welcome to gambler.exe......."<<endl;
  cout<<".........what is your name young gambler........"<<endl;
  getline(cin , gamblers_name );
  cout<<".........mr."<<gamblers_name<<" please be seated for your turn until your till then"<<endl;

  cout<<"......please can you enter  the ammount you are currently with --->> : "<<endl;

cin>>balance;
  
  cout<<".......thats a lot of money you got over there....."<<endl;
  cout<<" balance==: "<<balance;
  cout<<"    we should start with the game dont you think"<<endl;
  
  cout<<" how much you wanna bet for this one"<<endl;
 cin>>betting_ammount;
  
 system("cls");
rules();
if(betting_ammount>balance)
{
    cout<<"you are exceeding your limits"<<endl;
}

label :do
{
    /* code */
    cout<<" pls can you enter a number between 1 and 10 for the next"<<endl;
    cin>>guess;
    if(guess>10||guess<=0)
    {
        cout<<" you bozo i said a number b/w 1 and 10"<<endl;
        cout<<" correct number was: "<<dice<<endl;

    }
} while(guess>10||guess<=0);

 dice=rand()%10 + 1;
 if(guess==dice)
 {
    cout<<" congratulations you won the bet you petty rascal"<<endl;
    cout<<" remainging balance=:"<<balance+betting_ammount*10<<endl;
   
 }
else 
{
    cout<<" your broke ass won nothing i think you should think about your life chioces"<<endl;
    cout<<"remainingg balance=: "<<balance-betting_ammount<<endl;
}

cout<<" if you wanna bet more pls press 1 else press 0 to exit"<<endl;
cin>>choice;
if(choice==0)
{
    cout<<"thank you for playing this and make sure to thank the creator of this game"<<endl;
}
else if(choice==1)
{
    cout<<" you got some balls you sun of a gun any way lets start playing"<<endl;
    goto label;
}
return 0;
}



void rules()
{
 cout<<" 1).if win any bet the ammout you bet will be given to will 10x of your initial ammount"<<endl;
 cout<<" 2).if you lose the ammount you will bet will be taken from your balance"<<endl;
 cout<<" 3).plz dont be serious with the upcomeing language used the creator of this game is not so profesional and no body likes him"<<endl;
}