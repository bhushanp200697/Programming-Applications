//Accept N numbers from user and display it in reverse order

#include<iostream>
using namespace std;

template<class T>
void ForwardDisplay(T Arr[], int size)
{
    int i = 0;
    for(i = 0; i < size;i++)
    {
        cout<<Arr[i]<<endl;
    }
}

template<class T>
void ReverseDisplay(T Arr[], int size)
{
    int i = 0, j = 0;
    T temp;

    for(i = size-1; i >= 0; i--)
    {
        cout<<Arr[i]<<endl;
    }
}

int main()
{
    int Brr[] = {10,20,30};
    cout<<"Forward Display"<<endl;
    ForwardDisplay(Brr,3);
    cout<<"Reverse Display"<<endl;
    ReverseDisplay(Brr,3);

    float Crr[] = {10.11,20.11,30.11};
    cout<<"Forward Display"<<endl;
    ForwardDisplay(Crr,3);
    cout<<"Reverse Display"<<endl;
    ReverseDisplay(Crr,3);

    return 0;
}