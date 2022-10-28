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
        int Addition(int iValue1, int iValue2)
        {
            int iAns = 0;
            iAns = iValue1 + iValue2;
            return iAns;
        }
};

int main()
{
    Number nobj;

    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    cout << "Enter first number" << endl;
    cin >> iNo1;

    cout << "Enter second number" << endl;
    cin >> iNo2;

    iRet = nobj.Addition(iNo1,iNo2);

    cout << "Addition is: " << iRet << endl;

    return 0;
}
