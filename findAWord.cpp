#include <string>
#include <random>
#include <fstream>
#include <ctime>
using namespace std;

string findAWord()
{
    string findWord;
    ifstream readingStream("/Users/henrydedonder/Documents/C++_learning/SecondProject/SecondProject/dico.txt");
    if(readingStream)
    {

      string ligne; //Une variable pour stocker les lignes lues
      readingStream.seekg(0, ios::end);
      int maxRange = readingStream.tellg();
      srand((int)time(0));
      int random = rand()%maxRange;
      readingStream.seekg(random,ios::beg);
      readingStream>>ligne;
      findWord=ligne;
      readingStream.close();
    }
    else
    {
        findWord="Got a problem with reading file";
    }

    return findWord;
}
