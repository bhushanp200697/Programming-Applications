//Accept the number from user and check whether the number is armstrong or not

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

        bool CheckArmstrong()
        {
            int iTemp = 0, iCnt = 0,iMult = 1;
            int iDigCnt = 0, iDigit = 0, iSum = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            iTemp = iNo;

            while(iNo != 0)
            {
                iDigCnt++;
                iNo = iNo / 10;
            }

            iNo = iTemp;

            while(iNo != 0)
            {
                iMult = 1;
                iDigit = iNo % 10;

                for(iCnt = 1; iCnt <= iDigCnt; iCnt++)
                {
                    iMult = iMult * iDigit;
                }

                iSum = iSum + iMult;
                iNo = iNo / 10;
            }

            if(iSum == iTemp)
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
    int iValue = 0;
    bool bRet;

    cout << "Enter the number" << endl;
    cin >> iValue;

    Number nobj(iValue);

    nobj.Display();

    bRet = nobj.CheckArmstrong();
    if(bRet == true)
    {
        cout<<"The number is armstrong number"<<endl;
    }
    else
    {
        cout<<"The number is not armstrong number"<<endl;
    }
    
    return 0;
}