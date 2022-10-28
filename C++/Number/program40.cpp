// Accept number from user and display its non factors

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

    void DisplayNonFactors()
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        cout<<"The non factors are: "<<endl;

        for(iCnt = 1; iCnt < iNo; iCnt++)
        {
            if(iNo % iCnt != 0)
            {
                cout<<iCnt<<endl;
            }
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

    nobj.DisplayNonFactors();

    return 0;
}
