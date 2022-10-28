//Accept N numbers from user and display the addition of that numbers

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
            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        int Addition()
        {
            int iSum = 0;

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
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

    iRet = obj1.Addition();
    cout<<"Addition of elements is: "<<iRet;

    return 0;
}