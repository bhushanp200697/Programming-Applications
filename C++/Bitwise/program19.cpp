//Display the common bits which are ON

#include<iostream>
using namespace std;

int DisplayBits(int iNo1,int iNo2)
{
    int iNo = 0;
    int iMask = 0X00000001;
    int iResult = 0;

    iNo = iNo1 & iNo2;

    cout<<"ON bits are: "<<endl;

    for(int i = 1; i <= 32;i++)
    {
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            cout<<i<<endl;
        }
        iMask = iMask << 1;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter first number"<<endl;
    cin>>iValue1;

    cout<<"Enter second number"<<endl;
    cin>>iValue2;

    DisplayBits(iValue1,iValue2);

    return 0;
}