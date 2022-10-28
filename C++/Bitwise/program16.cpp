//Display which bits are ON

#include<iostream>
using namespace std;

void DisplayBits(int iNo)
{
    int iMask = 0X00000001;
    int iResult = 0;
    
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
    int iValue = 0;

    cout<<"Enter the number"<<endl;
    cin>>iValue;

    DisplayBits(iValue);

    return 0;
}