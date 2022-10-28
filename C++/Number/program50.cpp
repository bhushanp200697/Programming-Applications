// Accept number from user and check whether the number is perfect or not

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

    bool CheckPerfect()
    {
        int iCnt = 0;
        int iSum = 0;

        if (iNo < 0)
        {
            iNo = -iNo;
        }

        for (iCnt = 1; ((iCnt <= (iNo /2)) && (iSum <= iNo)); iCnt++)
        {
            if ((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if (iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
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

    bRet = nobj.CheckPerfect();
    if (bRet == true)
    {
        cout << "The number is perfect number" << endl;
    }
    else
    {
        cout << "The number is not a perfect number" << endl;
    }

    return 0;
}
