// Accept number from user and display its factors

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

    void DisplayFactors()
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        cout<<"The factors are: "<<endl;

        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
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

    nobj.DisplayFactors();

    return 0;
}
