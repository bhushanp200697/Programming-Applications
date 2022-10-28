//Accept number from user and count its digits

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

    int CountDigits()
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo > 0)
        {
            iCnt++;
            iNo = iNo / 10;
        }
        return iCnt;
    }
};

int main()
{
    Number nobj;

    int iRet = 0;

    nobj.Accept();
    nobj.Display();

    iRet = nobj.CountDigits();
    cout<<"Number of digits are: "<<iRet<<endl;

    return 0;
}