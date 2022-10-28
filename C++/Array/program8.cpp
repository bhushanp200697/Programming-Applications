//Accept N numbers from user and display the element having more frequency of occurances

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

        int Frequency(int iValue)
        {
            int iFrequency = 0;

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iValue)
                {
                    iFrequency++;
                }
            }
            return iFrequency;
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

    printf("Enter the element to calculate the frequency\n");
    scanf("%d",&iNo);

    iRet = obj1.Frequency(iNo);
    cout<<"Frequency is : "<<iRet;

    return 0;
}