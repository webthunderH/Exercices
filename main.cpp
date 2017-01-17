#include <iostream>
#include <string>
#include <math.h>
#include "myMath.h"
using namespace std;



int main()
{
    double firstNumber(0),secondNumber(0), thirdNumber(0),addResult(0), multipleResult(0), divideResult(0), quotienResult(0);
    cout<< "Add first number" << endl;
    cin>> firstNumber;
    cout<< "Add the second" <<endl;
    cin>> secondNumber;
    cout<< "Add the third" <<endl;
    cin>> thirdNumber;
    addResult=Addition(firstNumber,secondNumber);
    multipleResult = firstNumber*secondNumber +thirdNumber;
    divideResult = (firstNumber/secondNumber)/thirdNumber;
    quotienResult = fmod(firstNumber,secondNumber);
    cout<< "The result of the addition is :"<< addResult<< endl;
    cout<< "The result of the Multiplication is :"<< multipleResult<< endl;
    cout<< "The result of the division is :"<< divideResult<< endl;
    cout<< "TThe quotion is :"<< quotienResult<< endl;
    return 0;
}
