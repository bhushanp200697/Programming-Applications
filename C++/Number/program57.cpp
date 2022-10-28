//Accept number from user and count the number of factors 

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

    int CountFactor()
    {
        int iCnt = 0;
        int iFactCnt = 0;

        for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iFactCnt++;
            }
        }
        return iFactCnt;
    }

};

int main()
{
    Number nobj;

    int iRet;

    nobj.Accept();
    nobj.Display();

    iRet = nobj.CountFactor();
    cout<<"Number of factors are: "<<iRet<<endl;

    return 0;
}
