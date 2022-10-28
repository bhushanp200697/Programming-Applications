//Accept number from user and display addition of its digits

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

    int SumDigits()
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
            iSum = iSum + iDigit;
            iNo = iNo /10;
        }
        return iSum;
    }
};

int main()
{
    Number nobj;

    int iRet = 0;

    nobj.Accept();
    nobj.Display();

    iRet = nobj.SumDigits();
    cout<<"The addition of digits is: "<<iRet<<endl;

    return 0;
}