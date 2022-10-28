//Accept the string from user and display how many times the character contains in the string

#include<iostream>
using namespace std;

int display(char *str, char Ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == Ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    cout<<"Enter string"<<endl;
    cin.getline(arr,20);

    cout<<"Enter the character that you want to search"<<endl;
    cin>>cValue;

    iRet = display(arr, cValue);
    cout<<"string contains "<<cValue <<" : "<< iRet<<" times"<<endl;
}
