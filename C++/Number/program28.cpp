//check whether the number is divisible by 3 & 5

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

        bool Check()
        {   
            if(((iNo % 3) == 0) && ((iNo % 5) == 0))
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

    bRet = nobj.Check();
    if(bRet == true)
    {
        cout<<"The enterd number is divisible by 3 & 5"<<endl;
    }
    else
    {
        cout<<"The enterd number is not divisible by 3 & 5"<<endl;
    }
    

    return 0;
}
