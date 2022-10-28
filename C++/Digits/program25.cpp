//Accept the number from user and check whether the number is armstrong or not

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

        int Power(int iNo1, int iNo2)
        {
            int iCnt = 0;
            int iMult = 1;

            for(iCnt = 1; iCnt <= iNo2; iCnt++)
            {
                iMult = iMult * iNo1;
            }
            return iMult;
        }

        bool CheckArmstrong()
        {
            int iDigit = 0, iDigCnt = 0;
            int iTemp = 0, iSum = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            iTemp = iNo;

            while(iNo > 0)
            {
                iDigCnt++;
                iNo = iNo / 10;
            }

            iNo = iTemp;

            while(iNo > 0)
            {
                iDigit = iNo % 10;
                iSum = iSum + Power(iDigit, iDigCnt);
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
    bool bRet;

    Number nobj;

    nobj.Accept();
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