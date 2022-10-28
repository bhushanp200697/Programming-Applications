// write generic program to accept one value and one number from user and print that value that no of times
/*
    input:  M    7
    Output: M    M   M   M   M   M   M


    input:  11   3
    Output: 11   11   11

    input:  3.5    4
    Output: 3.5   3.5   3.5   3.5
*/

#include<iostream>
using namespace std;

template <class T>
void Display(T Value,int iSize)
{
    int i = 0;

    for(i = 1; i <= iSize; i++)
    {
        cout<<Value<<"\t";
    }
    cout<<endl;
}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.5,4);

    return 0;
}