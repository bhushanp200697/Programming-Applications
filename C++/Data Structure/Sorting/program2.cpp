//Selection Sort

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

        void SelectionSort()
        {
            int i = 0, j = 0, min_index = 0, temp = 0;

            for(i = 0; i < iSize-1; i++)
            {
                min_index = i;
                for(j = i+1; j < iSize; j++)
                {
                    if(Arr[min_index] > Arr[j])
                    {
                        min_index = j;
                    }
                }
                if(i != min_index)
                {
                    temp = Arr[i];
                    Arr[i] = Arr[min_index];
                    Arr[min_index] = temp;
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

    obj1.SelectionSort();
    cout<<"Data after sorting"<<endl;
    obj1.Display();

    return 0;
}