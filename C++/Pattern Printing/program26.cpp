/*

A   A   A   A
B   B   B   B
C   C   C   C
D   D   D   D

*/

#include<iostream>
using namespace std;

class PatternPrinting
{
    public:
        int iRow;
        int iCol;

        PatternPrinting(int iNo1,int iNo2)
        {
            iRow = iNo1;
            iCol = iNo2;
        }

        void Display()
        {
            int i = 0;
            int j = 0;
            char ch = '\0';

            if(iRow != iCol)
            {
                cout<<"Invalid input"<<endl;
                return;
            }

            for(i = 1,ch ='A'; i <= iRow; i++,ch++)
            {
                for(j = 1; j <= iCol; j++)
                {
                    cout<<ch<<"\t";                  
                }
                cout<<endl;
            }

        }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout<<"Enter the number of rows"<<endl;
    cin>>iValue1;

    cout<<"Enter the number of columns"<<endl;
    cin>>iValue2;

    PatternPrinting obj(iValue1,iValue2);

    obj.Display();

    return 0;
}
