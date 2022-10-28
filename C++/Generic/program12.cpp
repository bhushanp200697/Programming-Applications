//Accept N numbers from user and display the Minimum number

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

        T Minimum()
        {
            T Min = Arr[0];

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Min > Arr[iCnt])
                {
                    Min = Arr[iCnt];
                }
            }
            return Min;
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
    iRet = obj1.Minimum();
    cout<<"Minimum elements is: "<<iRet<<endl;

    int fLength = 0;
    float fRet = 0;
    cout<<"Enter the size of array"<<endl;
    cin>>fLength;
    ArrayX <float>obj2(fLength);
    obj2.Accept();
    fRet = obj2.Minimum();
    cout<<"Minimum elements is: "<<fRet;

    return 0;
}