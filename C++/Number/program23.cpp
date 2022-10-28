// check whether the number is even or not

#include <iostream>
using namespace std;

class Number
{
    public:
        int iNo;

        void Accept()           // Setter
        {
            cout << "Enter the number" << endl;
            cin >> iNo;
        }

        void Display()          // Getter
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
    Number nobj;

    bool bRet = 0;

    nobj.Accept();
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
