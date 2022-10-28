//Accept the number from user and toggle the bit 

#include<iostream>
using namespace std;

int Toggle(int iNo)
{
    int iMask = 0X00000008;
    int iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number"<<endl;
    cin>>iValue;

    iRet = Toggle(iValue);
    cout<<"Updated number is: "<<iRet<<endl;

    return 0;
}