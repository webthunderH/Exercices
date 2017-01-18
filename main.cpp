#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
#include "shakerHeader.h"

using namespace std;

// Game ùystery word on console.
int main()
{

    string answerOfPlayer, word; // Will be used to choose if we use the dictionnary or let two players play.
    cout<<"Choose solo or multiplayer please type (solo or multiplayer)"<<endl;

    while(answerOfPlayer!="solo" || answerOfPlayer !="multiplayer")// Test if the player choose the right type of game
    {
        cin>>answerOfPlayer;
        cout<<"Please type solo or multiplayer"<<endl;
    }

    std::system("clear");// clear the console to have better idea that we play
    if(answerOfPlayer=="solo")
    {
        cout<<"You choose solo play so a word will be choose for you"<<endl;

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

    bool wordFound(false), wordNotFound(false);// variable who say if you win or not

    cout<<"Word is shaked :"<<shaker(word) <<endl;
    //2 shake letter

    //3 ask until the word is found
    while(wordFound== false || wordNotFound==false)
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
        if (compteur==5)
        {
            cout<<"Sorry but you lose the word was :"<< word<< endl;
            wordNotFound=true;
        }
    }
 return 0;
}
