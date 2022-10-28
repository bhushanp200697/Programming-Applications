//Accept N elements from user and count the even elements

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
            cout<<"Enter the elements : "<<endl;
            for(int i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        int CountEven()
        {
            int iCnt = 0;

            cout<<"elements are: "<<endl;
            for(int i = 0; i < iSize; i++)
            {
                if((Arr[i] % 2) == 0)
                {
                    iCnt++;
                }
            }
            return iCnt;
        }
};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the size of array"<<endl;
    cin>>iLength;

    ArrayX obj1(iLength);

    obj1.Accept();

    iRet = obj1.CountEven();
    cout<<"Number of even elements are: "<<iRet;

    return 0;
}