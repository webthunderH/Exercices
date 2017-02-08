#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <fstream>
#include "shakerHeader.h"
#include "findAWord.h"

using namespace std;

// Game ùystery word on console.
int main()
{
    bool wantToPlayAgain=true;
    do
    {
        string answerOfPlayer, word; // Will be used to choose if we use the dictionnary or let two players play.
        int numberOfPlayer(0);
        cout<<"Choose solo or multiplayer please type (solo or multiplayer)"<<endl;

        while(numberOfPlayer==0)// Test if the player choose the right type of game
        {
            cin>>answerOfPlayer;
            if (answerOfPlayer=="solo")
            {
                numberOfPlayer=1;
            }
            else if (answerOfPlayer=="multiplayer")
            {
                numberOfPlayer=2;
            }
            cout<<"Please type solo or multiplayer"<<endl;
        }

        std::system("clear");// clear the console to have better idea that we play
        if(numberOfPlayer==1)
        {
            cout<<"You choose solo play so a word will be choose for you"<<endl;
            word=findAWord();

        }
        else
        {
            cout<<"You choose multiplayer play so choose a word"<< endl;
            cout<<"Player one add a word"<< endl;
            cin>> word;
            std::system("clear");
        }
        int compteur(0);// variable to test how many time you faile
        //1 Variable string to get word

        bool wordFound(false);
        bool wordNotFound(false);// variable who say if you win or not

        cout<<"Word is shaked :"<<shaker(word) <<endl;
        //2 shake letter

        //3 ask until the word is found
        while(!wordFound || !wordNotFound) // don't understand why double pipe don't react normally.
        {
            string playerTwoWord;
            cout<<"enter a word"<< endl;

            cin>>playerTwoWord;
            if(playerTwoWord==word)
            {
             wordFound=true;
             cout<<"Nice shot you win"<<endl;
            }
            compteur++;
            if (compteur==4)
            {
                cout<<"Sorry but you lose the word was :"<< word<< endl;
                wordNotFound=true;
                break;
            }
        }
        char playAgain;
        cout<<"do you want to play again(y/n) ?"<<endl;
        cin>>playAgain;
        while(playAgain!='y'|| playAgain!='n')
        {
            if(playAgain=='n')
            {
                wantToPlayAgain=false;
            }
        }
    }while(wantToPlayAgain);

 return 0;
}
