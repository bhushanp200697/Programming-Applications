//Accept number from user and count its digits

#include <iostream>
using namespace std;

class Number
{
public:
    int iNo;

    Number(int x)
    {
        iNo = x;
    }

    void Display()
    {
        cout << "The number is: " << this->iNo << endl;
    }

    int CountDigits()
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo > 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }
        return iCnt;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter the number" << endl;
    cin >> iValue;

    Number nobj(iValue);

    nobj.Display();

    iRet = nobj.CountDigits();
    cout<<"Number of digits are: "<<iRet<<endl;

    return 0;
}