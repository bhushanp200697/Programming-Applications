//Accept N numbers from user and display the addition of that numbers

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

        T Addition()
        {
            T iSum = 0;

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }
};

int main()
{
    ArrayX <int>obj1(5);
    obj1.Accept();
    int iRet = obj1.Addition();
    cout<<"Addition of elements is: "<<iRet<<endl;

    ArrayX <float>obj2(5);
    obj2.Accept();
    float fRet = obj2.Addition();
    cout<<"Addition of elements is: "<<fRet;

    return 0;
}
