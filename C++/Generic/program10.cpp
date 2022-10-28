//Accept N numbers from user and display the maximum number

#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int value)
        {
            iSize = value;
            Arr = new T[iSize];
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

        T Maximum()
        {
            T Max = Arr[0];

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Max < Arr[iCnt])
                {
                    Max = Arr[iCnt];
                }
            }
            return Max;
        }
};

int main()
{
    int iLength = 0;
    int iRet = 0;
    cout<<"Enter the size of array"<<endl;
    cin>>iLength;
    ArrayX <int>obj1(iLength);
    obj1.Accept();
    iRet = obj1.Maximum();
    cout<<"Maximum elements is: "<<iRet<<endl;

    int fLength = 0;
    float fRet = 0;
    cout<<"Enter the size of array"<<endl;
    cin>>fLength;
    ArrayX <float>obj2(fLength);
    obj2.Accept();
    fRet = obj2.Maximum();
    cout<<"Maximum elements is: "<<fRet;

    return 0;
}