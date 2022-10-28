// Accept number from user and check whether the number is perfect or not

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

    bool CheckPerfect()
    {
        int iAns = 0;
        iAns = SumFactors();

        if(iAns == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Number nobj;

    bool bRet;

    nobj.Accept();
    nobj.Display();

    bRet = nobj.CheckPerfect();
    if(bRet == true)
    {
        cout<<"The number is perfect number"<<endl;
    }
    else
    {
        cout<<"The number is not a perfect number"<<endl;
    }

    return 0;
}
