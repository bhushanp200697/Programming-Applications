// Accept the number from user and display the addition of that number from 1 to that number.

// Input : 4
// Output : 10  (1+2+3+4)

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
        cout << "The numbers is: " << this->iNo << endl;
    }

    int Addition()
    {
        int iCnt = 0;
        int iSum = 0;

        if (iNo < 0)
        {
            iNo = -iNo;
        }

        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iSum = iSum + iCnt;
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

    iRet = nobj.Addition();
    cout << "Addition is: " << iRet << endl;

    return 0;
}
