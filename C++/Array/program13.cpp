//Accept the N numbers from user and display the addition of that elements

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int iLength)
        {
            iSize = iLength;
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

        int Sumation()
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
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

    iRet = obj1.Sumation();
    cout<<"Addition is: "<<iRet<<endl;

    return 0;
}