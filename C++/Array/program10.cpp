//Accept N numbers from user and check whether the enterd number is there in given numbers or not

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

        bool Search(int iValue)
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
                return false;
            }
            else
            {
                return true;
            }
        }
};

int main()
{
    int iLength = 0;
    int iNo = 0;
    bool bRet;

    cout<<"Enter the size of array"<<endl;
    cin>>iLength;

    ArrayX obj1(iLength);

    obj1.Accept();

    printf("Enter the element to search\n");
    scanf("%d",&iNo);

    bRet = obj1.Search(iNo);
    if(bRet == true)
    {
        cout<<"Element is there in array"<<endl;
    }
    else
    {
        cout<<"Element is not there in array"<<endl;
    }
    return 0;
}