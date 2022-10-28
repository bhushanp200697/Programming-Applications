//Accept number from user and display its reverse number

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

        int Reverse()
        {
            int iDigit = 0;
            int iRev = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo > 0)
            {
                iDigit = iNo % 10;
                iRev = iRev * 10 + iDigit;
                iNo = iNo /10;
            }
            return iRev;
        }
};

int main()
{
    int iRet = 0;

    Number nobj;

    nobj.Accept();
    nobj.Display();

    iRet = nobj.Reverse();
    cout<<"Reverse number is : "<<iRet<<endl;
    
    return 0;
}