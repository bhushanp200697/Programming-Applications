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

        int ChkEven()
        {   
            if(iNo % 2 == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
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

    iRet = nobj.ChkEven();
    if(iRet == 1)
    {
        cout<<"The enterd number is even"<<endl;
    }
    else
    {
        cout<<"The enterd number is odd"<<endl;
    }
    
    return 0;
}
