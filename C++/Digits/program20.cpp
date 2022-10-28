//Accept two numbers from user and display the power

// Input : 2    4
// Output : 16  (2 * 2 * 2 * 2)

#include <iostream>
using namespace std;

class Number
{
public:
    int iNo1;
    int iNo2;

    Number(int x, int y)
    {
        iNo1 = x;
        iNo2 = y;
    }

    void Display()
    {
        cout << "The base is: " << this->iNo1 << endl;
        cout << "The power is: " << this->iNo2 << endl;
    }

    int Power()
    {
        int iCnt = 0;
        int iMult = 1;

        for(iCnt = 1; iCnt <= iNo2; iCnt++)
        {
            iMult = iMult * iNo1;
        }
        return iMult;
    }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout << "Enter the base" << endl;
    cin >> iValue1;

    cout << "Enter the power" << endl;
    cin >> iValue2;

    Number nobj(iValue1,iValue2);

    nobj.Display();

    iRet = nobj.Power();
    cout<<"Result is : "<<iRet<<endl;
    
    return 0;
}