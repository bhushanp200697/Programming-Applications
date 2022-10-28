//Accept two numbers from user and display the power

// Input : 2    4
// Output : 16  (2 * 2 * 2 * 2)

#include <iostream>
using namespace std;

typedef unsigned long int ULONG;

class Number
{
    public:
        int iNo1;
        int iNo2;

        void Accept() // Setter
        {
            cout << "Enter the base" << endl;
            cin >> iNo1;

            cout << "Enter the power" << endl;
            cin >> iNo2;
        }

        void Display() // Getter
        {
            cout << "The base is: " << this->iNo1 << endl;
            cout << "The power is: " << this->iNo2 << endl;
        }

        ULONG Power()
        {
            int iCnt = 0;
            ULONG lMult = 1;

            for(iCnt = 1; iCnt <= iNo2; iCnt++)
            {
                lMult = lMult * iNo1;
            }
            return lMult;
        }
};

int main()
{
    ULONG lRet;

    Number nobj;

    nobj.Accept();
    nobj.Display();

    lRet = nobj.Power();
    cout<<"Result is : "<<lRet<<endl;
    
    return 0;
}