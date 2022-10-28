//Accept the string from user and display the how many number of vowels contain in the string

#include<stdio.h>

int CountVowels(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e')  || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E')  || (*str == 'I') || (*str == 'O') || (*str == 'U'))
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
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountVowels(Arr);
    printf("Number of vowels are :%d",iRet);

    return 0;
}
