//Accept the number from user and toggle the specific bit 

#include<iostream>
using namespace std;

int Toggle(int iNo, int iPos)
{
    if((iPos <=0) || (iPos > 32))
    {
        cout<<"Invalid position"<<endl;
        return 0;
    }

    int iMask = 0X00000001;
    int iResult = 0;

    iMask = iMask << (iPos-1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    int iValue = 0;
    int Pos = 0;
    int iRet = 0;

    cout<<"Enter the number"<<endl;
    cin>>iValue;

    cout<<"Enter the position"<<endl;
    cin>>Pos;

    iRet = Toggle(iValue,Pos);
    cout<<"Updated number is: "<<iRet<<endl;

    return 0;
}