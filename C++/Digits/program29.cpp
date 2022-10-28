// Input : 79959
// Output : 3

/*
7+9+9+5+9       39

3 + 9                   12

1 + 2                   3

3
*/

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

        int Addition()
        {
            int iCnt = 0;
            int iDigit = 0,iSum = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(1)
            {
                while(iNo != 0)
                {
                    iDigit = iNo % 10;
                    iSum = iSum + iDigit;
                    iNo = iNo / 10;
                }
                
                if(iSum > 10)
                {
                    iNo = iSum;
                    iSum = 0;
                }
                else
                {
                    break;
                }
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

    iRet = nobj.Addition();
    cout<<"Addition is: "<<iRet;
    
    return 0;
}