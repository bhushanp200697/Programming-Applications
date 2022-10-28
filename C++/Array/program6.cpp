//Accept N numbers from user and display the maximum number

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

        int Maximum()
        {
            int iMax = Arr[0];

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(iMax < Arr[iCnt])
                {
                    iMax = Arr[iCnt];
                }
            }
            return iMax;
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

    iRet = obj1.Maximum();
    cout<<"Maximum elements is: "<<iRet;

    return 0;
}