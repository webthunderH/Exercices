#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
#include "myMath.h"
using namespace std;


// Game ùystery word on console.
int main()
{
    int compteur(0);
    //1 Variable string to get word
    string word;
    bool wordFound(false);
    cout<<"Player one add a word"<< endl;
    cin>> word;
    std::system("clear");

    cout<<"Word is shaked :"<<shaker(word) <<endl;

    //2 shake letter

    //3 ask until the word is found
    while(wordFound== false)
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
            wordFound=true;
        }
    }
 return 0;
}
