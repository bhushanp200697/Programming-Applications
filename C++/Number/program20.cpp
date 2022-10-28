/////////////////////////////////////////////////////////////////////
// Write a program to perform addition of 2 numbers
//
//  Input  :       10      11
//  Output :       21
//
/////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Addition
//  Description  :  Used to perform addition of 2 numbers
//  Input  :        Integer, Integer
//  Output :        Integer
//  Date   :        12/04/2022
//  Author :        Bhushan Sopan Pawar
//
/////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

class Number
{
public:
    int iNo1;
    int iNo2;

    Number(int x,int y)
    {
        iNo1 = x;
        iNo2 = y;
    }

    void Display() 
    {
        cout << "The numbers are: " << endl;
        cout << this->iNo1 << endl;
        cout << this->iNo2 << endl;
    }

    int Addition()
    {
        int iAns = 0;

        iAns = iNo1 + iNo2;
        return iAns;
    }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout << "Enter first number" << endl;
    cin >> iValue1;

    cout << "Enter second number" << endl;
    cin >> iValue2;

    Number nobj(iValue1,iValue2);

    nobj.Display();

    iRet = nobj.Addition();
    cout << "Addition is: " << iRet << endl;

    return 0;
}
