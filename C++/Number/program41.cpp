// Accept number from user and display its factors addition

// Input :     10
// Output :    8

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

    int SumFactors()
    {
        int iCnt = 0;
        int iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum +iCnt;
            }
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

    iRet = nobj.SumFactors();
    cout<<"Addition of factors is : "<<iRet<<endl;

    return 0;
}
