// Accept number from user and display that number from 1 to that number in forward and reverse direction

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

    void DisplayF()
    {
        int iCnt = 0;

        cout<<"Forward Display"<<endl;

        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            printf("%d\n", iCnt);
        }
    }

    void DisplayB()
    {
        int iCnt = 0;

        cout<<"Backard Display"<<endl;
        
        for (iCnt = iNo; iCnt >= 1; iCnt--)
        {
            printf("%d\n", iCnt);
        }
    }
};

int main()
{
    int iValue = 0;

    cout << "Enter the number" << endl;
    cin >> iValue;
        
    Number nobj(iValue);

    nobj.Display();

    nobj.DisplayF();
    nobj.DisplayB();

    return 0;
}
