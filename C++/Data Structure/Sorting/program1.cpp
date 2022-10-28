//Bubble Sort

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
            cout<<"Enter the values : "<<endl;
            for(int i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            cout<<"Elements of the array are: "<<endl;

            for(int i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<"\t";
            }
            cout<<endl;
        }

        void BubbleSort()
        {
            int i = 0, j = 0, temp = 0;

            bool Swap = false;

            for(i = 0; i < iSize; i++)
            {
                Swap = false;

                for(j = 0; j < iSize-i-1; j++)
                {
                    if(Arr[j] > Arr[j+1])
                    {
                        temp = Arr[j];
                        Arr[j] = Arr[j+1];
                        Arr[j+1] = temp;
                        
                        Swap = true;
                    }
                }
 
                if(Swap == false)
                {
                    break;
                }
            }
        }
};

int main()
{
    int iLength = 0;

    cout<<"Enter the size of array"<<endl;
    cin>>iLength;

    ArrayX obj1(iLength);

    obj1.Accept();
    obj1.Display();

    obj1.BubbleSort();
    cout<<"Data after sorting"<<endl;
    obj1.Display();

    return 0;
}