//Display how many bits are ON

#include<iostream>
using namespace std;

int CountBits(int iNo)
{
    int iCnt = 0;
    int iMask = 0X00000001;
    int iResult = 0;
    
    printf("ON bits are:\n");

    for(int i = 1; i <= 32;i++)
    {
        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            iCnt++;
        }
        iMask = iMask << 1;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number"<<endl;
    cin>>iValue;

    iRet = CountBits(iValue);
    cout<<"Number of ON bits are: "<<iRet<<endl;

    return 0;
}