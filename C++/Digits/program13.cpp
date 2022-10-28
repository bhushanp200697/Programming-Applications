//Accept number from user and display addition of its even digits

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

        int SumEven()
        {
            int iDigit = 0;
            int iSum = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo > 0)
            {
                iDigit = iNo % 10;
                if((iDigit % 2) ==  0)
                {
                    iSum = iSum + iDigit;
                }
                iNo = iNo /10;
            }
            return iSum;
        }
};

int main()
{
    int iRet = 0;

    Number nobj;

    nobj.Accept();
    nobj.Display();

    iRet = nobj.SumEven();
    cout<<"Addition of even digits are : "<<iRet<<endl;
    
    return 0;
}