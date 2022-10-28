// Input :   5
// Output :  *   *   *   *   *

#include<iostream>
using namespace std;

class PatternPrinting
{
    public:
        int iNo;

        PatternPrinting(int x)
        {
            iNo = x;
        }

        void Display()
        {
            int iCnt = 0;

            for(iCnt = 1;iCnt <= iNo; iCnt++)
            {
                cout<<"*\t";
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter the number"<<endl;
    cin>>iValue;

    PatternPrinting obj(iValue);

    obj.Display();

    return 0;
}
