//Accept number from user and display its even digits

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

    void DisplayEven()
    {
        int iDigit = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo > 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) ==  0)
            {
                cout<<iDigit<<endl;
            }
            iNo = iNo /10;
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

    nobj.DisplayEven();
    
    return 0;
}