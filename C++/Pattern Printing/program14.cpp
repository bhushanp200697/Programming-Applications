// Input :  Row 4   Columns     4
/*
    $   2   3   4
    1   $   3   4
    1   2   $   4
    1   2   3   $
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

            if(iRow != iCol)
            {
                cout<<"Invalid input"<<endl;
                return;
            }

            for(i = 1; i <= iRow; i++)
            {
                for(j = 1; j <= iCol; j++)
                {
                    if(i == j)
                    {
                        cout<<"$\t";
                    }
                    else
                    {
                        cout<<j<<"\t";
                    }
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
