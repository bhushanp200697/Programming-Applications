//Accept number from user and display its reverse number

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

    int Reverse()
    {
        int iDigit = 0;
        int iRev = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            iRev = iRev * 10 + iDigit;
            iNo = iNo /10;
        }
        return iRev;
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

    iRet = nobj.Reverse();
    cout<<"Reverse number is : "<<iRet<<endl;
    
    return 0;
}