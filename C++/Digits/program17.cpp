//Accept number from user and check whether that number is pallindrome or not

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

        bool CheckPallindrome()
        {
            int iDigit = 0;
            int iRev = 0;
            int iTemp = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            iTemp = iNo;

            while(iNo > 0)
            {
                iDigit = iNo % 10;
                iRev = iRev * 10 + iDigit;
                iNo = iNo / 10;
            }

            if(iRev == iTemp)
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

    bRet = nobj.CheckPallindrome();
    if(bRet == true)
    {
        cout<<"The number is pallindrome number"<<endl;
    }
    else
    {
        cout<<"The number is not pallindrome number"<<endl;
    }
    
    return 0;
}