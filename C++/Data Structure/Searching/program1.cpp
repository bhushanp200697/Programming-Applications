// Linear Search

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

        int LinearSearch(int iNo)
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iNo)
                {
                    break;
                }
            }
            if(iCnt == iSize)
            {
                return -1;
            }
            else
            {
                return iCnt;
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

    iRet = obj.LinearSearch(iValue);
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