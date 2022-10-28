// Input :    4
// Output :  -4   -3  -2  -1  0   1   2   3   4

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

            for(iCnt = -iNo;iCnt <= iNo; iCnt++)
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
