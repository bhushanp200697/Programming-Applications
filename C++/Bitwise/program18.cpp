//Display how many common bits are ON

#include<iostream>
using namespace std;

int CountBits(int iNo1,int iNo2)
{
    int iNo = 0;
    int iCnt = 0;
    int iMask = 0X00000001;
    int iResult = 0;

    iNo = iNo1 & iNo2;

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
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter first number"<<endl;
    cin>>iValue1;

    cout<<"Enter second number"<<endl;
    cin>>iValue2;

    iRet = CountBits(iValue1,iValue2);
    cout<<"Number of ON bits are: "<<iRet<<endl;

    return 0;
}