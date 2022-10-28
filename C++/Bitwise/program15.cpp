//Accept number from user and check whether the bits in given range are ON or OFF

#include<iostream>
using namespace std;

bool CheckBit(int iNo,int iFirst,int iLast)
{
    long int iMask1 = 0;
    long int iMask2 = 0;
    long int iMask = 0;
    int iResult = 0;

    iMask1 = 0xffffffff;
    iMask2 = 0xffffffff;

    iMask1 = iMask1 << (iFirst-1);
    iMask2 = iMask2 >> (32 - iLast);

    iMask = iMask1 & iMask2;    

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
    int iStart = 0;
    int iEnd = 0;
    bool bRet;

    cout<<"Enter the number"<<endl;
    cin>>iValue;

    cout<<"Enter starting point"<<endl;
    cin>>iStart;

    cout<<"Enter ending point"<<endl;
    cin>>iEnd;

    bRet = CheckBit(iValue,iStart,iEnd);
    if(bRet == true)
    {
        cout<<"Bits are ON"<<endl;
    }
    else
    {
        cout<<"Bits are OFF"<<endl;
    }

    return 0;
}