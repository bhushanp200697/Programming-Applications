// Accept number from user and check whether number is prime or not

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

    bool CheckPrime()
    {
        int iCnt = 0;

        for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if (iNo % iCnt == 0)
            {
                 return false;
            }
        }
        return true;
    }
};

int main()
{
    int iValue = 0;
    bool bRet;

    cout << "Enter the number" << endl;
    cin >> iValue;

    Number nobj(iValue);

    nobj.Display();

    bRet = nobj.CheckPrime();
    if (bRet == true)
    {
        cout << "The number is prime number" << endl;
    }
    else
    {
        cout << "The number is not a prime number" << endl;
    }

    return 0;
}