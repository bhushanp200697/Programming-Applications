//Accept the string from user and display how many times the character contains in the string

#include<stdio.h>

int Display(char str[], char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character that you want to search:\n");
    scanf(" %c",&cValue);

    iRet = Display(Arr,cValue);
    printf("String contains %c : %d times",cValue,iRet);

    return 0;
}
