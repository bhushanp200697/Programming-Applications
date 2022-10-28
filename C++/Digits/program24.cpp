//Accept two numbers from user and display the power

// Input : 2    4
// Output : 16  (2 * 2 * 2 * 2)

#include <iostream>
using namespace std;

typedef unsigned long int ULONG;

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

    ULONG Power()
    {
        int iCnt = 0;
        ULONG lMult = 1;

        for(iCnt = 1; iCnt <= iNo2; iCnt++)
        {
            lMult = lMult * iNo1;
        }
        return lMult;
    }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    ULONG lRet = 0;

    cout << "Enter the base" << endl;
    cin >> iValue1;

    cout << "Enter the power" << endl;
    cin >> iValue2;

    Number nobj(iValue1,iValue2);

    nobj.Display();

    lRet = nobj.Power();
    cout<<"Result is : "<<lRet<<endl;
    
    return 0;
}