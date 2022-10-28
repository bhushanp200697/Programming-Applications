//Accept the string from user and reverse that string

#include<stdio.h>

void strrevX(char str[])
{
    char *start = str;
    char *end = str;
    char Temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;
    
    while(start <= end)
    {
        Temp = *start;
        *start = *end;
        *end = Temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);
    printf("String after reverse : %s ",Arr);

    return 0;
}
