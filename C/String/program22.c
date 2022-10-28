//Accept two string from user and concat first string after the second string

#include<stdio.h>

void strcatX(char *src, char *dest)
{
    while(*src != '\0')
    {
        src++;
    }

    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    *src = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter first string: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter second string: \n");
    scanf(" %[^'\n']s",Brr);

    strcatX(Arr,Brr);
    printf("String after concatination : %s ",Arr);

    return 0;
}
