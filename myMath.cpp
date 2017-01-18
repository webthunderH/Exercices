#include "myMath.h"
#include <string>
#include <random>
using namespace std;
string shaker(string word)
{
    string wordShaked;
    while(word.size()!=0)
    {
        int random = rand() % (word.size());
        wordShaked +=word[random];
        word.erase(random,1);
    }
    return wordShaked;
}
