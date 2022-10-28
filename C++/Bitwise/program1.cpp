//Accept the number from user and display its binary number

#include<iostream>
using namespace std;

void DisplayBinary(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        cout<<iDigit;
        iNo = iNo / 2;
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number"<<endl;
    cin>>iValue;

    DisplayBinary(iValue);

    return 0;
}