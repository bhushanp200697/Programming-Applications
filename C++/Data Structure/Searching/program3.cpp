// BinarySearch

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int value)
        {
            iSize = value;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            delete [] Arr;
        }

        void Accept()
        {
            cout<<"Enter the values : "<<endl;
            for(int i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            cout<<"Values are: "<<endl;
            for(int i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<endl;
            }
        }
};

class Searching : public ArrayX
{
    public:
        Searching(int value): ArrayX(value)
        {}

        int BinarySearch(int iNo)
        {
            int iStart = 0;
            int iEnd = iSize-1;
            int iMiddle = 0;

            while(iStart <= iEnd)
            {
                iMiddle = (iStart + iEnd)/2;

                if(Arr[iMiddle] == iNo)
                {
                    break;
                }
                if(iNo > Arr[iMiddle])
                {
                    iStart = iMiddle+1;
                }
                else if(iNo < Arr[iMiddle])
                {
                    iEnd = iMiddle - 1;
                }
            }
            if(Arr[iMiddle] == iNo)
            {
                return iMiddle;
            }
            else
            {
                return -1;
            }
        }
};

int main()
{
    int iLength = 0;
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the size of array"<<endl;
    cin>>iLength;

    Searching obj(iLength);

    obj.Accept();
    obj.Display();

    cout<<"Enter the element that you want to search"<<endl;
    cin>>iValue;

    iRet = obj.BinarySearch(iValue);
    if(iRet == -1)
    {
        cout<<"There is no such element"<<endl;
    }
    else
    {
        cout<<"Element is there in the array at index : "<<iRet<<endl;
    }

    return 0;
}