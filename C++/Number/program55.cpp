//Accept number from user and check whether number is prime or not

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

    bool CheckPrime()
    {
        int iCnt = 0;
        bool bFlag = true;

        for (iCnt = 2; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                bFlag = false;
                break;
            }
        }
        return bFlag;
    }

};

int main()
{
    Number nobj;

    bool bRet;

    nobj.Accept();
    nobj.Display();

    bRet = nobj.CheckPrime();
    if (bRet == true)
    {
        cout << "The number is prime number" << endl;
    }
    else
    {
        cout << "The number is not a prime number" << endl;
    }

    return 0;
}
