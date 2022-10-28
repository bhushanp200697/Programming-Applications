//Accept two numbers and display its multiplication

#include<iostream>
using namespace std;

template <class T>
T Multiplication(T A, T B)
{
    T Ans;
    Ans = A * B;
    return Ans;
}

int main()
{
    int No1 = 11, No2 = 21;
    int ret = 0;
    ret = Multiplication(No1,No2);
    cout<<"Multiplication is : "<<ret<<endl;

    float fNo1 = 11.50, fNo2 = 21.55;
    float fret = 0.0;
    fret = Multiplication(fNo1,fNo2);
    cout<<"Multiplication is : "<<fret<<endl;

    return 0;
}