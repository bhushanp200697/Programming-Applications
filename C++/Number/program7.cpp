// Program to display N times Hello on screen

#include<iostream>
using namespace std;

class Number
{
    public:
        void Display(int iNo)
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt <= iNo; ++iCnt)
            {
                cout<<"Hello"<<endl;
            }
            
        }
};
    

int main()
{
    Number nobj;

    int iValue = 0;

    cout<<"Enter the number"<<endl;
    cin>>iValue;

    nobj.Display(iValue);

    return 0;
}
