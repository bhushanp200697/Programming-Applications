// check whether the number is even or not

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
            cout<<"The numbers is: "<< this->iNo <<endl;
        }

        bool ChkEven()
        {   
            if(iNo % 2 == 0)
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

    bRet = nobj.ChkEven();
    if(bRet == true)
    {
        cout<<"The enterd number is even"<<endl;
    }
    else
    {
        cout<<"The enterd number is odd"<<endl;
    }
    

    return 0;
}
