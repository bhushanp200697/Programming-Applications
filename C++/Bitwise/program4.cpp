//Accept the number from user and check whether the bit is ON or OFF

#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iResult = 0;
    int iMask = 1048576;

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
    bool bRet;

    cout<<"Enter the number"<<endl;
    cin>>iValue;

    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        cout<<"Bit is ON"<<endl;
    }
    else
    {
        cout<<"Bit is OFF"<<endl;
    }

    return 0;
}