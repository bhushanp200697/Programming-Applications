// Input :  4
// Output : 1   *   3   * 

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
                if(iCnt % 2 == 0)
                {
                    cout<<"*\t";
                }
                else
                {
                    cout<<iCnt<<"\t";
                }
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
