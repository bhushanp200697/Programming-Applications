//Accept N numbers from user and display the last occurance position of the number to be search

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

        int SearchLastOccurance(int iValue)
        {
            int iCnt = 0;

            for(iCnt = iSize-1; iCnt >= 0; iCnt--)
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

    ArrayX obj1(iLength);

    obj1.Accept();

    printf("Enter the element to search\n");
    scanf("%d",&iNo);

    iRet = obj1.SearchLastOccurance(iNo);
    if(iRet == -1)
    {
        cout<<"Element is not there in array"<<endl;
    }
    else
    {
        cout<<"Element last occured at : "<<iRet<<endl;
    }

    return 0;
}