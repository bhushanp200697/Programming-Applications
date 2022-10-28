// Program to display 1 to N numbers on screen

#include<iostream>
using namespace std;

class Number
{
    public:
        void Display(int iNo)
        {
            int iCnt = 0;

            if(iNo < 0)      
            {
                iNo = -iNo;
            }

            iCnt = 1;

            while(iCnt <= iNo)
            {
                cout<<iCnt<<endl;
                iCnt++;
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
