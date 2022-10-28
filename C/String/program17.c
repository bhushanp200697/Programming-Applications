//Accept the string from user and display that string in lowercase

#include<stdio.h>

void strlwrX(char str[])
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);
    printf("String in lower case is : %s ",Arr);

    return 0;
}
