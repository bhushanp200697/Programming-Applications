//Accept two numbers from user and display the power

// Input : 2    4
// Output : 16  (2 * 2 * 2 * 2)

#include <iostream>
using namespace std;

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

        int Power()
        {
            int iCnt = 0;
            int iMult = 1;

            for(iCnt = 1; iCnt <= iNo2; iCnt++)
            {
                iMult = iMult * iNo1;
            }
            return iMult;
        }
};

int main()
{
    int iRet;

    Number nobj;

    nobj.Accept();
    nobj.Display();

    iRet = nobj.Power();
    cout<<"Result is : "<<iRet<<endl;
    
    return 0;
}