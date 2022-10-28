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
    Number nobj;

    int iRet = 0;

    nobj.Accept();
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
