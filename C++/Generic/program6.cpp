//Accept three numbers and display largest number

#include<iostream>
using namespace std;

template <class T>
T Maximum(T A, T B, T C)
{
    if((A >= B) && (A >= C))
    {
        return A;
    }
    else if((B >= A) && (B >= C))
    {
        return B;
    }
    else
    {
        return C;
    }
}

int main()
{
    int No1 = 21, No2 = 11, No3 = 51;
    int ret = 0;
    ret = Maximum(No1,No2,No3);
    cout<<"Maximum number is : "<<ret<<endl;

    float fNo1 = 51.50, fNo2 = 21.55, fNo3 = 11.55;
    float fret = 0.0;
    fret = Maximum(fNo1,fNo2,fNo3);
    cout<<"Maximum number is : "<<fret<<endl;

    return 0;
}