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

    void Accept() // Setter
    {
        cout << "Enter the number" << endl;
        cin >> iNo;
    }

    void Display() // Getter
    {
        cout << "The number is: " << this->iNo << endl;
    }

    void DisplayDigits()
    {
        int iDigit = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            cout<<iDigit<<endl;
            iNo = iNo / 10;
        }
    }
};

int main()
{
    Number nobj;

    nobj.Accept();
    nobj.Display();

    nobj.DisplayDigits();

    return 0;
}