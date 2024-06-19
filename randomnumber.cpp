//Program to create a number guessing game.

//including the necessary files.
#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

class GuessNo {
    public:
    srand(time(NULL));
    int number ;
    number= rand()%1000+1;
    int guess;
    do {
        cout<<"Enter your estimate : ";
        cin<<guess;
        int diff=abs(number-guess);
        if (guess>number){
            if(diff>50){
                cout<<"Guess too high."<<endl;
            }
            else
            cout<<"Guess is close but high."<<endl;
        }    
        else if(number>guess){
            if(diff>50){
                cout<<"Guess to low.";
            }
            else
                cout<<"Guess close but low.";
        }
        else if (guess==number)
        {
            cout<<"YAY ! Correct number guessed";
            return ;
        }        
    } while(guess!=number);    
};



