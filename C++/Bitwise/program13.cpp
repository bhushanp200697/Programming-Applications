//Accept number from user and check whether First nibble is ON or OFF

#include<iostream>
using namespace std;

bool CheckNibble(int iNo)
{
    int iMask = 0X0000000f;
    int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    cout<<"Enter the number"<<endl;
    cin>>iValue;

    bRet = CheckNibble(iValue);
    if(bRet == true)
    {
        cout<<"Nibble is ON"<<endl;
    }
    else
    {
        cout<<"Nibble is OFF"<<endl;
    }

    return 0;
}