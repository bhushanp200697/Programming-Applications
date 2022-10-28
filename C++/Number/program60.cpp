//Accept number from user and count the number of factors 

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

    int CountFactor()
    {
        int iCnt = 0;
        int iFactCnt = 0;

        for (iCnt = 2; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iFactCnt++;
            }
        }
        return iFactCnt;
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

    iRet = nobj.CountFactor();
    cout<<"Number of factors are: "<<iRet<<endl;

    return 0;
}
