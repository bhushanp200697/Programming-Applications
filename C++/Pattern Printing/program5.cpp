// Input :   4
// Output :  1   2   3   4   4   3   2   1

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
                cout<<iCnt<<"\t";
            }

            for(iCnt = iNo;iCnt >= 1; iCnt--)
            {
                cout<<iCnt<<"\t";
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
