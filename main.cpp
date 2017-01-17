#include <iostream>
#include <string>
#include <math.h>
#include "myMath.h"
using namespace std;


// Game ùystery word on console.
int main()
{
    //1 Variable string to get word
    string word;
    bool wordFound(false);
    cout<<"Player one add a word"<< endl;
    cin>> word;
    string shakedWord;

    for(int i(0); i<word.size(); i++)
    {
        char shaker = word[i];

        shakedWord+=shaker;

    }

    cout<<"Word is shaked :"<<shakedWord <<endl;

    //2 shake letter

    //3 ask until the word is found

}
