//Insertion Sort

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

        void InsertionSort()
        {
            int i = 0, j= 0, selected = 0;

            for(i = 1; i < iSize; i++)
            {
                for(j = i-1, selected = Arr[i]; (j >=0) && (Arr[j] > selected) ;j--)
                {
                    Arr[j+1] = Arr[j];
                }
                Arr[j+1] = selected;
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

    obj1.InsertionSort();
    cout<<"Data after sorting"<<endl;
    obj1.Display();

    return 0;
}