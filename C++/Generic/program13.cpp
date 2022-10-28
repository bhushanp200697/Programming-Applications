//Accept N numbers from user and display the first occurance position of the number to be search

#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int iLength)
        {
            iSize = iLength;
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

        T SearchFirstOccurance(T iValue)
        {
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iValue)
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
    int iNo = 0;
    int iRet = 0;
    cout<<"Enter the size of array"<<endl;
    cin>>iLength;
    ArrayX <int>obj1(iLength);
    obj1.Accept();
    cout<<"Enter the element to search\n";
    cin>>iNo;
    iRet = obj1.SearchFirstOccurance(iNo);
    if(iRet == -1)
    {
        cout<<"Element is not there in array"<<endl;
    }
    else
    {
        cout<<"Element first occured at : "<<iRet<<endl;
    }


    int fLength = 0;
    float fNo = 0;
    float fRet = 0;
    cout<<"Enter the size of array"<<endl;
    cin>>iLength;
    ArrayX <float>obj2(iLength);
    obj2.Accept();
    cout<<"Enter the element to search\n";
    cin>>fNo;
    fRet = obj2.SearchFirstOccurance(fNo);
    if(fRet == -1)
    {
        cout<<"Element is not there in array"<<endl;
    }
    else
    {
        cout<<"Element first occured at : "<<iRet<<endl;
    }

    return 0;
}