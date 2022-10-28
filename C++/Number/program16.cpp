// Write a program to perform addition of 2 numbers

#include<iostream>
using namespace std;

int Addition(int iValue1, int iValue2)     
{
    int iAns = 0;
    iAns = iValue1 + iValue2;
    return iAns;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;

    cout<<"Enter first number"<<endl;
    cin>>iNo1;

    cout<<"Enter second number"<<endl;
    cin>>iNo2;
    
    iRet = Addition(iNo1, iNo2);

    cout<<"Addition is: "<<iRet<<endl;

    return 0;
}
