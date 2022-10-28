//check whether the number is divisible by 3 & 5

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
    Number nobj;

    bool bRet = 0;

    nobj.Accept();
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
