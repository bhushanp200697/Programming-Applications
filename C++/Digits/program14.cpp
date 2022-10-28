//Accept number from user and display addition of its even digits

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

    int SumEven()
    {
        int iDigit = 0;
        int iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) ==  0)
            {
                iSum = iSum + iDigit;
            }
            iNo = iNo /10;
        }
        return iSum;
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

    iRet = nobj.SumEven();
    cout<<"Addition of even digits are : "<<iRet<<endl;
    
    return 0;
}