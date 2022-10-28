//Accept number from user and display its digits

// Input : 7856
// Output :
// 6
// 5
// 8
// 7

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

    void DisplayDigits()
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            cout<<iDigit<<endl;
            iNo = iNo / 10;
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

    nobj.DisplayDigits();

    return 0;
}